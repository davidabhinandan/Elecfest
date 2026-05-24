const int C1 = 23;
const int C2 = 22;
const int C3 = 21;
const int C4 = 19;
const int C5 = 18;
const int C6 = 5;
const int C7 = 17;
const int C8 = 16;

const int R1 = 2;
const int R2 = 15;
const int R3 = 32;
const int R4 = 33;
const int R5 = 25;
const int R6 = 26;
const int R7 = 27;
const int R8 = 14;

const int delayOnce = 2;


const int potX = 13;
const int potY = 12;
const int button = 0;

int potXVal = 2048;
int potYVal = 2048;
int buttonState = 1;

int joystickState = 0;
int s1 = 0;
int s2 = 0;
int previousState = 0;
int nonZeroState = 0;

int up[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,1,1,1,1,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0}};

int down[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,1,1,1,1,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0}};

int right[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,0},
{0,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,0},
{0,0,0,0,0,1,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};

int left[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0},
{0,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,0},
{0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};

int dot[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,1,0,0,1,0,0},
{0,0,1,0,0,1,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};

int solidDot[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,1,1,0,0,0},
{0,0,1,1,1,1,0,0},
{0,0,1,1,1,1,0,0},
{0,0,0,1,1,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};


int displayOnce_1088AS(int* row1, int* row2, int* row3, int* row4, int* row5, int* row6, int* row7, int* row8){
  digitalWrite(R1, HIGH); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row1[0])); digitalWrite(C2, (1 - row1[1])); digitalWrite(C3, (1 - row1[2])); digitalWrite(C4, (1 - row1[3])); digitalWrite(C5, (1 - row1[4])); digitalWrite(C6, (1 - row1[5])); digitalWrite(C7, (1 - row1[6])); digitalWrite(C8, (1 - row1[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, HIGH); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row2[0])); digitalWrite(C2, (1 - row2[1])); digitalWrite(C3, (1 - row2[2])); digitalWrite(C4, (1 - row2[3])); digitalWrite(C5, (1 - row2[4])); digitalWrite(C6, (1 - row2[5])); digitalWrite(C7, (1 - row2[6])); digitalWrite(C8, (1 - row2[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, HIGH); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row3[0])); digitalWrite(C2, (1 - row3[1])); digitalWrite(C3, (1 - row3[2])); digitalWrite(C4, (1 - row3[3])); digitalWrite(C5, (1 - row3[4])); digitalWrite(C6, (1 - row3[5])); digitalWrite(C7, (1 - row3[6])); digitalWrite(C8, (1 - row3[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, HIGH); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row4[0])); digitalWrite(C2, (1 - row4[1])); digitalWrite(C3, (1 - row4[2])); digitalWrite(C4, (1 - row4[3])); digitalWrite(C5, (1 - row4[4])); digitalWrite(C6, (1 - row4[5])); digitalWrite(C7, (1 - row4[6])); digitalWrite(C8, (1 - row4[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, HIGH); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row5[0])); digitalWrite(C2, (1 - row5[1])); digitalWrite(C3, (1 - row5[2])); digitalWrite(C4, (1 - row5[3])); digitalWrite(C5, (1 - row5[4])); digitalWrite(C6, (1 - row5[5])); digitalWrite(C7, (1 - row5[6])); digitalWrite(C8, (1 - row5[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, HIGH); digitalWrite(R7, LOW); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row6[0])); digitalWrite(C2, (1 - row6[1])); digitalWrite(C3, (1 - row6[2])); digitalWrite(C4, (1 - row6[3])); digitalWrite(C5, (1 - row6[4])); digitalWrite(C6, (1 - row6[5])); digitalWrite(C7, (1 - row6[6])); digitalWrite(C8, (1 - row6[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, HIGH); digitalWrite(R8, LOW);
  digitalWrite(C1, (1 - row7[0])); digitalWrite(C2, (1 - row7[1])); digitalWrite(C3, (1 - row7[2])); digitalWrite(C4, (1 - row7[3])); digitalWrite(C5, (1 - row7[4])); digitalWrite(C6, (1 - row7[5])); digitalWrite(C7, (1 - row7[6])); digitalWrite(C8, (1 - row7[7]));
  delay(delayOnce);
  digitalWrite(R1, LOW); digitalWrite(R2, LOW); digitalWrite(R3, LOW); digitalWrite(R4, LOW); digitalWrite(R5, LOW); digitalWrite(R6, LOW); digitalWrite(R7, LOW); digitalWrite(R8, HIGH);
  digitalWrite(C1, (1 - row8[0])); digitalWrite(C2, (1 - row8[1])); digitalWrite(C3, (1 - row8[2])); digitalWrite(C4, (1 - row8[3])); digitalWrite(C5, (1 - row8[4])); digitalWrite(C6, (1 - row8[5])); digitalWrite(C7, (1 - row8[6])); digitalWrite(C8, (1 - row8[7]));
  delay(delayOnce);

  return 0;
}

int displayOnce_1088BS(int* row1, int* row2, int* row3, int* row4, int* row5, int* row6, int* row7, int* row8){
  digitalWrite(R1, LOW); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row1[0])); digitalWrite(C2, (row1[1])); digitalWrite(C3, (row1[2])); digitalWrite(C4, (row1[3])); digitalWrite(C5, (row1[4])); digitalWrite(C6, (row1[5])); digitalWrite(C7, (row1[6])); digitalWrite(C8, (row1[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, LOW); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row2[0])); digitalWrite(C2, (row2[1])); digitalWrite(C3, (row2[2])); digitalWrite(C4, (row2[3])); digitalWrite(C5, (row2[4])); digitalWrite(C6, (row2[5])); digitalWrite(C7, (row2[6])); digitalWrite(C8, (row2[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, LOW); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row3[0])); digitalWrite(C2, (row3[1])); digitalWrite(C3, (row3[2])); digitalWrite(C4, (row3[3])); digitalWrite(C5, (row3[4])); digitalWrite(C6, (row3[5])); digitalWrite(C7, (row3[6])); digitalWrite(C8, (row3[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, LOW); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row4[0])); digitalWrite(C2, (row4[1])); digitalWrite(C3, (row4[2])); digitalWrite(C4, (row4[3])); digitalWrite(C5, (row4[4])); digitalWrite(C6, (row4[5])); digitalWrite(C7, (row4[6])); digitalWrite(C8, (row4[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, LOW); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row5[0])); digitalWrite(C2, (row5[1])); digitalWrite(C3, (row5[2])); digitalWrite(C4, (row5[3])); digitalWrite(C5, (row5[4])); digitalWrite(C6, (row5[5])); digitalWrite(C7, (row5[6])); digitalWrite(C8, (row5[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, LOW); digitalWrite(R7, HIGH); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row6[0])); digitalWrite(C2, (row6[1])); digitalWrite(C3, (row6[2])); digitalWrite(C4, (row6[3])); digitalWrite(C5, (row6[4])); digitalWrite(C6, (row6[5])); digitalWrite(C7, (row6[6])); digitalWrite(C8, (row6[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, LOW); digitalWrite(R8, HIGH);
  digitalWrite(C1, (row7[0])); digitalWrite(C2, (row7[1])); digitalWrite(C3, (row7[2])); digitalWrite(C4, (row7[3])); digitalWrite(C5, (row7[4])); digitalWrite(C6, (row7[5])); digitalWrite(C7, (row7[6])); digitalWrite(C8, (row7[7]));
  delay(delayOnce);
  digitalWrite(R1, HIGH); digitalWrite(R2, HIGH); digitalWrite(R3, HIGH); digitalWrite(R4, HIGH); digitalWrite(R5, HIGH); digitalWrite(R6, HIGH); digitalWrite(R7, HIGH); digitalWrite(R8, LOW);
  digitalWrite(C1, (row8[0])); digitalWrite(C2, (row8[1])); digitalWrite(C3, (row8[2])); digitalWrite(C4, (row8[3])); digitalWrite(C5, (row8[4])); digitalWrite(C6, (row8[5])); digitalWrite(C7, (row8[6])); digitalWrite(C8, (row8[7]));
  delay(delayOnce);

  return 0;
}

int readJoy(){

  potXVal = analogRead(potX);
  potYVal = analogRead(potY);

  //left is 0, right is 4096
  //up is 0, down is 4096

  if (((potXVal>1965)&&(potXVal<2010))&&((potYVal>1965)&&(potYVal<2010))) {
    return 0;
  }

  else if ((potYVal>potXVal)&&(potXVal<(4096-potYVal))) {
    return 4; //left-command
  }

  else if ((potYVal>potXVal)&&(potXVal>(4096-potYVal))) {
    return 3; //down-command
  }

  else if (((potYVal)<potXVal)&&(potXVal<(4096-potYVal))) {
    return 1; //up-command
  }

  else {return 2;} //right-command
}

int displaySolidDot(){
  displayOnce_1088AS(solidDot[0],solidDot[1], solidDot[2], solidDot[3], solidDot[4], solidDot[5], solidDot[6], solidDot[7]);

  return 0;
}

int displayDot(){
  displayOnce_1088AS(dot[0],dot[1], dot[2], dot[3], dot[4], dot[5], dot[6], dot[7]);

  return 0;
}


int animatedUp(int i) {
  int up_new[8][8];
  for (int j = 0; j <= 7; j++){
    for (int k = 0; k <= 7; k++){
      up_new[j][k] = up[(j + i)%8][k];
    }
  }
  displayOnce_1088AS(up_new[0], up_new[1], up_new[2], up_new[3], up_new[4], up_new[5], up_new[6], up_new[7]);

  return 0;
}

int animatedDown(int i) {
  int down_new[8][8];
  for (int j = 0; j <= 7; j++){
    for (int k = 0; k <= 7; k++){
      down_new[j][k] = down[((j - i)+8)%8][k];
    }
  }
  displayOnce_1088AS(down_new[0], down_new[1], down_new[2], down_new[3], down_new[4], down_new[5], down_new[6], down_new[7]);

  return 0;
}

int animatedRight(int i) {
  int right_new[8][8];
  for (int j = 0; j <= 7; j++){
    for (int k = 0; k <= 7; k++){
      right_new[j][k] = right[j][((k - i)+8)%8];
    }
  }
  displayOnce_1088AS(right_new[0], right_new[1], right_new[2], right_new[3], right_new[4], right_new[5], right_new[6], right_new[7]);

  return 0;
}

int animatedLeft(int i) {
  int left_new[8][8];
  for (int j = 0; j <= 7; j++){
    for (int k = 0; k <= 7; k++){
      left_new[j][k] = left[j][(k + i)%8];
    }
  }
  displayOnce_1088AS(left_new[0], left_new[1], left_new[2], left_new[3], left_new[4], left_new[5], left_new[6], left_new[7]);

  return 0;
}

int stabilisedState(int currentState){
  s2 = s1; s1 = currentState;

  if (s1 == s2){
    previousState = currentState;
  }

  return previousState;
}


void setup() {

  pinMode(R1, OUTPUT); pinMode(R2, OUTPUT); pinMode(R3, OUTPUT); pinMode(R4, OUTPUT); pinMode(R5, OUTPUT); pinMode(R6, OUTPUT); pinMode(R7, OUTPUT); pinMode(R8, OUTPUT);
  pinMode(C1, OUTPUT); pinMode(C2, OUTPUT); pinMode(C3, OUTPUT); pinMode(C4, OUTPUT); pinMode(C5, OUTPUT); pinMode(C6, OUTPUT); pinMode(C7, OUTPUT); pinMode(C8, OUTPUT);

  pinMode(button, INPUT);

  //Serial.begin(115200);

  delay(1000);

}

void loop() {
  buttonState = digitalRead(button);
  joystickState = stabilisedState(readJoy());
  
  if (joystickState == 0) {
    if (buttonState == 1) {
      displayDot();
    }
    else {
      displaySolidDot();
    }
    nonZeroState = 0;
  }

  else {
    if (joystickState == 1) {
      for (int l = 0; l <= 7; l++) {
        animatedUp(nonZeroState%8);
      }
      nonZeroState += 1;
    }

    else if (joystickState == 3) {
      for (int l = 0; l <= 7; l++) {
        animatedDown(nonZeroState%8);
      }
      nonZeroState += 1;
    }

    else if (joystickState == 2) {
      for (int l = 0; l <= 7; l++) {
        animatedRight(nonZeroState%8);
      }
      nonZeroState += 1;
    }

    else {
      for (int l = 0; l <= 7; l++) {
        animatedLeft(nonZeroState%8);
      }
      nonZeroState += 1;
    }
  }
}