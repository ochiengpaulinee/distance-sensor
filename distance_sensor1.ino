const int signalPin= 7;
const int triggerPin= 8;
long signal, inches, centimeters;

void setup() {
Serial.begin(9600);
}

void loop() {
pinMode (signalPin, INPUT);
pinMode (triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);

signal= pulseIn(signalPin, HIGH);
inches= signal/148;
centimeters= inches * 2.54; 

Serial.print(inches);
Serial.print("in, ");
Serial.print(centimeters);
Serial.print("cm");
Serial.println();

delay(500); 

}