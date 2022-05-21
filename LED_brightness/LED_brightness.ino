int inInt;
int counter = 0;
int ledPin = 11;

void setup () {
  pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}

void loop () {
  if (Serial.available()) {
    inInt = Serial.parseInt();
    Serial.print("received");
    Serial.println(inInt);
    analogWrite(ledPin, constrain(inInt, 0, 255));
  }
}
