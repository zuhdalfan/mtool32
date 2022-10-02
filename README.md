MAINTENANCE-TOOL
version : DEV-1.0

simple maintenance by just using terminal interfacing
interconnecting your laptop to ESP32 to know its status
spesifically the I/O status

it is purposed to get ESP32 condition seamlessly by using
simple light-weight terminal-interfaced application in C

by using MQTT protocol above TCP/IP,
the Application as Client
the ESP32 as Client
your Laptop will act as dummy-broker

in real implementation, your laptop should join
Broker's Network as Client

it can be scaled to web-socket enabled
so you can monitor all condition via browser/ cloud
