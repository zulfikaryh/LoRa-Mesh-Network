# LoRa-Mesh-Network

Source code is developed using the RadioHead library because it includes an implementation of mesh networking. For details on how the mesh works, see the RadioHead documentation about it.

Each node has an identity which is stored in the device EEPROM.

Each node attempts to communicate with every other node in the network, and in the process it keeps track of a routing table that describes which nodes it can talk to directly and which nodes that messages get routed through when there is no direct connection available. It also keeps track of the signal strength that it “hears” from a node when it communicates with it directly
