
# Basic LED Blinking


### Introduction to LED Blinking with Arduino:

LED (Light Emitting Diode) blinking is one of the fundamental and exciting projects for beginners in the world of Arduino programming and electronics. Arduino, a versatile open-source microcontroller platform, makes it accessible for anyone to create interactive and responsive electronic systems. LED blinking serves as the stepping stone for understanding the basics of Arduino programming, digital input/output, and creating simple but engaging projects.

In this project, we'll explore how to use an Arduino board to control the illumination of an LED. The LED will be programmed to blink on and off at specific intervals, creating a visible and repetitive pattern. This simple yet instructive project is an ideal starting point to grasp the principles of coding, wiring, and components used in Arduino-based applications. It's the gateway to more complex projects that involve sensors, displays, and various actuators, making it an essential skill for any aspiring maker or electronics enthusiast.

### Step: 1 - Components
LED - 1
Resistor - 220 ohms - 1
Breadboard - 1
Arduino uno + connecting cable - 1 and Ardunio software
Jumper wires - As we require

### Step: 2 - Interfacing the LED with Arduino
The LED has two pins generally:
Positive pin(+)
Negative pin (-)


The connection or interfacing of the module is as follows:
Resistor’s one pin to the LED’s positive pin and another to the Postive pin to the positive railings of the breadboard
11th pin of Arduino connected to the positive railings of the breadboard
GND pin to the negative railings of the breadboard




## Deployment

Arduino programming for LED blinking


```bash
int ledPin = 11;


void setup (){
  pinMode (ledPin, OUTPUT);
}


void loop(){
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}

```

