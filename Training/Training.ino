#include "training.h"

void setup() {
  // put your setup code here, to run once:
  RoveComm.begin(RC_DRIVEBOARD_FOURTHOCTET, &TCPServer);
}

void loop() {
  // put your main code here, to run repeatedly: 
  packet = RoveComm.read();

  switch(packet.data_id){
    case RC_DRIVEBOARD_DRIVELEFTRIGHT_DATA_ID:
      Serial.println("Bruh moment");
      break;
    
    default:
      break;
  }
}
