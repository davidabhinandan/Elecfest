#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW

int DIN = 23;
int CS = 15;
int CLK = 18;

MD_MAX72XX disp = MD_MAX72XX(HARDWARE_TYPE, CS, 1);

//byte smile[8] = {B00000000, B00000100, B00110010, B00000010, B00000010, B00110010, B00000100, B00000000}

void setSmile1() {

  disp.setPoint(2, 2, HIGH);
  disp.setPoint(3, 2, HIGH);
  disp.setPoint(2, 5, HIGH);
  disp.setPoint(3, 5, HIGH);
  disp.setPoint(5, 1, HIGH);
  disp.setPoint(5, 6, HIGH);
  disp.setPoint(6, 2, HIGH);
  disp.setPoint(6, 3, HIGH);
  disp.setPoint(6, 3, HIGH);
  disp.setPoint(6, 4, HIGH);
  disp.setPoint(6, 5, HIGH);

}

void setup() {

  disp.begin();
  disp.control(MD_MAX72XX::INTENSITY, 3);
  disp.clear();

}

void loop() {
  
  setSmile1();
  delay(1000);
  
}
