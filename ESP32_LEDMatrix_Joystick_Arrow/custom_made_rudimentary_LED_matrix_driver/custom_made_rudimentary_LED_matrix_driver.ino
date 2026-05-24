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

int displayDot(){
  int row1[8] = {1,1,1,1,1,1,1,1};
  int row2[8] = {1,1,1,1,1,1,1,1};
  int row7[8] = {1,1,1,1,1,1,1,1};
  int row8[8] = {1,1,1,1,1,1,1,1};
  int row3[8] = {1,1,1,1,1,1,1,1};
  int row6[8] = {1,1,1,1,1,1,1,1};
  int row4[8] = {1,1,1,1,1,1,1,1};
  int row5[8] = {1,1,1,1,1,1,1,0};

  displayOnce_1088AS(row1, row2, row3, row4, row5, row6, row7, row8);

  return 0;
}

void setup() {

  pinMode(R1, OUTPUT); pinMode(R2, OUTPUT); pinMode(R3, OUTPUT); pinMode(R4, OUTPUT); pinMode(R5, OUTPUT); pinMode(R6, OUTPUT); pinMode(R7, OUTPUT); pinMode(R8, OUTPUT);
  pinMode(C1, OUTPUT); pinMode(C2, OUTPUT); pinMode(C3, OUTPUT); pinMode(C4, OUTPUT); pinMode(C5, OUTPUT); pinMode(C6, OUTPUT); pinMode(C7, OUTPUT); pinMode(C8, OUTPUT);

  delay(1000);

}

void loop() {

  displayDot();
}
