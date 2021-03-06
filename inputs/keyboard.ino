#include <Boards.h>

int buttonPin1 = 8;   // button1
int buttonPin2 = 9;   // button2
int buttonPin3 = 10;   // button3
int buttonPin4 = 11;   // button4
int buttonPin5 = 12;   // button5
int buttonPin6 = 2;   // button6


int buttonState1 = 0;         // current state of the button
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int lastButtonState1 = 0;     // previous state of the button
int lastButtonState2 = 0;
int lastButtonState3 = 0;
int lastButtonState4 = 0;
int lastButtonState5 = 0;
int lastButtonState6 = 0;

unsigned long startPressed = 0;    // the time button was pressed
unsigned long endPressed = 0;      // the time button was released
unsigned long timeHold = 0;        // the time button is hold
unsigned long timeReleased = 0;    // the time button is released
unsigned long millis_held;        // How long the button was held (milliseconds)

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin1, INPUT);    // declare pushbutton as input
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  // initialize serial communication:
  Serial.begin(9600);

}

void loop() {
  // read the pushbutton input pin:

  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);


  // button state changed
  if (buttonState1 != lastButtonState1 || buttonState2 != lastButtonState2 || buttonState3 != lastButtonState3 || buttonState4 != lastButtonState4 || buttonState5 != lastButtonState5 || buttonState6 != lastButtonState6) {

    // the button was just pressed
    if (buttonState1 == HIGH || buttonState2 == HIGH || buttonState3 == HIGH || buttonState4 == HIGH || buttonState5 == HIGH || buttonState6 == HIGH) {
      startPressed = millis();

      timeReleased = startPressed - endPressed;

      Serial.println (timeReleased);

      if (timeReleased >= 500 && timeReleased < 1000) {
        Serial.println("button pressed medium");
      }

      else if (timeReleased >= 1000) {
        Serial.println("button pressed slow");

      }
      else  if (timeReleased < 500  ) {
        Serial.println("Button pressed very quick");
      }


      // the button was just released
    } else {
      endPressed = millis();


    }

  }

  // save the current state as the last state,
  //for next time through the loop
  lastButtonState1 = buttonState1;
  lastButtonState2 = buttonState2;
  lastButtonState3 = buttonState3;
  lastButtonState4 = buttonState4;
  lastButtonState5 = buttonState5;
  lastButtonState6 = buttonState6;
}
