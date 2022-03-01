const char WIFI_HTML[] PROGMEM = R"=====(
 <!DOCTYPE html>
 <html lang="en">
   <style>
      .card{
      max-width: 350px;
      min-height: 250px;
      background: #02b875;
      padding: 30px;
      box-sizing: border-box;
      color: #FFF;
      margin: auto;
      box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
      }
   </style>
 <body>
 <div class="card">
 <h1>Enter Your WiFi Network Name and Password</h1>
 <form action=/set_wifi>
 <label class="label">Network Name</label><br>
 <input type = "text" name = "ssid">
 <br>
 <label>Network Password</label><br>
 <input type = "text" name = "pass">
 <br>
 <br>
 <input type="submit" value="Set Values">
 </form>
 </div>
 </body>
 </html>
)=====";

const char SETTINGS_HTML[] PROGMEM = R"=====(
<!DOCTYPE html>
 <html lang="en">
   <style>
      .card{
      max-width: 350px;
      min-height: 250px;
      background: #02b875;
      padding: 30px;
      box-sizing: border-box;
      color: #FFF;
      margin: auto;
      box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
      }
   </style>
 <body>
<div class="card">
<h2>Valar Systems</h2>
<h3>Motion Control</h3>
<p>To learn more, please visit <a href="https://help.valarsystems.com/docs/VAL-1000/VAL-1000">https://help.valarsystems.com</a></p>
<p>To add this device to your network go to <a href="http://192.168.4.1/wifi"> http://192.168.4.1</a></p>
<p>To remove this device from your network, press and hold the wifi reset button for 3+ seconds.</p>
</div>
<br>



<div class="card">
<h2>Set Schedule</h2>
<p>This feature requires an internet connection in order to automatically adjust for your timezone and daylight savings. Turning on either timer below will start an internet connection to an NTP time server in order to periodically update and sync your time.</p>
<br>
<form action="/schedule">
 <h3>Select Your Time Zone</h3>
