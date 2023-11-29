#include <WiFi.h>
#include <WebServer.h>
#include <Callmebot_ESP32.h>
#include "DHT.h"

#define DHT_SENSOR_PIN  D2 // ESP32 pin GPIO21 connected to DHT11 sensor
#define DHT_SENSOR_TYPE DHT22 //dht 11 etc
#define LED1pin D3
bool LED1status = LOW;
bool LED2status = LOW;

/*Put your SSID & Password*/
const char* ssid = "Sammie";  // Enter SSID here
const char* password = "jessie4088877811";  //Enter Password here

WebServer server(80);
               
// Initialize DHT sensor.
DHT dht(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);  // originally, from other code said dhtsensor            

float Temperature;
float Humidity;
float Temperaturetrigger;
const int threshold = 22; // temperature in C. also the cat temp outside is 55F or 13C
String apiKey = "ougKqPw9AIwFUQAK";
String chat = "brrrr";








 
void setup() {
  Serial.begin(9600);
  delay(100);
  
  pinMode(DHT_SENSOR_PIN, INPUT);
  pinMode(LED1pin, OUTPUT);
  dht.begin();              

  Serial.println("Connecting to ");
  Serial.println(ssid);

  //connect to your local wi-fi network
  WiFi.begin(ssid, password);

  //check wi-fi is connected to wi-fi network
  while (WiFi.status() != WL_CONNECTED) {
  delay(1000);
  Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  Serial.println(WiFi.localIP());

  server.on("/", handle_OnConnect);
  server.onNotFound(handle_NotFound);
  server.on("/led1on", handle_led1on);
  server.on("/led1off", handle_led1off);
  pinMode(LED1pin, OUTPUT);



  server.begin();
  Serial.println("HTTP server started");

}
void loop() {
  
  server.handleClient();
  #include <Callmebot_ESP32.h>
  Temperaturetrigger = dht.readTemperature ();
  if (Temperaturetrigger > threshold) {
  Callmebot.facebookMessage(apiKey, chat);
  Serial.println(Callmebot.debug()); // do stuff if the condition is true
}

  if(LED1status)
  {digitalWrite(LED1pin, HIGH);}
  else
  {digitalWrite(LED1pin, LOW);}

  delay(3000); //wait 30 seconds 
  
}



void handle_OnConnect() {
  LED1status = LOW;
  LED2status = LOW;
  Serial.println("GPIO3 Status: OFF | GPIO4 Status: N/A");
  //server.send(200, "text/html", SendHTML(LED1status,LED2status)); 
  Temperature = dht.readTemperature(); // Gets the values of the temperature
  Humidity = dht.readHumidity(); // Gets the values of the humidity 
  server.send(200,"text/html", SendHTML(Temperature,Humidity, false)); 
}

void handle_led1on() {
  LED1status = HIGH;
  Serial.println("GPIO4 Status: ON");
  server.send(200, "text/html", SendHTML(Temperature, Humidity,true)); 
}

void handle_led1off() {
  LED1status = LOW;
  Serial.println("GPIO4 Status: OFF");
  server.send(200, "text/html", SendHTML(Temperature, Humidity,false)); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(float Temperaturestat,float Humiditystat, uint8_t led1stat){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>ESP32 Pos1 Weather, Cathouse</title>\n";
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;}\n";
  ptr +="p {font-size: 24px;color: #444444;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
  ptr +="<body>\n";
  ptr +="<div id=\"webpage\">\n";
  ptr +="<h1>ESP32 Weather Report</h1>\n";
  
  ptr +="<p>Temperature: ";
  ptr +=(int)Temperaturestat;
  ptr +="&deg;C</p>";
  ptr +="<p>Humidity: ";
  ptr +=(int)Humiditystat;
  ptr +="%</p>";
  
  ptr +="</div>\n";

  ptr +=".button {display: block;width: 80px;background-color: #3498db;border: none;color: white;padding: 13px 30px;text-decoration: none;font-size: 25px;margin: 0px auto 35px;cursor: pointer;border-radius: 4px;}\n";
  ptr +=".button-on {background-color: #3498db;}\n";
  ptr +=".button-on:active {background-color: #2980b9;}\n";
  ptr +=".button-off {background-color: #34495e;}\n";
  ptr +=".button-off:active {background-color: #2c3e50;}\n";

  if(led1stat)
  {ptr +="<p>LED1 Status: ON</p><a class=\"button button-off\" href=\"/led1off\">OFF</a>\n";}
  else
  {ptr +="<p>LED1 Status: OFF</p><a class=\"button button-on\" href=\"/led1on\">ON</a>\n";}

  ptr +="</body>\n";
  ptr +="</html>\n";
  return ptr;
}
