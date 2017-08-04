
<h1 align="center">
  <br>
  <a href="http://www.c-innova.org"><img src="http://www.c-innova.org/wp-content/uploads/2017/08/C-Innova-Icono.png" alt="C-Innova" width="200"></a>
  <br>
  <strong>C-Innova</strong>: Centro de Innovación de Tecnologías Apropiadas y Educación
  <br>
</h1>

<h4 align="center">Estación Metereológica de Bajo Costo</h4>

<p align="center">
  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
  [![License: CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc-sa/4.0/)
</p>

<p></p>

![screenshot](http://www.c-innova.org/wp-content/uploads/2017/08/estacion.jpg)

## Resumen
Aunque predecir el clima es imposible, entender patrones climáticos y trazar su comportamiento a través de la observación de variaciones en la cantidad de lluvia, el incremento en temperatura, humedad y presión atmosférica entre otros es posible. Este proyecto busca reducir los costos asociados al registro de algunas de estas condiciones metereológicas.
El diseño de esta estación fue llevado a cabo por el equipo de <a href="http://www.c-innova.org">C-Innova</a> con el apoyo de la red <a href="http://www.idin.org">IDIN</a> y el laboratorio de Diseño para el Desarrollo <a href="www.d-lab.mit.edu">D-Lab</a> en MIT.

## Características Principales

* Arduino
  - Estación basada en Arduino UNO. Implementable con otras placas Arduino.
* Bajo costo
  - Costo estimado $40 dólares
* Personalizable
  - Aunque proponemos notellas de plástico reciclado como potencial contenedor, este puede ser diseñado de acuerdo a las necesidades.

## Componentes
Esta estación utiliza los siguientes componentes. Son necesarios:

* Placa <a href="https://store.arduino.cc/usa/arduino-uno-rev3">Arduino UNO</a> (u otra placa similar)
* Sensor de temperatura y humedad <a href="https://www.newegg.com/Product/Product.aspx?Item=9SIA7BF2K18800&ignorebbr=1&nm_mc=KNC-GoogleMKP-PC&cm_mmc=KNC-GoogleMKP-PC-_-pla-_-Gadgets-_-9SIA7BF2K18800&gclid=CjwKCAjwk4vMBRAgEiwA4ftLs3dZX8ZtCYQAA1ZiBFcDiCAiXMTrO8DyYVWk2Rp3rkVYhkoOiNMeNxoCJwQQAvD_BwE&gclsrc=aw.ds">DHT11</a>
* Sensor de humedad de suelo <a href="http://chinaprices.net/buy-soil-humidity-detection-sensor-module-yl-100-blue-fasttech-760419C99">YL-100</a>
* Sensor de caída de lluvia <a href="http://www.miniinthebox.com/rain-sensor-module-sensitivity-weather-module-yl-83-for-arduino-interface_p1023938.html?currency=USD&litb_from=paid_adwords_shopping&utm_source=google_shopping&utm_medium=cpc&adword_mt=&adword_ct=202532448603&adword_kw=&adword_pos=1o2&adword_pl=&adword_net=g&adword_tar=&adw_src_id=33249133621_866623160_43913277575_pla-329474746744&gclid=CjwKCAjwk4vMBRAgEiwA4ftLs-WxCIxNDZOdU4L3CLpXaRKcUDbV7WCCCtGtNEj3TmyUopqxGDHJ5BoCgOcQAvD_BwE">YL-83</a>
* Breadboard
* Jumper wires

## Descargas

1. Clonar o <a href="https://github.com/C-Innova/estacion-metereologica/archive/master.zip">descargar</a> este repositorio
```bash
# Clonar desde una terminal
$ git clone https://github.com/C-Innova/estacion-metereologica.git
```
2. Descargar e instalar el software <a href="https://www.arduino.cc/en/Main/Software">IDE de Arduino</a>
3. Descargar e instalar el software <a href="http://fritzing.org/download/">Fritzing</a> para leer el archivo esquemático del circuito

## Uso

1. Abrir el archivo "estacion_metereologica.fzz" usando el software de Fritzing. Usar el esquema del circuito para conectar todos los componentes.
2. Copiar las librerias en la carpeta "libraries" a la carpeta local de librerias de Arduino.
3. Cargar el código "estacion_metereologica.ino" ubicado en la carpeta "Arduino".

## Contribuciones

- Fork!
- Crea tu propio branch: git checkout -b my-new-feature
- Genera tus cambios: git commit -m 'Add some feature'
- Remite tus cambios a tu branch: git push origin my-new-feature
- Envía un pull request :D

#### Licencias

- Todo el software incluido en este proyecto está licenciado bajo la licencia MIT
- Todos los documentos adicionales están licenciados bajo licencia Creative Commons CC BY-NC-SA 4.0
