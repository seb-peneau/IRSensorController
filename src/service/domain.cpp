#include "domain.h"

void Domain::setup() {

}

void Domain::loop() {

}

void Domain::setBoardInterface(BoardInterface* b) {
    this->board = b;
}

void Domain::setDebugInterface(DebugInterface* d) {
    this->debug = d;
}

void Domain::setNetworkInterface(NetworkInterface* n) {
    this->network = n;
}

void Domain::setOtaInterface(OtaInterface* o) {
    this->ota = o;
}

void Domain::setWebserverInterface(WebServerInterface* w) {
    this->webserver = w;
}