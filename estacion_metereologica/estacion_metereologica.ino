/*
 * Estacion Meteorologica con Arduino
 * 
 * C-Innova, Bogota, Colombia
 * January 23, 2017
 * contact: jugarciasa@unal.edu.co (Juliana Garcia)
 * 
 * Updated June 27, 2017
 * contact: pcuellar@mit.edu (Pedro Reynolds-Cuéllar)
 */

 /*
  * Conexiones protoboard & Arduino y cómo leer valores:
  * 
  * Temperatura/sensor de humedad:
  *   temperatura: expresada en grados Celsius
  *   humedad: 0-100%
  *   DAT (pin en sensor de temperatura) conecta con D2 (entrada digital 2 en Arduino)
  * 
  * Sensor de caída de lluvia:
  *   1023: seco
  *   0: wet
  *   A0 (sensor) a A1 (Arduino)
  *   
  * Sensor de suelo:
  *   1023: seco
  *   0: mojado
  *   D0 (sensor) a D11 (arduino)
  *   A0 (sensor) a A0 (arduino)
  *   
  * Pantalla LCD:
  *   SDA (sensor) to SDA (Arduino) (izquiera)
  *   SCL (sensor) to SCL (Arduino) (derecha)
  */

  /*
   * Problemas encontrados
   * 
   * La pantalla no muestra información: Pantallas con backpacks, girar perilla azul para calibrar el contraste 
   * Librería Wire no compila: Revisar el archivo I2CIO.cpp y asegurarse que la librería Wire está incluída de la siguiente forma: #include <Wire.h>
 */
 
 //-------------Librerías pantalla LCD------------------------
#include <I2CIO.h>              
#include <LiquidCrystal_I2C.h>  
#include <Wire.h>               
#include <MyLCD.h>              
#include <dht.h>                

//----- Librerías para los sensores --------------------------
#include <SoilHumidity.h>       // librería para sensor de humedad de suelo
#include <RainDrop.h>           // librería para sensor de caída de lluvia
#include <Temperature.h>        // librería para sensor de temperatura y humedad de aire

//----- Librería para conexión bluetooth ---------------------
//#include <SoftwareSerial.h>
//
//SoftwareSerial BTserial(10, 11); // RX | TX
//
//int sensorPin = A0;
//int sensorValue = 0;

// ----- Crear los objetos para cada uno de los sensores -----
MyLCD mylcd;
SoilHumidity soilhumidity(A0);  // configura el sensor de humedad de suelo en el pin A0 (Arduino)
RainDrop raindrop(A1);          // configura el sensor de caída de lluvia en el pin A1 (Arduino)
Temperature temperature(2);     // configura el sensor de temperatura en el pin 2 (Arduino)
Temperature humedad(2);         // configura el sensor de humedad de aire 

// -----------------------------------

#define DHT11_PIN 2             // configura el lector de temperatura y humedad en el pin 2 (Arduino)

void setup() {
  Serial.begin(9600);
  mylcd.init();                 // iniciar la pantalla en tamaño 16x2 y encender la luz
  delay(1000);
  BTserial.begin(9600);
}

int wait = 1000;

void loop() {
// ---- Desplegar datos en la pantalla LCD -----
   mylcd.printData(soilhumidity.getFormattedData());  
   delay(wait);
  
   mylcd.printData( raindrop.getFormattedData() );  
   delay(wait);
  
   mylcd.printData( temperature.getFormattedData() );  
   delay(wait);
  
   mylcd.printData( humedad.getFormattedData2() );  
   delay(wait);
  
 /*
  ------------------------------------------
  -------- Desplegar información en el Serial Monitor ------
  ------------------------------------------
  */
  
  // Sensor de caída de lluvia
  Serial.print("Rain Sensor: ");
  Serial.println(raindrop.getRawData());         // desplegar datos del sensor de caída de lluvia conectado en A1 (Arduino)
  delay(wait);
   
  // Sensor DHT11 de temperatura 
  // Temperatura del aire 
  Serial.print("Temperatura: ");
  Serial.println(temperature.getRawData());      // desplegar datos de temperatura
  delay(wait);
  // Humedad del aire
  Serial.print("Humedad: ");
  Serial.println(humedad.getRawData2());         // desplegar datos de humedad de aire
  delay(wait);
  // Sensor de humedad de suelo
  Serial.print("Soil Sensor: ");
  Serial.println(soilhumidity.getRawData());     // desplegar daots de sensor de humedad de suelo conectado en A0 (Arduino) 
  Serial.println("");

  delay(wait);

}
