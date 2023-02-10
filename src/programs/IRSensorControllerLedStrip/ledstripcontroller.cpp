#include <Arduino.h>
#include "../../service/domain.h"

#include "components/debug/console/console.h";
#include "components/board/NodeMCU/nodemcuBoard.h";
#include "components/network/wifi/wifi.h";
#include "components/ota/espOta/espOta.h";
#include "components/webserver/webserver/webserver.h";

Domain* ledStripController = new Domain();

void setup() {
    ledStripController->setBoardInterface(new NodeMCUBoard());
    ledStripController->setDebugInterface(new Console());
    ledStripController->setNetworkInterface(new EspWifi());
    ledStripController->setOtaInterface(new ESPOta());
    ledStripController->setWebserverInterface(new EspWebServer());
    ledStripController->setup();
}

void loop() {
    ledStripController->loop();
}