int redPin= 3;// Red Color to pin 3 on the Arduino
int greenPin = 5;//Green Color to pin 5 on the Arduino
int bluePin = 6;//Blue Color to pin 6 on the Arduino

int ledPin= 12;// LED Red Color to pin 12 on the Arduino // the pin of the LED
int ledPin1 = 9;// LED Green Color to pin 9 on the Arduino
int ledPin2 = 8; //LED White Color to pin 8 on the Arduino

// In the setup section we need to define redPin, greenPin and bluePin as outputs.
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(ledPin, OUTPUT); //initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  
}
//These arguments represents the brightness of the LEDs or the duty cycle of the PWM signal which is created using the analogWrite() function. These values can vary from 0 to 255 which represents 100 % duty cycle of the PWM signal or maximum LED brightness.
//we will make our program which will change the color of the LED each a second
void loop() {
  setColor(255, 0, 0); // Red Color
  delay(1000);
  setColor(0, 255, 0); // Green Color
  delay(1000);
  setColor(0, 0, 255); // Blue Color
  delay(1000);
  setColor(255, 255, 255); // White Color
  delay(1000);
  setColor(180, 0, 255); // Purple Color
  delay(1000);

   digitalWrite(ledPin,HIGH); //turn the LED on (HIGH is the voltage level)
    delay(1000); //wait for a second
    digitalWrite(ledPin,LOW); //turn the LED off by making the voltage LOW
    delay(1000); //wait for a second

    digitalWrite(ledPin1,HIGH); //turn the LED on (HIGH is the voltage level)
    delay(1000); //wait for a second
    digitalWrite(ledPin1,LOW); //turn the LED off by making the voltage LOW
    delay(1000); //wait for a second

    digitalWrite(ledPin2,HIGH); //turn the LED on (HIGH is the voltage level) // LED White Color
    delay(4000); //wait for a second
    digitalWrite(ledPin2,LOW); //turn the LED off by making the voltage LOW
    delay(4000); //wait for a second

}
//At the bottom of the sketch we have this custom made function named setColor() which takes 3 different arguments redValue, greenValue and blueValue.
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}





