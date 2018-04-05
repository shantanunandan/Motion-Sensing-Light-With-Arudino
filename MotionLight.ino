
int relay = 8;  // Relay pin
int pirPin1 = 10; // Input for HC-S501
//int pirPin2 = 9; // Input for HC-S501

int pirValue1; // Place to store read PIR Value
//int pirValue2; // Place to store read PIR Value 

void setup() {
  // put your setup code here, to run once:
  pinMode(relay, OUTPUT);
  pinMode(pirPin1, INPUT);
  // pinMode(pirPin2, INPUT);
  Serial.begin(9600);
  //digitalWrite(relay, LOW);
  delay(60000);
}

void loop() {
  // put your main code here, to run repeatedly:
  pirValue1 = digitalRead(pirPin1);
  //  pirValue2 = digitalRead(pirPin2);

  Serial.print(pirValue1);
  //  Serial.print(pirValue2);
  Serial.print(' ');
  if ((pirValue1 == LOW)) {
    Serial.print("\n");
    Serial.print("Motion Not Detected");
    digitalWrite(relay, HIGH);
  }
  else {
    Serial.print("\n");
    Serial.print("Motion Detected ");
    digitalWrite(relay, LOW);
  }
}
