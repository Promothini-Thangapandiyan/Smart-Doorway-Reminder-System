int pirPin = 7;
int ledPin = 2;
int buzzer = 8;
int val = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("Smart Doorway Reminder System Ready!");
}

void loop() {
  val = digitalRead(pirPin);
  
  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(buzzer,1000 );
    Serial.println("Motion Detected! Reminder: Take your keys and phone!");
    delay(2000);
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, HIGH);
  }
  
delay(500);
}
