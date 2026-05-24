const int potX = 13;
const int potY = 12;
const int button = 0;

int potXVal = 2048;
int potYVal = 2048;
int buttonState = 0;

void setup() {
  
  pinMode(button, INPUT);
  Serial.begin(115200);
  delay(1000);

  

}

void loop() {
  //potXVal = analogRead(potX);
  //Serial.println(potXVal);
  //potYVal = analogRead(potY);
  //Serial.println(potYVal);

  buttonState = digitalRead(button);
  Serial.println(buttonState);
  delay(10);

}
