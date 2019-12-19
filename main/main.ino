#include <heltec.h>
#include <Arduino.h>

void setSerialPort() {
    Serial.begin(115200);
    delay(100);
    Serial.println("");
    Serial.println("l:init_ok");
}

void setup() {
    /** init **/
    Heltec.begin(true, true, true, true, 868E6);
    /** print welcome from the display **/
    Heltec.display->clear();
    Heltec.display->drawString(0,0,"ENeS LoRa");
    Heltec.display->display();
    /** set the serial port **/
    setSerialPort();

}


void loop() {
  
}
