#define LIGHT A3
#define BUZZER 6

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LIGHT, INPUT);
  pinMode(BUZZER, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(LIGHT);
  
  Serial.print("LIGHT : ");
  Serial.println(value);
  if (value > 500){
    tone(BUZZER,10000);
    delay(200);
    noTone(BUZZER);
    delay(200);
  }
  else {
    noTone(BUZZER);
  }
}
