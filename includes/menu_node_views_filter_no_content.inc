<?php
/**
 * Definition of menu_node_views_filter_no_content.
 */

/**
 * Filter: Menus not registered in the 'menu_node' table.
 */
class menu_node_views_filter_no_content extends views_handler_filter {

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
    $mlid_list = db_select('menu_node', 'mn')
      ->fields('mn', array('mlid'))
      ->execute()
      ->fetchCol();
    if (!empty($mlid_list)) {
      $snippet = $table . '.mlid NOT IN (' . implode(', ', $mlid_list) . ') AND ';
    }
    $snippet .= $table . ".module <> 'system'";
    $this->query->add_where_expression(0, $snippet);
  }
}
