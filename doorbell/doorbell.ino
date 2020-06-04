/**
TODO:
- measure voltage
- measure time
**/



unsigned long time;


void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  // Serial.begin(9600);
}

void loop() {
  digitalWrite(13,HIGH);

  // Serial.print("Time: ");
  // time = millis();
  // Serial.println(time);
  // delay(1000);
}
