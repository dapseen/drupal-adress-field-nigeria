<?php

/**
 * @file
 * The default format for Nigeria adresses.
 */

$plugin = array(
  'title' => t('Address form (specific for Nigeria)'),
  'format callback' => 'addressfield_ng_format_address_generate',
  'type' => 'address',
  'weight' => -100,
);

/**
 * Format callback for Nigeria address.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function address_field_nigeria_format_address_generate(&$format, $address, $context = array()) {
  if ($address['country'] == 'NG') {
    // unset($format['locality_block']['administrative_area']);
    $format['locality_block']['administrative_area']['#options'] = array(
      ''   => t('--Choose a state--'),
      'Abia' => t('Abia'),
      'Adamawa' => t('Adamawa'),
      'Akwa Ibom' => t('Akwa Ibom'),
      'Anambra' => t('Anambra'),
      'Bauchi' => t('Bauchi'),
      'Bayelsa' => t('Bayelsa'),
      'Benue' => t('Benue'),
      'Borno' => t('Borno'),
      'Cross River' => t('Cross River'),
      'Delta' => t('Delta'),
      'Ebonyi' => t('Ebonyi'),
      'Edo' => t('Edo'),
      'Ekiti' => t('Ekiti'),
      'Enugu' => t('Enugu'),
      'Abuja' => t('Federal Capital Territory'),
      'Gombe' => t('Gombe'),
      'Imo' => t('Imo'),
      'Jigawa' => t('Jigawa'),
      'Kaduna' => t('Kaduna'),
      'Kano' => t('Kano'),
      'Katsina' => t('Katsina'),
      'Kebbi' => t('Kebbi'),
      'Kogi' => t('Kogi'),
      'Kwara' => t('Kwara'),
      'Lagos' => t('Lagos'),
      'Nassarawa' => t('Nassarawa'),
      'Niger' => t('Niger'),
      'Ogun' => t('Ogun'),
      'Ondo' => t('Ondo'),
      'Osun' => t('Osun'),
      'Oyo' => t('Oyo'),
      'Plateau' => t('Plateau'),
      'Rivers' => t('Rivers'),
      'Sokoto' => t('Sokoto'),
      'Taraba' => t('Taraba'),
      'Yobe' => t('Yobe'),
      'Zamfara' => t('Zamfara'),
    );
    $format['locality_block']['locality'] = array(
      '#title' => t('Area'),
      '#size' => 30,
      '#required' => TRUE,
      '#prefix' => ' ',
      '#attributes' => array('class' => array('locality')),
    );
    $format['locality_block']['postal_code'] = array(
      '#title' => t('Postal Code'),
      '#size' => 10,
      '#required' => TRUE,
      '#attributes' => array('class' => array('postal-code')),
      '#weight' => 3,
    );

    // Default district for Lagos state.
    if ($address['administrative_area'] == 'Lagos') {
      $format['locality_block']['locality']['#options'] = array(
        '' => t('-Choose an area-'),
        'Agbado' => t('Agbado'),
        'Agboyi' => t('Agboyi'),
        'Agege' => t('Agege'),
        'Ajeromi' => t('Ajeromi'),
        'Alimosho' => t('Alimosho'),
        'Apapa' => t('Apapa'),
        'Apapa-Iganmu' => t('Apapa-Iganmu'),
        'Badagry West' => t('Badagry West'),
        'Badagry' => t('Badagry'),
        'Bariga' => t('Bariga'),
        'Bayeku' => t('Bayeku'),
        'Coker Aguda' => t('Coker Aguda'),
        'Egbe Idimu' => t('Egbe Idimu'),
        'Ejigbo' => t('Ejigbo'),
        'Epe' => t('Epe'),
        'Eti Osa East' => t('Eti Osa East'),
        'Eti Osa West' => t('Eti Osa West'),
        'Festac Town' => t('Festac Town'),
        'Iba' => t('Iba'),
        'Ibeju' => t('Ibeju'),
        'Ifako-Ijaiye' => t('Ifako-Ijaiye'),
        'Ifelodun' => t('Ifelodun'),
        'Igando' => t('Igando'),
        'Igbogbo' => t('Igbogbo'),
        'Ijede' => t('Ijede'),
        'Ikeja' => t('Ikeja'),
        'Ikorodu' => t('Ikorodu'),
        'Ikorodu North' => t('Ikorodu North'),
        'Ikorodu West' => t('Ikorodu West'),
        'Ikosi Ejinrin' => t('Ikosi Ejinrin'),
        'Ikotun' => t('Ikotun'),
        'Ikoyi' => t('Ikoyi'),
        'Imota' => t('Imota'),
        'Ipaja' => t('Ipaja'),
        'Iru' => t('Iru'),
        'Isolo' => t('Isolo'),
        'Itire Ikate' => t('Itire Ikate'),
        'Ketu' => t('Ketu'),
        'Kosofe' => t('Kosofe'),
        'Lagos Island East' => t('Lagos Island East'),
        'Lagos Island West' => t('Lagos Island West'),
        'Lagos Mainland' => t('Lagos Mainland'),
        'Lekki' => t('Lekki'),
        'Mosan' => t('Mosan'),
        'Mushin' => t('Mushin'),
        'Odi Olowo' => t('Odi Olowo'),
        'Ojo' => t('Ojo'),
        'Ojodu' => t('Ojodu'),
        'Ojokoro' => t('Ojokoro'),
        'Ojuwoye' => t('Ojuwoye'),
        'Oke-Odo' => t('Oke-Odo'),
        'Okunola' => t('Okunola'),
        'Olorunda' => t('Olorunda'),
        'Onigbongbo' => t('Onigbongbo'),
        'Oriade' => t('Oriade'),
        'Orile Agege' => t('Orile Agege'),
        'Oshodi' => t('Oshodi'),
        'Oto-Awori' => t('Oto-Awori'),
        'Shomolu' => t('Shomolu'),
        'Surulere' => t('Surulere'),
        'Victoria Island' => t('Victoria Island'),
        'Yaba' => t('Yaba'),
      );
    }

    // Default district for FCT (Abuja).
    if ($address['administrative_area'] == 'Abuja') {
      $format['locality_block']['locality']['#options'] = array(
        '' => t('-Choose an area-'),
        'Asokoro' => t('Asokoro'),
        'Central Business District' => t('Central Business District'),
        'Garki Area 1' => t('Garki Area 1'),
        'Garki Area 2' => t('Garki Area 2'),
        'Garki Area 3' => t('Garki Area 3'),
        'Garki Area 7' => t('Garki Area 7'),
        'Garki Area 8' => t('Garki Area 8'),
        'Garki Area 10' => t('Garki Area 10'),
        'Garki Area 11' => t('Garki Area 11'),
        'Maitama' => t('Maitama'),
        'Wuse II' => t('Wuse II'),
        'Wuse Zone 1' => t('Wuse Zone 1'),
        'Wuse Zone 2' => t('Wuse Zone 2'),
        'Wuse Zone 3' => t('Wuse Zone 3'),
        'Wuse Zone 4' => t('Wuse Zone 4'),
        'Wuse Zone 5' => t('Wuse Zone 5'),
        'Wuse Zone 6' => t('Wuse Zone 6'),
        'Wuse Zone 7' => t('Wuse Zone 7'),
        'Three Arms Zone' => t('Three Arms Zone'),
      );
    }

    // Default district for FCT (Abuja).
    if ($address['administrative_area'] == 'Rivers') {
      $format['locality_block']['locality']['#options'] = array(
        '' => t('-Choose an area-'),
        'Alo-mini' => t('Alo-mini'),
        'Amadi flat' => t('Amadi flat'),
        'Bori kiri' => t('Bori kiri'),
        'Diobu mile 1' => t('Diobu mile 1'),
        'Diobu mile 2' => t('Diobu mile 2'),
        'Diobu mile 3' => t('Diobu mile 3'),
        'Diobu mile 4' => t('Diobu mile 4'),
        'D-line' => t('D-line'),
        'Eagle island rumueme/Oroakwo' => t('Eagle island rumueme/Oroakwo'),
        'Igwa layout' => t('Igwa layout'),
        'Ikwerre' => t('Ikwerre'),
        'Magbuoba' => t('Magbuoba'),
        'Mbiama Rd.' => t('Mbiama Rd.'),
        'New G.R.A' => t('New G.R.A'),
        'New layout' => t('New layout'),
        'Ochoma layout' => t('Ochoma layout'),
        'Old G.R.A' => t('Old G.R.A'),
        'Old Township' => t('Old Township'),
        'Port harcourt Rd.' => t('Port harcourt Rd.'),
        'Rumukrueshi' => t('Rumukrueshi'),
        'Rumuokwuta' => t('Rumuokwuta'),
        'Town' => t('Town'),
        'Trans  Amadi' => t('Trans  Amadi'),
      );
    }

    // Other states to follow.
  }
  // Format render.
  if ($context['mode'] == 'render') {
    $format['locality_block']['administrative_area']['#weight'] = 2;
    $format['locality_block']['locality']['#weight'] = 1;
    $format['locality_block']['postal_code']['#weight'] = 3;
    $format['locality_block']['postal_code']['#prefix'] = ' ';
  }
  // Check ajax form.
  if ($context['mode'] == 'form' && $address['country'] == 'NG') {
    $format['locality_block']['administrative_area']['#ajax'] = array(
      'callback' => 'addressfield_standard_widget_refresh',
      'wrapper' => $format['#wrapper_id'],
      'method' => 'replace',
    );
  }
}
