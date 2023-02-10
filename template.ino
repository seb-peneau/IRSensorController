#include <IRremote.hpp>
#include <TinyIRSender.hpp>
#define IR_SEND_PIN D8

uint8_t sAddress = 0xEF00;
uint8_t OFF_COMMAND = 0x2;
uint8_t ON_COMMAND = 0x3;
uint8_t RED_COMMAND = 0x4;
uint8_t GREEN_COMMAND = 0x5;
uint8_t BLUE_COMMAND = 0x6;
uint8_t WHITE_COMMAND = 0x7;
uint8_t sRepeats = 3;
 
 void setup()
{
  pinMode(IR_SEND_PIN, OUTPUT);
}

void loop() {
  sendNECMinimal(IR_SEND_PIN, sAddress, ON_COMMAND, sRepeats);
  delay(2000);
  sendNECMinimal(IR_SEND_PIN, sAddress, RED_COMMAND, sRepeats);
  delay(2000);
  sendNECMinimal(IR_SEND_PIN, sAddress, GREEN_COMMAND, sRepeats);
  delay(2000);
  sendNECMinimal(IR_SEND_PIN, sAddress, BLUE_COMMAND, sRepeats);
  delay(2000);
  sendNECMinimal(IR_SEND_PIN, sAddress, WHITE_COMMAND, sRepeats);
  delay(2000);
  sendNECMinimal(IR_SEND_PIN, sAddress, OFF_COMMAND, sRepeats);
  delay(5000);
}
