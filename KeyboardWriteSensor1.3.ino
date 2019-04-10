/*  AnalogReadSerial 
  //

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
  l*/
#include <Keyboard.h>
//#include Keyboard.h
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Keyboard.begin();
  pinMode(10, INPUT);
  Serial.print("turned on");
}

// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(10);
  int sensorValueW = analogRead(A0);
  int sensorValueS = analogRead(A2);
  int sensorValueI = analogRead(A4);
  int sensorValueK = analogRead(A5);

  if (buttonState == 1) {
    // read the input on analog pin 0:
    // print out the value you read:
    Serial.print(sensorValueK);
    Serial.print("\t");
    Serial.print(sensorValueS);
    Serial.print("\t");
    Serial.print(sensorValueI);
    Serial.print("\t");
    Serial.println(sensorValueK);
   



    if (sensorValueW < 100) {
      Keyboard.write(83);
      Serial.println(" S key pressed");
    }

    // print out the value you read:
//     Serial.print(sensorValueW);
//    Serial.print("\t");
//    Serial.print(sensorValueI);
//    Serial.print("\t");
//    Serial.print(sensorValueK);
//    Serial.print("\t");
//    Serial.println(sensorValueS);
//    Serial.print("\t");


    if (sensorValueS < 100) {
      Keyboard.write(87);
      Serial.println("W key pressed");
    }

    // print out the value you read:
//    Serial.print(sensorValueW);
//    Serial.print("\t");
//    Serial.print(sensorValueS);
//    Serial.print("\t");
//    Serial.print(sensorValueK);
//    Serial.print("\t");
//    Serial.println(sensorValueI);
//    Serial.print("\t");


    if (sensorValueI < 100) {
      Keyboard.write(75);
      Serial.println(" K key pressed");
    }

    // print out the value you read:
//    Serial.print(sensorValueW);
//    Serial.print("\t");
//    Serial.print(sensorValueS);
//    Serial.print("\t");
//    Serial.print(sensorValueI);
//    Serial.print("\t");
//    Serial.println(sensorValueK);
//    Serial.print("\t");


    if (sensorValueK < 100) {
      Keyboard.write(73);
      Serial.println(" I key pressed");
    }

       delay(1);        // delay in between reads for stability
  }
}


