<?php
/**
 * Definition of menu_node_views_filter_content_without_menu.
 */

/**
 * Filter: Contents not registered in the 'menu_node' table.
 */
class menu_node_views_filter_content_without_menu extends views_handler_filter {

  /**
   * Unavailable option: "Expose this filter to visitors"
   */
  function can_expose() { return FALSE; }

  /**
   * Override query() of views_handler_filter class.
   */
  function query() {
    $snippet = '';
    $table = $this->ensure_my_table();
    $nid_list = db_select('menu_node', 'mn')
      ->fields('mn', array('nid'))
      ->execute()
      ->fetchCol();
    if (!empty($nid_list)) {
      $snippet = $table . '.nid NOT IN (' . implode(', ', $nid_list) . ')';
    }
    $this->query->add_where_expression(0, $snippet);
  }
}
