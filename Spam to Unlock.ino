#include <Servo.h>
#define button_pin 7

int butt_req = 100;
int butt_count = 0;
int butt_state = 0;
int prev_butt_state = 0;
int servoPin = 8;
Servo servo;  
int servoAngle = 0;

void setup() {
  Serial.begin(9600);
  
  servo.attach(servoPin);
  
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

}

void loop() {
  butt_state = digitalRead(button_pin); 
  if(butt_state != prev_butt_state){
    if (butt_state == HIGH){
      digitalWrite(13, LOW);
       
    } else {
      digitalWrite(13, HIGH);
      butt_count++;
      Serial.println(butt_count);
    }
    delay(50);
   
  }

  prev_butt_state = butt_state;
  if (butt_count == butt_req){
    servo.write(15);
    //delay(1000);
    }
}
