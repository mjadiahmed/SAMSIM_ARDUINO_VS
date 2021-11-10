#define TINY_GSM_MODEM_SIM808
#include <TinyGsmClient.h>

//Serial1 is between AtmelSAM and SIM, while SerialUSB is between ATmelSAM and USB Port

TinyGsm modem(Serial1);

void setup() {
  //digitalWrite(9, HIGH);
  //delay(2000);
  //digitalWrite(9, LOW);

  SerialUSB.begin(115200);
  Serial1.begin(115200);
  pinMode(9, OUTPUT);

  //while (!SerialUSB);

  SerialUSB.println("started !");
  if (modem.testAT())
  {
    SerialUSB.println("Modem Works !"); 
}
else {
  SerialUSB.println("Modem doesn't respond !"); 
}



}

void loop() {

}
