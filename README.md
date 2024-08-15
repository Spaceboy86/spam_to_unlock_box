# Spam to unlock box
## Overview 
There's a switch to turn it on and a button on the side. The servo sits in the top, when the servo is closed it prevents the lid from being opened. 
The base houses an arduino and a 9v battery.  
Was a gag Secret Santa present I created which required to be pressed 100 times, with the reward in the box being 100 printed clothing buttons.

## Usuage 
### Code / Arduino
For customization, the button_pin, required number of presses (butt_req), and servoPin can be adjusted in the following code snippet:
```cpp
#include <Servo.h>
#define button_pin 7 // Defined button pin

int butt_req = 100; // Required button presses to unlock
int butt_count = 0;
int butt_state = 0;
int prev_butt_state = 0;
int servoPin = 8; // Servo control pin
Servo servo;  
int servoAngle = 0;
```

### Model

- The top section includes a housing spot for the servo and routing for the wires directly underneath.  

- The base has enough room to fit a 9v battery and an Arduino micro. There are cutouts on the sides for a switch and a button. The switch being for power and the button being the button to be pressed. 
- There is also a screw point to seal it shut with a lid.

- The entire box is 18cm x 10cm x 10cm, the length can be changed as required.

Visual References:
- Top view ![Box Open](Images/preview.JPG)
- Bottom view ![Box Open](Images/preview1.JPG)
- Closed Box ![Box Open](Images/preview2.JPG)

##Notes
- The Arduino code provided can be adjusted for different button press requirements.
- Ensure all components are securely fixed within the box for optimal performance.

## To-Do
- [ ] Make a small extrusion above where lid sits to prevent being slid open in the oppposite direction.  
      - Temp fix was small extrusion of hot glue