<select name="timezone" >
  <option disabled selected style='display:none;'>%PLACEHOLDER_TIMEZONE%</option>

  <optgroup label="US (Common)">  
    <option value="America/Puerto_Rico">Puerto Rico (Atlantic)</option>
    <option value="America/New_York">New York (Eastern)</option>
    <option value="America/Chicago">Chicago (Central)</option>
    <option value="America/Denver">Denver (Mountain)</option>
    <option value="America/Phoenix">Phoenix (MST)</option>
    <option value="America/Los_Angeles">Los Angeles (Pacific)</option>
    <option value="America/Anchorage">Anchorage (Alaska)</option>
    <option value="Pacific/Honolulu">Honolulu (Hawaii)</option>
  </optgroup>

  <optgroup label="America">
    <option value="America/Adak">Adak</option>
    <option value="America/Anchorage">Anchorage</option>
    <option value="America/Anguilla">Anguilla</option>
    <option value="America/Antigua">Antigua</option>
    <option value="America/Araguaina">Araguaina</option>
    <option value="America/Argentina/Buenos_Aires">Argentina - Buenos Aires</option>
    <option value="America/Argentina/Catamarca">Argentina - Catamarca</option>
    <option value="America/Argentina/ComodRivadavia">Argentina - ComodRivadavia</option>
    <option value="America/Argentina/Cordoba">Argentina - Cordoba</option>
    <option value="America/Argentina/Jujuy">Argentina - Jujuy</option>
    <option value="America/Argentina/La_Rioja">Argentina - La Rioja</option>
    <option value="America/Argentina/Mendoza">Argentina - Mendoza</option>
    <option value="America/Argentina/Rio_Gallegos">Argentina - Rio Gallegos</option>
    <option value="America/Argentina/Salta">Argentina - Salta</option>
    <option value="America/Argentina/San_Juan">Argentina - San Juan</option>
    <option value="America/Argentina/San_Luis">Argentina - San Luis</option>
    <option value="America/Argentina/Tucuman">Argentina - Tucuman</option>
    <option value="America/Argentina/Ushuaia">Argentina - Ushuaia</option>
    <option value="America/Aruba">Aruba</option>
    <option value="America/Asuncion">Asuncion</option>
    <option value="America/Atikokan">Atikokan</option>
    <option value="America/Atka">Atka</option>
    <option value="America/Bahia">Bahia</option>
    <option value="America/Barbados">Barbados</option>
    <option value="America/Belem">Belem</option>
    <option value="America/Belize">Belize</option>
    <option value="America/Blanc-Sablon">Blanc-Sablon</option>
    <option value="America/Boa_Vista">Boa Vista</option>
    <option value="America/Bogota">Bogota</option>
    <option value="America/Boise">Boise</option>
    <option value="America/Buenos_Aires">Buenos Aires</option>
    <option value="America/Cambridge_Bay">Cambridge Bay</option>
    <option value="America/Campo_Grande">Campo Grande</option>
    <option value="America/Cancun">Cancun</option>
    <option value="America/Caracas">Caracas</option>
    <option value="America/Catamarca">Catamarca</option>
    <option value="America/Cayenne">Cayenne</option>
    <option value="America/Cayman">Cayman</option>
    <option value="America/Chicago">Chicago</option>
    <option value="America/Chihuahua">Chihuahua</option>
    <option value="America/Coral_Harbour">Coral Harbour</option>
    <option value="America/Cordoba">Cordoba</option>
    <option value="America/Costa_Rica">Costa Rica</option>
    <option value="America/Cuiaba">Cuiaba</option>
    <option value="America/Curacao">Curacao</option>
    <option value="America/Danmarkshavn">Danmarkshavn</option>
    <option value="America/Dawson">Dawson</option>
    <option value="America/Dawson_Creek">Dawson Creek</option>
    <option value="America/Denver">Denver</option>
    <option value="America/Detroit">Detroit</option>
    <option value="America/Dominica">Dominica</option>
    <option value="America/Edmonton">Edmonton</option>
    <option value="America/Eirunepe">Eirunepe</option>
    <option value="America/El_Salvador">El Salvador</option>
    <option value="America/Ensenada">Ensenada</option>
    <option value="America/Fortaleza">Fortaleza</option>
    <option value="America/Fort_Wayne">Fort Wayne</option>
    <option value="America/Glace_Bay">Glace Bay</option>
    <option value="America/Godthab">Godthab</option>
    <option value="America/Goose_Bay">Goose Bay</option>
    <option value="America/Grand_Turk">Grand Turk</option>
    <option value="America/Grenada">Grenada</option>
    <option value="America/Guadeloupe">Guadeloupe</option>
    <option value="America/Guatemala">Guatemala</option>
    <option value="America/Guayaquil">Guayaquil</option>
    <option value="America/Guyana">Guyana</option>
    <option value="America/Halifax">Halifax</option>
    <option value="America/Havana">Havana</option>
    <option value="America/Hermosillo">Hermosillo</option>
    <option value="America/Indiana/Indianapolis">Indiana - Indianapolis</option>
    <option value="America/Indiana/Knox">Indiana - Knox</option>
    <option value="America/Indiana/Marengo">Indiana - Marengo</option>
    <option value="America/Indiana/Petersburg">Indiana - Petersburg</option>
    <option value="America/Indiana/Tell_City">Indiana - Tell City</option>
    <option value="America/Indiana/Vevay">Indiana - Vevay</option>
    <option value="America/Indiana/Vincennes">Indiana - Vincennes</option>
    <option value="America/Indiana/Winamac">Indiana - Winamac</option>
    <option value="America/Indianapolis">Indianapolis</option>
    <option value="America/Inuvik">Inuvik</option>
    <option value="America/Iqaluit">Iqaluit</option>
    <option value="America/Jamaica">Jamaica</option>
    <option value="America/Jujuy">Jujuy</option>
    <option value="America/Juneau">Juneau</option>
    <option value="America/Kentucky/Louisville">Kentucky - Louisville</option>
    <option value="America/Kentucky/Monticello">Kentucky - Monticello</option>
    <option value="America/Knox_IN">Knox IN</option>
    <option value="America/La_Paz">La Paz</option>
    <option value="America/Lima">Lima</option>
    <option value="America/Los_Angeles">Los Angeles</option>
    <option value="America/Louisville">Louisville</option>
    <option value="America/Maceio">Maceio</option>
    <option value="America/Managua">Managua</option>
    <option value="America/Manaus">Manaus</option>
    <option value="America/Marigot">Marigot</option>
    <option value="America/Martinique">Martinique</option>
    <option value="America/Matamoros">Matamoros</option>
    <option value="America/Mazatlan">Mazatlan</option>
    <option value="America/Mendoza">Mendoza</option>
    <option value="America/Menominee">Menominee</option>
    <option value="America/Merida">Merida</option>
    <option value="America/Mexico_City">Mexico City</option>
    <option value="America/Miquelon">Miquelon</option>
    <option value="America/Moncton">Moncton</option>
    <option value="America/Monterrey">Monterrey</option>
    <option value="America/Montevideo">Montevideo</option>
    <option value="America/Montreal">Montreal</option>
    <option value="America/Montserrat">Montserrat</option>
    <option value="America/Nassau">Nassau</option>
    <option value="America/New_York">New York</option>
    <option value="America/Nipigon">Nipigon</option>
    <option value="America/Nome">Nome</option>
    <option value="America/Noronha">Noronha</option>
    <option value="America/North_Dakota/Center">North Dakota - Center</option>
    <option value="America/North_Dakota/New_Salem">North Dakota - New Salem</option>
    <option value="America/Ojinaga">Ojinaga</option>
    <option value="America/Panama">Panama</option>
    <option value="America/Pangnirtung">Pangnirtung</option>
    <option value="America/Paramaribo">Paramaribo</option>
    <option value="America/Phoenix">Phoenix</option>
    <option value="America/Port-au-Prince">Port-au-Prince</option>
    <option value="America/Porto_Acre">Porto Acre</option>
    <option value="America/Port_of_Spain">Port of Spain</option>
    <option value="America/Porto_Velho">Porto Velho</option>
    <option value="America/Puerto_Rico">Puerto Rico</option>
    <option value="America/Rainy_River">Rainy River</option>
    <option value="America/Rankin_Inlet">Rankin Inlet</option>
    <option value="America/Recife">Recife</option>
    <option value="America/Regina">Regina</option>
    <option value="America/Resolute">Resolute</option>
    <option value="America/Rio_Branco">Rio Branco</option>
    <option value="America/Rosario">Rosario</option>
    <option value="America/Santa_Isabel">Santa Isabel</option>
    <option value="America/Santarem">Santarem</option>
    <option value="America/Santiago">Santiago</option>
    <option value="America/Santo_Domingo">Santo Domingo</option>
    <option value="America/Sao_Paulo">Sao Paulo</option>
    <option value="America/Scoresbysund">Scoresbysund</option>
    <option value="America/Shiprock">Shiprock</option>
    <option value="America/St_Barthelemy">St Barthelemy</option>
    <option value="America/St_Johns">St Johns</option>
    <option value="America/St_Kitts">St Kitts</option>
    <option value="America/St_Lucia">St Lucia</option>
    <option value="America/St_Thomas">St Thomas</option>
    <option value="America/St_Vincent">St Vincent</option>
    <option value="America/Swift_Current">Swift Current</option>
    <option value="America/Tegucigalpa">Tegucigalpa</option>
    <option value="America/Thule">Thule</option>
    <option value="America/Thunder_Bay">Thunder Bay</option>
    <option value="America/Tijuana">Tijuana</option>
    <option value="America/Toronto">Toronto</option>
    <option value="America/Tortola">Tortola</option>
    <option value="America/Vancouver">Vancouver</option>
    <option value="America/Virgin">Virgin</option>
    <option value="America/Whitehorse">Whitehorse</option>
    <option value="America/Winnipeg">Winnipeg</option>
    <option value="America/Yakutat">Yakutat</option>
    <option value="America/Yellowknife">Yellowknife</option>
  </optgroup>

  <optgroup label="Europe">
    <option value="Europe/Amsterdam">Amsterdam</option>
    <option value="Europe/Andorra">Andorra</option>
    <option value="Europe/Athens">Athens</option>
    <option value="Europe/Belfast">Belfast</option>
    <option value="Europe/Belgrade">Belgrade</option>
    <option value="Europe/Berlin">Berlin</option>
    <option value="Europe/Bratislava">Bratislava</option>
    <option value="Europe/Brussels">Brussels</option>
    <option value="Europe/Bucharest">Bucharest</option>
    <option value="Europe/Budapest">Budapest</option>
    <option value="Europe/Chisinau">Chisinau</option>
    <option value="Europe/Copenhagen">Copenhagen</option>
    <option value="Europe/Dublin">Dublin</option>
    <option value="Europe/Gibraltar">Gibraltar</option>
    <option value="Europe/Guernsey">Guernsey</option>
    <option value="Europe/Helsinki">Helsinki</option>
    <option value="Europe/Isle_of_Man">Isle of Man</option>
    <option value="Europe/Istanbul">Istanbul</option>
    <option value="Europe/Jersey">Jersey</option>
    <option value="Europe/Kaliningrad">Kaliningrad</option>
    <option value="Europe/Kiev">Kiev</option>
    <option value="Europe/Lisbon">Lisbon</option>
    <option value="Europe/Ljubljana">Ljubljana</option>
    <option value="Europe/London">London</option>
    <option value="Europe/Luxembourg">Luxembourg</option>
    <option value="Europe/Madrid">Madrid</option>
    <option value="Europe/Malta">Malta</option>
    <option value="Europe/Mariehamn">Mariehamn</option>
    <option value="Europe/Minsk">Minsk</option>
    <option value="Europe/Monaco">Monaco</option>
    <option value="Europe/Moscow">Moscow</option>
    <option value="Europe/Nicosia">Nicosia</option>
    <option value="Europe/Oslo">Oslo</option>
    <option value="Europe/Paris">Paris</option>
    <option value="Europe/Podgorica">Podgorica</option>
    <option value="Europe/Prague">Prague</option>
    <option value="Europe/Riga">Riga</option>
    <option value="Europe/Rome">Rome</option>
    <option value="Europe/Samara">Samara</option>
    <option value="Europe/San_Marino">San Marino</option>
    <option value="Europe/Sarajevo">Sarajevo</option>
    <option value="Europe/Simferopol">Simferopol</option>
    <option value="Europe/Skopje">Skopje</option>
    <option value="Europe/Sofia">Sofia</option>
    <option value="Europe/Stockholm">Stockholm</option>
    <option value="Europe/Tallinn">Tallinn</option>
    <option value="Europe/Tirane">Tirane</option>
    <option value="Europe/Tiraspol">Tiraspol</option>
    <option value="Europe/Uzhgorod">Uzhgorod</option>
    <option value="Europe/Vaduz">Vaduz</option>
    <option value="Europe/Vatican">Vatican</option>
    <option value="Europe/Vienna">Vienna</option>
    <option value="Europe/Vilnius">Vilnius</option>
    <option value="Europe/Volgograd">Volgograd</option>
    <option value="Europe/Warsaw">Warsaw</option>
    <option value="Europe/Zagreb">Zagreb</option>
    <option value="Europe/Zaporozhye">Zaporozhye</option>
    <option value="Europe/Zurich">Zurich</option>
  </optgroup>
  
  <optgroup label="Asia">
    <option value="Asia/Aden">Aden</option>
    <option value="Asia/Almaty">Almaty</option>
    <option value="Asia/Amman">Amman</option>
    <option value="Asia/Anadyr">Anadyr</option>
    <option value="Asia/Aqtau">Aqtau</option>
    <option value="Asia/Aqtobe">Aqtobe</option>
    <option value="Asia/Ashgabat">Ashgabat</option>
    <option value="Asia/Ashkhabad">Ashkhabad</option>
    <option value="Asia/Baghdad">Baghdad</option>
    <option value="Asia/Bahrain">Bahrain</option>
    <option value="Asia/Baku">Baku</option>
    <option value="Asia/Bangkok">Bangkok</option>
    <option value="Asia/Beirut">Beirut</option>
    <option value="Asia/Bishkek">Bishkek</option>
    <option value="Asia/Brunei">Brunei</option>
    <option value="Asia/Calcutta">Calcutta</option>
    <option value="Asia/Choibalsan">Choibalsan</option>
    <option value="Asia/Chongqing">Chongqing</option>
    <option value="Asia/Chungking">Chungking</option>
    <option value="Asia/Colombo">Colombo</option>
    <option value="Asia/Dacca">Dacca</option>
    <option value="Asia/Damascus">Damascus</option>
    <option value="Asia/Dhaka">Dhaka</option>
    <option value="Asia/Dili">Dili</option>
    <option value="Asia/Dubai">Dubai</option>
    <option value="Asia/Dushanbe">Dushanbe</option>
    <option value="Asia/Gaza">Gaza</option>
    <option value="Asia/Harbin">Harbin</option>
    <option value="Asia/Ho_Chi_Minh">Ho Chi Minh</option>
    <option value="Asia/Hong_Kong">Hong Kong</option>
    <option value="Asia/Hovd">Hovd</option>
    <option value="Asia/Irkutsk">Irkutsk</option>
    <option value="Asia/Istanbul">Istanbul</option>
    <option value="Asia/Jakarta">Jakarta</option>
    <option value="Asia/Jayapura">Jayapura</option>
    <option value="Asia/Jerusalem">Jerusalem</option>
    <option value="Asia/Kabul">Kabul</option>
    <option value="Asia/Kamchatka">Kamchatka</option>
    <option value="Asia/Karachi">Karachi</option>
    <option value="Asia/Kashgar">Kashgar</option>
    <option value="Asia/Kathmandu">Kathmandu</option>
    <option value="Asia/Katmandu">Katmandu</option>
    <option value="Asia/Kolkata">Kolkata</option>
    <option value="Asia/Krasnoyarsk">Krasnoyarsk</option>
    <option value="Asia/Kuala_Lumpur">Kuala Lumpur</option>
    <option value="Asia/Kuching">Kuching</option>
    <option value="Asia/Kuwait">Kuwait</option>
    <option value="Asia/Macao">Macao</option>
    <option value="Asia/Macau">Macau</option>
    <option value="Asia/Magadan">Magadan</option>
    <option value="Asia/Makassar">Makassar</option>
    <option value="Asia/Manila">Manila</option>
    <option value="Asia/Muscat">Muscat</option>
    <option value="Asia/Nicosia">Nicosia</option>
    <option value="Asia/Novokuznetsk">Novokuznetsk</option>
    <option value="Asia/Novosibirsk">Novosibirsk</option>
    <option value="Asia/Omsk">Omsk</option>
    <option value="Asia/Oral">Oral</option>
    <option value="Asia/Phnom_Penh">Phnom Penh</option>
    <option value="Asia/Pontianak">Pontianak</option>
    <option value="Asia/Pyongyang">Pyongyang</option>
    <option value="Asia/Qatar">Qatar</option>
    <option value="Asia/Qyzylorda">Qyzylorda</option>
    <option value="Asia/Rangoon">Rangoon</option>
    <option value="Asia/Riyadh">Riyadh</option>
    <option value="Asia/Saigon">Saigon</option>
    <option value="Asia/Sakhalin">Sakhalin</option>
    <option value="Asia/Samarkand">Samarkand</option>
    <option value="Asia/Seoul">Seoul</option>
    <option value="Asia/Shanghai">Shanghai</option>
    <option value="Asia/Singapore">Singapore</option>
    <option value="Asia/Taipei">Taipei</option>
    <option value="Asia/Tashkent">Tashkent</option>
    <option value="Asia/Tbilisi">Tbilisi</option>
    <option value="Asia/Tehran">Tehran</option>
    <option value="Asia/Tel_Aviv">Tel Aviv</option>
    <option value="Asia/Thimbu">Thimbu</option>
    <option value="Asia/Thimphu">Thimphu</option>
    <option value="Asia/Tokyo">Tokyo</option>
    <option value="Asia/Ujung_Pandang">Ujung Pandang</option>
    <option value="Asia/Ulaanbaatar">Ulaanbaatar</option>
    <option value="Asia/Ulan_Bator">Ulan Bator</option>
    <option value="Asia/Urumqi">Urumqi</option>
    <option value="Asia/Vientiane">Vientiane</option>
    <option value="Asia/Vladivostok">Vladivostok</option>
    <option value="Asia/Yakutsk">Yakutsk</option>
    <option value="Asia/Yekaterinburg">Yekaterinburg</option>
    <option value="Asia/Yerevan">Yerevan</option>
  </optgroup>

  <optgroup label="Africa">
    <option value="Africa/Abidjan">Abidjan</option>
    <option value="Africa/Accra">Accra</option>
    <option value="Africa/Addis_Ababa">Addis Ababa</option>
    <option value="Africa/Algiers">Algiers</option>
    <option value="Africa/Asmara">Asmara</option>
    <option value="Africa/Asmera">Asmera</option>
    <option value="Africa/Bamako">Bamako</option>
    <option value="Africa/Bangui">Bangui</option>
    <option value="Africa/Banjul">Banjul</option>
    <option value="Africa/Bissau">Bissau</option>
    <option value="Africa/Blantyre">Blantyre</option>
    <option value="Africa/Brazzaville">Brazzaville</option>
    <option value="Africa/Bujumbura">Bujumbura</option>
    <option value="Africa/Cairo">Cairo</option>
    <option value="Africa/Casablanca">Casablanca</option>
    <option value="Africa/Ceuta">Ceuta</option>
    <option value="Africa/Conakry">Conakry</option>
    <option value="Africa/Dakar">Dakar</option>
    <option value="Africa/Dar_es_Salaam">Dar es Salaam</option>
    <option value="Africa/Djibouti">Djibouti</option>
    <option value="Africa/Douala">Douala</option>
    <option value="Africa/El_Aaiun">El Aaiun</option>
    <option value="Africa/Freetown">Freetown</option>
    <option value="Africa/Gaborone">Gaborone</option>
    <option value="Africa/Harare">Harare</option>
    <option value="Africa/Johannesburg">Johannesburg</option>
    <option value="Africa/Kampala">Kampala</option>
    <option value="Africa/Khartoum">Khartoum</option>
    <option value="Africa/Kigali">Kigali</option>
    <option value="Africa/Kinshasa">Kinshasa</option>
    <option value="Africa/Lagos">Lagos</option>
    <option value="Africa/Libreville">Libreville</option>
    <option value="Africa/Lome">Lome</option>
    <option value="Africa/Luanda">Luanda</option>
    <option value="Africa/Lubumbashi">Lubumbashi</option>
    <option value="Africa/Lusaka">Lusaka</option>
    <option value="Africa/Malabo">Malabo</option>
    <option value="Africa/Maputo">Maputo</option>
    <option value="Africa/Maseru">Maseru</option>
    <option value="Africa/Mbabane">Mbabane</option>
    <option value="Africa/Mogadishu">Mogadishu</option>
    <option value="Africa/Monrovia">Monrovia</option>
    <option value="Africa/Nairobi">Nairobi</option>
    <option value="Africa/Ndjamena">Ndjamena</option>
    <option value="Africa/Niamey">Niamey</option>
    <option value="Africa/Nouakchott">Nouakchott</option>
    <option value="Africa/Ouagadougou">Ouagadougou</option>
    <option value="Africa/Porto-Novo">Porto-Novo</option>
    <option value="Africa/Sao_Tome">Sao Tome</option>
    <option value="Africa/Timbuktu">Timbuktu</option>
    <option value="Africa/Tripoli">Tripoli</option>
    <option value="Africa/Tunis">Tunis</option>
    <option value="Africa/Windhoek">Windhoek</option>
  </optgroup>
  
  <optgroup label="Australia">
    <option value="Australia/ACT">ACT</option>
    <option value="Australia/Adelaide">Adelaide</option>
    <option value="Australia/Brisbane">Brisbane</option>
    <option value="Australia/Broken_Hill">Broken Hill</option>
    <option value="Australia/Canberra">Canberra</option>
    <option value="Australia/Currie">Currie</option>
    <option value="Australia/Darwin">Darwin</option>
    <option value="Australia/Eucla">Eucla</option>
    <option value="Australia/Hobart">Hobart</option>
    <option value="Australia/LHI">LHI</option>
    <option value="Australia/Lindeman">Lindeman</option>
    <option value="Australia/Lord_Howe">Lord Howe</option>
    <option value="Australia/Melbourne">Melbourne</option>
    <option value="Australia/North">North</option>
    <option value="Australia/NSW">NSW</option>
    <option value="Australia/Perth">Perth</option>
    <option value="Australia/Queensland">Queensland</option>
    <option value="Australia/South">South</option>
    <option value="Australia/Sydney">Sydney</option>
    <option value="Australia/Tasmania">Tasmania</option>
    <option value="Australia/Victoria">Victoria</option>
    <option value="Australia/West">West</option>
    <option value="Australia/Yancowinna">Yancowinna</option>
  </optgroup>

  <optgroup label="Indian">
    <option value="Indian/Antananarivo">Antananarivo</option>
    <option value="Indian/Chagos">Chagos</option>
    <option value="Indian/Christmas">Christmas</option>
    <option value="Indian/Cocos">Cocos</option>
    <option value="Indian/Comoro">Comoro</option>
    <option value="Indian/Kerguelen">Kerguelen</option>
    <option value="Indian/Mahe">Mahe</option>
    <option value="Indian/Maldives">Maldives</option>
    <option value="Indian/Mauritius">Mauritius</option>
    <option value="Indian/Mayotte">Mayotte</option>
    <option value="Indian/Reunion">Reunion</option>
  </optgroup>
  
  <optgroup label="Atlantic">
    <option value="Atlantic/Azores">Azores</option>
    <option value="Atlantic/Bermuda">Bermuda</option>
    <option value="Atlantic/Canary">Canary</option>
    <option value="Atlantic/Cape_Verde">Cape Verde</option>
    <option value="Atlantic/Faeroe">Faeroe</option>
    <option value="Atlantic/Faroe">Faroe</option>
    <option value="Atlantic/Jan_Mayen">Jan Mayen</option>
    <option value="Atlantic/Madeira">Madeira</option>
    <option value="Atlantic/Reykjavik">Reykjavik</option>
    <option value="Atlantic/South_Georgia">South Georgia</option>
    <option value="Atlantic/Stanley">Stanley</option>
    <option value="Atlantic/St_Helena">St Helena</option>
  </optgroup>

  <optgroup label="Pacific">
    <option value="Pacific/Apia">Apia</option>
    <option value="Pacific/Auckland">Auckland</option>
    <option value="Pacific/Chatham">Chatham</option>
    <option value="Pacific/Easter">Easter</option>
    <option value="Pacific/Efate">Efate</option>
    <option value="Pacific/Enderbury">Enderbury</option>
    <option value="Pacific/Fakaofo">Fakaofo</option>
    <option value="Pacific/Fiji">Fiji</option>
    <option value="Pacific/Funafuti">Funafuti</option>
    <option value="Pacific/Galapagos">Galapagos</option>
    <option value="Pacific/Gambier">Gambier</option>
    <option value="Pacific/Guadalcanal">Guadalcanal</option>
    <option value="Pacific/Guam">Guam</option>
    <option value="Pacific/Honolulu">Honolulu</option>
    <option value="Pacific/Johnston">Johnston</option>
    <option value="Pacific/Kiritimati">Kiritimati</option>
    <option value="Pacific/Kosrae">Kosrae</option>
    <option value="Pacific/Kwajalein">Kwajalein</option>
    <option value="Pacific/Majuro">Majuro</option>
    <option value="Pacific/Marquesas">Marquesas</option>
    <option value="Pacific/Midway">Midway</option>
    <option value="Pacific/Nauru">Nauru</option>
    <option value="Pacific/Niue">Niue</option>
    <option value="Pacific/Norfolk">Norfolk</option>
    <option value="Pacific/Noumea">Noumea</option>
    <option value="Pacific/Pago_Pago">Pago Pago</option>
    <option value="Pacific/Palau">Palau</option>
    <option value="Pacific/Pitcairn">Pitcairn</option>
    <option value="Pacific/Ponape">Ponape</option>
    <option value="Pacific/Port_Moresby">Port Moresby</option>
    <option value="Pacific/Rarotonga">Rarotonga</option>
    <option value="Pacific/Saipan">Saipan</option>
    <option value="Pacific/Samoa">Samoa</option>
    <option value="Pacific/Tahiti">Tahiti</option>
    <option value="Pacific/Tarawa">Tarawa</option>
    <option value="Pacific/Tongatapu">Tongatapu</option>
    <option value="Pacific/Truk">Truk</option>
    <option value="Pacific/Wake">Wake</option>
    <option value="Pacific/Wallis">Wallis</option>
    <option value="Pacific/Yap">Yap</option>
  </optgroup>
  
  <optgroup label="Antarctica">
    <option value="Antarctica/Casey">Casey</option>
    <option value="Antarctica/Davis">Davis</option>
    <option value="Antarctica/DumontDUrville">DumontDUrville</option>
    <option value="Antarctica/Macquarie">Macquarie</option>
    <option value="Antarctica/Mawson">Mawson</option>
    <option value="Antarctica/McMurdo">McMurdo</option>
    <option value="Antarctica/Palmer">Palmer</option>
    <option value="Antarctica/Rothera">Rothera</option>
    <option value="Antarctica/South_Pole">South Pole</option>
    <option value="Antarctica/Syowa">Syowa</option>
    <option value="Antarctica/Vostok">Vostok</option>
  </optgroup>

  <optgroup label="Arctic">
    <option value="Arctic/Longyearbyen">Longyearbyen</option>
  </optgroup>

  <optgroup label="UTC">
    <option value="UTC">UTC</option>
  </optgroup>

  <optgroup label="Manual Offsets">
    <option value="UTC-12">UTC-12</option>
    <option value="UTC-11">UTC-11</option>
    <option value="UTC-10">UTC-10</option>
    <option value="UTC-9">UTC-9</option>
    <option value="UTC-8">UTC-8</option>
    <option value="UTC-7">UTC-7</option>
    <option value="UTC-6">UTC-6</option>
    <option value="UTC-5">UTC-5</option>
    <option value="UTC-4">UTC-4</option>
    <option value="UTC-3">UTC-3</option>
    <option value="UTC-2">UTC-2</option>
    <option value="UTC-1">UTC-1</option>
    <option value="UTC+0">UTC+0</option>
    <option value="UTC+1">UTC+1</option>
    <option value="UTC+2">UTC+2</option>
    <option value="UTC+3">UTC+3</option>
    <option value="UTC+4">UTC+4</option>
    <option value="UTC+5">UTC+5</option>
    <option value="UTC+6">UTC+6</option>
    <option value="UTC+7">UTC+7</option>
    <option value="UTC+8">UTC+8</option>
    <option value="UTC+9">UTC+9</option>
    <option value="UTC+10">UTC+10</option>
    <option value="UTC+11">UTC+11</option>
    <option value="UTC+12">UTC+12</option>
    <option value="UTC+13">UTC+13</option>
    <option value="UTC+14">UTC+14</option>
  </optgroup>
