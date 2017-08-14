
<h1 align="center">
  <br>
  <a href="http://www.c-innova.org"><img src="http://www.c-innova.org/wp-content/uploads/2017/08/C-Innova-Icono.png" alt="C-Innova" width="200"></a>
  <br>
  <strong>C-Innova</strong>: Center for Innovation in Appropriate Technologies and Education
  <br>
</h1>

<h4 align="center">Low cost Arduino Weather Station</h4>

<p align="center">

  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
  [![License: CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc-sa/4.0/)

</p>

<p></p>

<p align="center"><img src="http://www.c-innova.org/wp-content/uploads/2017/08/estacion.jpg"></p>

## Summary
Although predicting the weather is impossible, to understand climatic patterns and trace its behaviour through the observation of variations in the amount of rain, the increase in temperature, humidity and atmospheric pressure is possible. This project aims to reduce the costs associated to the register of some of these meteorologic conditions.
The design of this station was carried out by the <a href="http://www.c-innova.org">C-Innova</a> team with the support of the <a href="http://www.idin.org">IDIN</a> network and the Design Laboratory for Development <a href="www.d-lab.mit.edu">D-Lab</a> 

## Main Features

* Arduino
  - Arduino UNO based Weather Station. Implementable with other Arduino boards.
* Low cost
  - Estimated cost: $40
* Customizable
  - Although we propose recycled PET bottles as a potencial case, it can be designed according with the needs.

## Components
This station uses the following components:

* <a href="https://store.arduino.cc/usa/arduino-uno-rev3">Arduino UNO</a> board (or other similar board)
* Temperature and humidity sensor <a href="https://www.newegg.com/Product/Product.aspx?Item=9SIA7BF2K18800&ignorebbr=1&nm_mc=KNC-GoogleMKP-PC&cm_mmc=KNC-GoogleMKP-PC-_-pla-_-Gadgets-_-9SIA7BF2K18800&gclid=CjwKCAjwk4vMBRAgEiwA4ftLs3dZX8ZtCYQAA1ZiBFcDiCAiXMTrO8DyYVWk2Rp3rkVYhkoOiNMeNxoCJwQQAvD_BwE&gclsrc=aw.ds">DHT11</a>
* Soil humidity sensor <a href="http://chinaprices.net/buy-soil-humidity-detection-sensor-module-yl-100-blue-fasttech-760419C99">YL-100</a>
* Rain drop sensor <a href="http://www.miniinthebox.com/rain-sensor-module-sensitivity-weather-module-yl-83-for-arduino-interface_p1023938.html?currency=USD&litb_from=paid_adwords_shopping&utm_source=google_shopping&utm_medium=cpc&adword_mt=&adword_ct=202532448603&adword_kw=&adword_pos=1o2&adword_pl=&adword_net=g&adword_tar=&adw_src_id=33249133621_866623160_43913277575_pla-329474746744&gclid=CjwKCAjwk4vMBRAgEiwA4ftLs-WxCIxNDZOdU4L3CLpXaRKcUDbV7WCCCtGtNEj3TmyUopqxGDHJ5BoCgOcQAvD_BwE">YL-83</a>
* Breadboard
* Jumper wires

## Downloads

1. Clone or <a href="https://github.com/C-Innova/estacion-metereologica/archive/master.zip">download</a> this repository
```bash
# Clone from a terminal
$ git clone https://github.com/C-Innova/estacion-metereologica.git
```
2. Download and install the <a href="https://www.arduino.cc/en/Main/Software">Arduino IDE</a> software
3. Download and install the <a href="http://fritzing.org/download/">Fritzing</a> software to read the schematic file of the circuit

## Use

1. Open the file "estacion_metereologica.fzz" using the Fritzing software. Connect all the components according to the scheme.
2. Copy the libraries into the "libraries" folder in the local folder of Arduino.
3. Load the file "estacion_metereologica.ino" located in the "Arduino" folder.

## Contributions

- Fork!
- Create your own branch: git checkout -b my-new-feature
- Generate your changes: git commit -m 'Add some feature'
- Send your changes to your branch: git push origin my-new-feature
- Send a pull request :D

## Colaborators
- <a href="https://github.com/jugarciasa">Juliana García Sarmiento</a>
- <a href="https://github.com/pcuellar">Pedro Reynolds-Cuéllar</a>

## Licences

- All the included software in this project is licensed under <a href="https://github.com/C-Innova/estacion-metereologica/blob/master/MIT%20LICENSE">MIT</a> license
- All additional documents are licensed under <a href="https://github.com/C-Innova/estacion-metereologica/blob/master/CC-BY-NC-SA%204.0%20LICENSE">Creative Commons CC BY-NC-SA 4.0</a>
