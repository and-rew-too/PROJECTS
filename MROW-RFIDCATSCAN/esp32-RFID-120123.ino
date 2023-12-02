#include <SPI.h>
#include <MFRC522.h>
#include <ESP32Servo.h>

Servo myservo;
#define SS_PIN 6 // D4
#define RST_PIN 2  //D0
MFRC522 mfrc522(SS_PIN, RST_PIN);
#define LIMIT_PIN D7 // D7 normally closed limit switch connected here
int servoPin = 5; // D3 
int pos = 29; 




///website https://randomnerdtutorials.com/security-access-using-mfrc522-rfid-reader-with-arduino/
// wiring fromleft to right (sda sck mosi miso) (gnd rst 3.3) (grey purple blue green, yellow orange red)
// (for sda sck mosi miso) (grey in D4, purple D8, blu D10 green D9)

 
void setup() 
{
  Serial.begin(115200);
  SPI.begin();
  pinMode(LIMIT_PIN, INPUT);
  
  
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.println("Approximate your card to the reader...");

  // Allow allocation of all timers
  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
  myservo.setPeriodHertz(50);    // standard 50 hz servo
  myservo.attach(servoPin, 780, 2740); //
  // using default min/max of 1000us and 2000us
  // different servos may require different min/max settings
  // for an accurate 0 to 180 sweep
  // FOR MG996 not a full 180 sweep only 130... pos divide and enlarge by 0.70
}
void loop() 
{
  digitalWrite(LIMIT_PIN, HIGH); //immediately, keeps 5v to avoid any premature activation, when this button press and reads GND is only in while loop
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "8A 22 29 80") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();
 
  for (pos = 29; pos >= 0; pos -= 2) { // tell servo , servo goes from 0 to 21 degrees
    // in steps of 1 degree
    myservo.write(pos);    // tell servo to go to position in variable 'pos'
    delay(150);             // waits 15ms for the servo to reach the position
  }
  // critical below there is delay between when cat touches rfid to when cat activats plate/limit switch
  // so to prevent from closing immediately give ample delay
  delay(100000); //10sec delay
    while (digitalRead(LIMIT_PIN) == HIGH) {
    Serial.println("Kitten still eating 0_0 do not close! !");
    delay(5000); // wait 5 seconds and try again
    }
  
  
  for (pos = 0; pos <= 29; pos += 5) { // goes from 30 degrees to 0 degrees
    myservo.write(pos);   
    delay(15);            
  }
  }
 
 else   {
    Serial.println(" Access denied");
    delay(3000);
  }
  
} 