</select>
  <br>
  <br>
  <h3>Open Timer</h3>
  <div class="switch-field">
  <input type="radio" id="radio-one" name="open_timer" value="0" if(open_timer==0) checked/>
  <label for="radio-one">OFF</label>
  <input type="radio" id="radio-two" name="open_timer" value="1" if(open_timer==1) checked/>
  <label for="radio-two">ON</label>
  </div>
  <label for="open_time">Open Time: </label>
  <input type="time" id="open_time" name="open_time" value="%PLACEHOLDER_OPEN_TIME%"><br>
  <br>
  <h3>Close Timer</h3>
  <div class="switch-field">
  <input type="radio" id="radio-one" name="close_timer" value="0" if(close_timer==0) checked/>
  <label for="radio-one">OFF</label>
  <input type="radio" id="radio-two" name="close_timer" value="1" if(close_timer==1) checked/>
  <label for="radio-two">ON</label>
  </div>
  <label for="close_time">Close Time: </label>
  <input type="time" id="close_time" name="close_time" value="%PLACEHOLDER_CLOSE_TIME%"><br>
  <br>
  <input type="submit" value="Save">
</form>
</div>
<br>
<div class="card">
<h2>Position Percent</h2>
<form action="/position">    
<p>Enter a value from 0-100. This is the percent of the max_steps value to move the motor.</p>
<label><b>Percent Open :</b></label>    
<input value = %PLACEHOLDER_PERCENT% type = "number" name = "move_percent" min="0" max="100">
<br/>
<input type="submit" value="Set Position">
<p>You can also send an HTTP request to http://%PLACEHOLDER_IP_ADDRESS%/position?move_percent=%PLACEHOLDER_PERCENT%</p>
</form>
</div>
<br>
<br>
<div class="card">
<h2>Set Zero Position</h2>
<p>Press this button to set the home position of your motor to zero</p>
<form action="set_zero">
<input type="hidden" name="set_zero" value="1">
<input type="submit" value="Set Zero">
</form>
</div>
<br>
<br>
<div class="card">
<h2>Motor Parameters</h2>
<form action="/set_motor">
<h3>Max Steps</h3>
<p>Your device simply counts steps in order to find the distance to move. In this section, we need to enter the number of steps for your device to move in order to fully open your curtain.</p>
<p>Enter a value from 0-infinity. This is the maximum number of steps your motor will turn when set to 100 percent.</p>
<p>A <b>negative value</b> (e.g. -5100) will cause the motor to spin in the <b>opposite</b> direction.</p>
<br>
<h3>Device Cheat Sheet</h3>
<p>Measure the number of inches you need to move and multiply by the steps below. Enter your calculated value in the input below.</p>
<ul>
  <li>MorningRod = 108 steps per inch</li>
  <li>MorningRope = 147 steps per inch</li>
  <li>Custom Device = See calculation below</li>
