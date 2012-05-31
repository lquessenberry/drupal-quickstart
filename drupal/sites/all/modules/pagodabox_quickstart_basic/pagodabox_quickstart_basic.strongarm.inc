<?php
/**
 * @file
 * pagodabox_quickstart_basic.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pagodabox_quickstart_basic_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '180';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_Z_KQyXTcIGmFPRfGZOOTJ1xsEckXlqMhF53CkTgnOVA.css',
    '82ca759946e9bf33a7ff59b358a1888568276da42d9901be1034a0c0e072e866' => 'public://css/css_vdCzpt5RRVtDzGpF94dcgdqUpCnRccmWqw97zGgqJww.css',
    '8d430bccf24c5d546e444dcd23fc6c61a49de1ed9c1e404d82c78c0f9ac0f1bc' => 'public://css/css_Vn_p7xhZmS8yWWx26P0Cc7Tm0GG2K1gLWEoVrhw5xxg.css',
    'fdebd8c4e97db417b89428fa0b8a974a14f1bbd7140a4cfe3f3e4b1ac6c5b45b' => 'public://css/css_oLMhlAjtEjfijMhrjRHl1kyE8FeWl1R9oOPEAzlJuCs.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_ABmXGW3jlpNaBRmWVTJUFNYGbVFnilqYg_EngwXFiNc.css',
    'd401ff00529278775cc09d3f49c747fa47bbea354bfa7054ce6f15a42d115ff8' => 'public://css/css_g6BHMTouiQTdbzWDEEGT2nkJX-QqclhtbzG6sUKituY.css',
    '6ac859a5eb97fdebb604a49caaa00dc677b93e246ac8223bca3713c1287a4a88' => 'public://css/css_Birq5ayYeqCwVFTgQsQ8lxRub7QYLYsfqqWBxmCq3_A.css',
    'ebd4d304894f84bcf968e6ea4494a906716e6119ac6918b592f9400a8c3675b1' => 'public://css/css_WSCXw4Rxnff_6TX6K6xEIAHOsUid1X2fKzEMES2-Nds.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_3jHghlMLrjr9xXAC0JufqSSch3oAbkZstSqYdc4uuck.js',
    'd0e51ee974ac2ed8765338dae8b4b58fbf0f425817df496ace99639c2d72f0b6' => 'public://js/js_D5V3F_CV-V98am31mB0AGkKBnUw6nFuVnEbiBMascWQ.js',
    '6e7764b4689519eea37a753cec329408e6482036a776797fdc47269188a59d53' => 'public://js/js_Qe449gDLNgep2Z4B6dZf3nnnHgVQHEdGjZpqSUg4ayY.js',
    'e3bf992484922936150562d24c6d73991b84589ec5b1ca4cee5b84df618c2fbb' => 'public://js/js_d6U39qbMxm4xDcv1MuMrVTo9DWqLPpUTVPnfC97q-bg.js',
    '4a16c95b45c1f6e6878aefd13eb264523124e866fca2c9a198212067659eb129' => 'public://js/js_cB-fEn78JEWHGbw3X4Md4X3hxPd25NUdUN5i1_ww9hM.js',
    'c809a977ad507f34ba5e6e379ba353ae5375d8f87d5841c8bd9d1ee859e7285b' => 'public://js/js_kBgO6YgnyeqBcwZuxZYwedYA1xnAVY3nXHRe5D3TobY.js',
    'e09fd94e0596d6681a78b08b4f203611b5ab80c147f8fb257755e0b26fca917b' => 'public://js/js_PbDv3sV0L8URCxDzEzCkMTZlxCJqUVWY4fOIIOpf8o8.js',
    '5228426833d980670b53e8aaf0aaf60e0e0021bcdf82a2c082e71a577ffc80a5' => 'public://js/js_JFm92Z1Yobbh8r3MPeD98wvLWPZhk0xirHkscaCmUO0.js',
    '1f38bccf43940b798384ed90a1d5282a5d1d197e13262acae12cc42c90578303' => 'public://js/js_X0yd79-XI_UYW-2noEcZRoI7DbfUmY7ar0mvY9AZqfI.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_default_scheme';
  $strongarm->value = 'public';
  $export['file_default_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = '../private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '../tmp';
  $export['file_temporary_path'] = $strongarm;

  return $export;
}
