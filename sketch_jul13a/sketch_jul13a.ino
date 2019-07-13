int SensorLED = 13;
int SensorINPUT = 3;
int data=1;
unsigned char state = 0;

void setup() {
  pinMode(SensorLED, OUTPUT); 
  pinMode(SensorINPUT, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(1, blink, RISING);
}

void loop() {
  Serial.print(data);
  if (state != 0) {
    state = 0;
    digitalWrite(SensorLED, HIGH);
    delay(500);
    tone(8,8);
    delay(500);
}
  else
    digitalWrite(SensorLED, LOW);
    noTone(8);
}

void blink() {
  state++;
}
