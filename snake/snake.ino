#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int snake[64][2];
int snakeHeading[2] = {5,4};
int length = 3;
int previousDirection = 1;

int snakeDiag[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,1,0,0},
{0,0,0,0,0,1,0,0},
{0,0,0,0,0,1,0,0}};

int appleDiag[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};

int appleLocation[2];


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

  if (((potXVal>1950)&&(potXVal<2010))&&((potYVal>1950)&&(potYVal<2010))) {
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

//int stabilisedState(int currentState){
//  s2 = s1; s1 = currentState;
//
//  if (s1 == s2){
//    previousState = currentState;
//  }
//
//  return previousState;
//}

int startingSnake(){
  for (int k = 0; k < 3; k++){
    for (int l = 0; l < 2; l++){
      snake[k][l] = (l==0)*(k==5) + (l==1)*(k==(l+5));
    }
  }
  srand(time(NULL)); //for the random number generator

  return 0;
}

int hasEncounteredApple() {
  if ((appleLocation[0] == snakeHeading[0])&&(appleLocation[1] == snakeHeading[1])) {
    return 1;
  }
  return 0;
}

int encounteredApple(){
  for (int k = (length); k > 0; k--){
    for (int l = 0; l < 2; l++){
      snake[k][l] = snake[k-1][l];
    }
  }
  snake[0][0] = ((snakeHeading[0]+8)%8);
  snake[0][1] = ((snakeHeading[1]+8)%8);

  length += 1;

  generateNextApple();

  return 0;
}

int notEncounteredApple() {
  for (int k = (length - 1); k > 0; k--){
    for (int l = 0; l < 2; l++){
      snake[k][l] = snake[k-1][l];
    }
  }
  snake[0][0] = ((snakeHeading[0]+8)%8);
  snake[0][1] = ((snakeHeading[1]+8)%8);

  return 0;
}

int updateSnake(int collision) {
  if (collision) {
    encounteredApple();
  }
  else {
    notEncounteredApple();
  }
  return 0;
}

int captureInput(int state) {
  if (state == 0) {
    snakeHeading[0] = (snake[0][0] - ((previousDirection + 1)%2)*(previousDirection - 3) + 8)%8;
    snakeHeading[1] = (snake[0][1] - (previousDirection%2)*(previousDirection - 2) + 8)%8;
    updateSnake(hasEncounteredApple());
    return previousDirection;
  }
  else if (state == 1) {
    snakeHeading[0] = snake[0][0];
    snakeHeading[1] = (snake[0][1] + 1)%8;
    updateSnake(hasEncounteredApple());
    return 1;
  }
  else if (state == 2) {
    snakeHeading[0] = (snake[0][0] + 1)%8;
    snakeHeading[1] = snake[0][1];
    updateSnake(hasEncounteredApple());
    return 2;
  }
  else if (state == 3) {
    snakeHeading[0] = snake[0][0];
    snakeHeading[1] = (snake[0][1] + 7)%8;
    updateSnake(hasEncounteredApple());
    return 3;
  }
  else if (state == 4) {
    snakeHeading[0] = (snake[0][0] + 7)%8;
    snakeHeading[1] = snake[0][1];
    updateSnake(hasEncounteredApple());
    return 4;
  }
}

//some random number generator, number between 0 and 7
int ranNum() {
  return (rand()%8);
}

int isColliding() {
  for (int i = 0; i < 64; i++) {
    if ((snake[i][0] == appleLocation[0])&&(snake[i][1] == appleLocation[1])) {
      return 1;
    }
  }
  return 0;
}

int isNearHead() {
  if (((snake[0][0] - appleLocation[0])<2)||((snake[0][1] - appleLocation[1])<2)) {
    return 1;
  }
  return 0;
}

int generateNextApple() {
  appleLocation[0] = ranNum();
  appleLocation[1] = ranNum();

  while (1) {
    if (~((isColliding())||(isNearHead()))) {
      //not to lie in the same line as that of 
      if ((previousDirection == 1)||(previousDirection == 3)) {
        while (appleLocation[0] == snake[0][0]) {
          appleLocation[0] = ranNum();
        }
      }
      else {
        while (appleLocation[1] == snake[0][1]) {
          appleLocation[1] = ranNum();
        }
      }
      return 0;
    }
    else {
      appleLocation[0] = ranNum();
      appleLocation[1] = ranNum();
    }
  }
}

int updateSnakeDiag() {
  for (int j = 0; j < 8; j++) {
    for (int k = 0; k < 8; k++) {
      snakeDiag[j][k] = 0;
    }
  }
    
  for (int i = 0; i < length; i++) {
    snakeDiag[snake[i][0]][snake[i][1]] = 1;
  }
  return 0;
}



int displayObjects() {
  for (int j = 0; j < 8; j++) {
    for (int k = 0; k < 8; k++) {
      appleDiag[j][k] = 0;
    }
  }

  appleDiag[appleLocation[0]][appleLocation[1]] = 1;
  updateSnakeDiag();

  for (int k = 0; k < 43; k++) {
    displayOnce_1088AS(appleDiag[0], appleDiag[1], appleDiag[2], appleDiag[3], appleDiag[4], appleDiag[5], appleDiag[6], appleDiag[7]);
    displayOnce_1088AS(snakeDiag[0], snakeDiag[1], snakeDiag[2], snakeDiag[3], snakeDiag[4], snakeDiag[5], snakeDiag[6], snakeDiag[7]);
  }
  
  return 0;
}

int initialDisplayObjects() {
  for (int j = 0; j < 8; j++) {
    for (int k = 0; k < 8; k++) {
      appleDiag[j][k] = 0;
    }
  }

  appleDiag[appleLocation[0]][appleLocation[1]] = 1;
  updateSnakeDiag();

  for (int k = 0; k < 100; k++) {
    displayOnce_1088AS(appleDiag[0], appleDiag[1], appleDiag[2], appleDiag[3], appleDiag[4], appleDiag[5], appleDiag[6], appleDiag[7]);
    displayOnce_1088AS(snakeDiag[0], snakeDiag[1], snakeDiag[2], snakeDiag[3], snakeDiag[4], snakeDiag[5], snakeDiag[6], snakeDiag[7]);
  }
  
  return 0;
}

int start() {
  while (1) {
    previousDirection = captureInput(readJoy());
    displayObjects();
  }
  return 0;
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
  
  if (buttonState == 0) {
    startingSnake();
    generateNextApple();
    initialDisplayObjects();

    start();
  }
}
