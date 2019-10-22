/* LoRa Mesh Network for Arduino and RFM95W LoRa Radio Transceiver
 * This Source Code is for Set ID node in LoRa Mesh Network
 * Source code is developed using the RadioHead library because it includes an 
 * implementation of mesh networking. For details on how the mesh works, see the 
 * RadioHead documentation about it.
 * 
 * Each node has an identity which is stored in the device EEPROM.
 * 
 * Each node attempts to communicate with every other node in the network, and in 
 * the process it keeps track of a routing table that describes which nodes it can 
 * talk to directly and which nodes that messages get routed through when there is 
 * no direct connection available. It also keeps track of the signal strength that 
 * it “hears” from a node when it communicates with it directly
*/

#include <EEPROM.h>

// change this to be the ID of your node in the mesh network
uint8_t nodeId = 1;

void setup() {
  Serial.begin(9600);
  while (!Serial) ; // Wait for serial port to be available

  Serial.println("setting nodeId...");

  EEPROM.write(0, nodeId);
  Serial.print(F("set nodeId = "));
  Serial.println(nodeId);

  uint8_t readVal = EEPROM.read(0);

  Serial.print(F("read nodeId: "));
  Serial.println(readVal);

  if (nodeId != readVal) {
    Serial.println(F("*** FAIL ***"));
  } else {
    Serial.println(F("SUCCESS"));
  }
}

void loop() {

}
