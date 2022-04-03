Menu Node Views
===============

The Menu Node Views module provides Views integration for nodes assigned to the menu system. It adds new, menu-related filter/sort criteria and fields to those available by views. (This module is in alpha development.)


Dependencies
------------

Use of the module requires that you download and install the [Menu Node API](https://backdropcms.org/project/menu_node)


Installation
---------------

Install this module using the official Backdrop CMS instructions at
https://backdropcms.org/guide/modules


How to use
----------

The module adds new, menu-related filter/sort criteria to those available by views:
- Menu: Depth - The depth of the menu item.
- Menu: Hidden - The menu item visibility.
- Menu: Link path - The link path for the menu item.
- Menu: Link title - The link text used for the menu item.
- Menu: Menu link id - The unique menu link identifier.
- Menu: Menu name - The name of the menu.
- Menu: Node id - The node id, menu-sensitive.
- Menu: Parent - The top-level parent of the menu item.
- Menu: Parent menu link id - The unique menu link identifier for this item's parent.
- Menu: Weight - The weight of the menu item.

More filters:
- Menu: No content - Menu items without content.
- Content: Content without menu entry.

When a view is configured to show fields (Format > Show: Fields), the module allows you to add new fields:
- Menu: Depth - The depth of the menu item.
- Menu: Description - The description used for the menu item.
- Menu: Hidden - The menu item visibility.
- Menu: Link path - The link path for the menu item.
- Menu: Link title - The link text used for the menu item.
- Menu: Menu link id - The unique menu link identifier.
- Menu: Menu name - The name of the menu.
- Menu: Node id - The node id, menu-sensitive.
- Menu: Parent - The top-level parent of the menu item.
- Menu: Parent menu link id - The unique menu link identifier for this item's parent.
- Menu: Weight - The weight of the menu item.

Sources:
- https://www.drupal.org/project/menu_node_views/issues/2173841
- https://github.com/backdrop-contrib/menu_node_views/issues/1

Issues
------

Bugs and Feature requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/menu_node_views/issues


Current Maintainers
-------------------

- Attila Vasas (https://github.com/vasasa).
- Seeking additional maintainers.


Credits
-------

- Ported to Backdrop CMS by Attila Vasas (https://github.com/vasasa).
- Originally written for Drupal by: https://www.drupal.org/node/498774/committers


License
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.


Screenshot
----------

![Menu Node Views module screenshot](https://github.com/backdrop-contrib/menu_node_views/blob/1.x-1.x/images/screenshot.png)