</ul>
<p>One motor revolution is 200 steps</p>
<p>To calculate the number of steps to move, first measure the diameter of your motor pulley to calculate the circumferance travelled per revolution.</p>
<p>Example: If your GT2 pulley (20 teeth) diameter is 12.2mm, it has a circumfereance of 38.33mm. This means one full revolution (200 steps) will cause your belt to move 38.33mm</p>
<p>Example: To move 1 meter, we take 1000mm/38.33 which is 26.09. This means we need 26.09 revolutions to move 1 meter. So 26.09 revolutions times 200 steps per revolution is 5218. This is the max steps needed to move the motor by 1 meter. </p>
<label><b>max steps: </b></label>
<input value = "%PLACEHOLDER_MAX_STEPS%" type = "number" name = "max_steps">
<p>You can also send an HTTP request to http://%PLACEHOLDER_IP_ADDRESS%/set_motor?max_steps=%PLACEHOLDER_MAX_STEPS%</p>
<input type="submit" value="Save">
<br>
<br>
<h3>Speed Setting</h3>
<p>Enter a value from 10-200.</p>
<label><b>speed: </b></label>
<input value = "%PLACEHOLDER_MAX_SPEED%" type = "number" name = "max_speed" min="10" max="200">
<p>You can also send an HTTP request to http://%PLACEHOLDER_IP_ADDRESS%/set_motor?max_speed=%PLACEHOLDER_MAX_SPEED%</p>
<input type="submit" value="Save">
<br>
<br>
<h3>Current Setting</h3>
<p>Enter a milliamp value 0-2000.</p>
<label><b>mA: </b></label>
<input value = "%PLACEHOLDER_CURRENT%" type = "number" name = "current" min="0" max="2000">
<p>You can also send an HTTP request to http://%PLACEHOLDER_IP_ADDRESS%/set_motor?current=%PLACEHOLDER_CURRENT%</p>
<input type="submit" value="Save">
<br>
<br>
<h3>Stall Setting</h3>
<p>Enter a stall value from 0 to 255 </p>
<p>This value controls the StallGuard4 level. A higher value gives a higher sensitivity. A higher value makes StallGuard4 more sensitive and requires less torque to indicate a stall.
<br>
<label><b>stall: </b></label>
<input value = "%PLACEHOLDER_STALL%" type = "number" name = "stall" min="0" max="255">
<p>You can also send an HTTP request to http://%PLACEHOLDER_IP_ADDRESS%/set_motor?stall=%PLACEHOLDER_STALL%</p>
<br>
<input type="submit" value="Save">
</form>
</div>
</body>
</html>
)=====";
