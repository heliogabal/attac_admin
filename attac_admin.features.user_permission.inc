<?php
/**
 * @file
 * attac_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function attac_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access killfile feed'.
  $permissions['access killfile feed'] = array(
    'name' => 'access killfile feed',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'killfile',
  );

  // Exported permission: 'access killfiled content'.
  $permissions['access killfiled content'] = array(
    'name' => 'access killfiled content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'killfile',
  );

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer add another'.
  $permissions['administer add another'] = array(
    'name' => 'administer add another',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'addanother',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dnd'.
  $permissions['administer dnd'] = array(
    'name' => 'administer dnd',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dnd',
  );

  // Exported permission: 'administer flickr settings'.
  $permissions['administer flickr settings'] = array(
    'name' => 'administer flickr settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald_flickr',
  );

  // Exported permission: 'administer follow'.
  $permissions['administer follow'] = array(
    'name' => 'administer follow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer simplify'.
  $permissions['administer simplify'] = array(
    'name' => 'administer simplify',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'administer system menus'.
  $permissions['administer system menus'] = array(
    'name' => 'administer system menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_menu',
  );

  // Exported permission: 'administer twitter'.
  $permissions['administer twitter'] = array(
    'name' => 'administer twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'bypass killfiled content'.
  $permissions['bypass killfiled content'] = array(
    'name' => 'bypass killfiled content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'killfile',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'change follow link titles'.
  $permissions['change follow link titles'] = array(
    'name' => 'change follow link titles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'create ag_seite content'.
  $permissions['create ag_seite content'] = array(
    'name' => 'create ag_seite content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of audio type'.
  $permissions['create atom of audio type'] = array(
    'name' => 'create atom of audio type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of text type'.
  $permissions['create atom of text type'] = array(
    'name' => 'create atom of text type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of twitter type'.
  $permissions['create atom of twitter type'] = array(
    'name' => 'create atom of twitter type',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create gruppe content'.
  $permissions['create gruppe content'] = array(
    'name' => 'create gruppe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create partner_logo content'.
  $permissions['create partner_logo content'] = array(
    'name' => 'create partner_logo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create plenum content'.
  $permissions['create plenum content'] = array(
    'name' => 'create plenum content',
    'roles' => array(
      'editor' => 'editor',
      'plenum' => 'plenum',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create protokoll content'.
  $permissions['create protokoll content'] = array(
    'name' => 'create protokoll content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
      'protokolle' => 'protokolle',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ag_seite content'.
  $permissions['delete any ag_seite content'] = array(
    'name' => 'delete any ag_seite content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete any gruppe content'.
  $permissions['delete any gruppe content'] = array(
    'name' => 'delete any gruppe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner_logo content'.
  $permissions['delete any partner_logo content'] = array(
    'name' => 'delete any partner_logo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any plenum content'.
  $permissions['delete any plenum content'] = array(
    'name' => 'delete any plenum content',
    'roles' => array(
      'plenum' => 'plenum',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any protokoll content'.
  $permissions['delete any protokoll content'] = array(
    'name' => 'delete any protokoll content',
    'roles' => array(
      'protokolle' => 'protokolle',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ag_seite content'.
  $permissions['delete own ag_seite content'] = array(
    'name' => 'delete own ag_seite content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete own gruppe content'.
  $permissions['delete own gruppe content'] = array(
    'name' => 'delete own gruppe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner_logo content'.
  $permissions['delete own partner_logo content'] = array(
    'name' => 'delete own partner_logo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own plenum content'.
  $permissions['delete own plenum content'] = array(
    'name' => 'delete own plenum content',
    'roles' => array(
      'editor' => 'editor',
      'plenum' => 'plenum',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own protokoll content'.
  $permissions['delete own protokoll content'] = array(
    'name' => 'delete own protokoll content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
      'protokolle' => 'protokolle',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ag_seite content'.
  $permissions['edit any ag_seite content'] = array(
    'name' => 'edit any ag_seite content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit any gruppe content'.
  $permissions['edit any gruppe content'] = array(
    'name' => 'edit any gruppe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner_logo content'.
  $permissions['edit any partner_logo content'] = array(
    'name' => 'edit any partner_logo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any plenum content'.
  $permissions['edit any plenum content'] = array(
    'name' => 'edit any plenum content',
    'roles' => array(
      'plenum' => 'plenum',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any protokoll content'.
  $permissions['edit any protokoll content'] = array(
    'name' => 'edit any protokoll content',
    'roles' => array(
      'protokolle' => 'protokolle',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any user follow links'.
  $permissions['edit any user follow links'] = array(
    'name' => 'edit any user follow links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit own ag_seite content'.
  $permissions['edit own ag_seite content'] = array(
    'name' => 'edit own ag_seite content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit own follow links'.
  $permissions['edit own follow links'] = array(
    'name' => 'edit own follow links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'edit own gruppe content'.
  $permissions['edit own gruppe content'] = array(
    'name' => 'edit own gruppe content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partner_logo content'.
  $permissions['edit own partner_logo content'] = array(
    'name' => 'edit own partner_logo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own plenum content'.
  $permissions['edit own plenum content'] = array(
    'name' => 'edit own plenum content',
    'roles' => array(
      'editor' => 'editor',
      'plenum' => 'plenum',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own protokoll content'.
  $permissions['edit own protokoll content'] = array(
    'name' => 'edit own protokoll content',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
      'protokolle' => 'protokolle',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit site follow links'.
  $permissions['edit site follow links'] = array(
    'name' => 'edit site follow links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'follow',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'flag facebook_artikel'.
  $permissions['flag facebook_artikel'] = array(
    'name' => 'flag facebook_artikel',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag frontpage_artikel'.
  $permissions['flag frontpage_artikel'] = array(
    'name' => 'flag frontpage_artikel',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
      'news' => 'news',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'import flickr images'.
  $permissions['import flickr images'] = array(
    'name' => 'import flickr images',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald_flickr',
  );

  // Exported permission: 'post to twitter'.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'post to twitter with global account'.
  $permissions['post to twitter with global account'] = array(
    'name' => 'post to twitter with global account',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'sticky and promote'.
  $permissions['sticky and promote'] = array(
    'name' => 'sticky and promote',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'hide_sticky_promote',
  );

  // Exported permission: 'undelete killfiled content'.
  $permissions['undelete killfiled content'] = array(
    'name' => 'undelete killfiled content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'killfile',
  );

  // Exported permission: 'unflag facebook_artikel'.
  $permissions['unflag facebook_artikel'] = array(
    'name' => 'unflag facebook_artikel',
    'roles' => array(
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag frontpage_artikel'.
  $permissions['unflag frontpage_artikel'] = array(
    'name' => 'unflag frontpage_artikel',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
      'news' => 'news',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use add another'.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'addanother',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view hidden fields'.
  $permissions['view hidden fields'] = array(
    'name' => 'view hidden fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplify',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
      'ag' => 'ag',
      'editor' => 'editor',
    ),
    'module' => 'scheduler',
  );

  return $permissions;
}
