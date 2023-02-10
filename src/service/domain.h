#include "components/board/boardInterface.h"
#include "components/debug/debugInterface.h"
#include "components/network/networkInterface.h"
#include "components/ota/otaInterface.h"
#include "components/webserver/webserverinterface.h"

class Domain {
    private:
        BoardInterface* board;
        DebugInterface* debug;
        NetworkInterface* network;
        OtaInterface* ota;
        WebServerInterface* webserver;

    public:
        void setup();
        void loop();

        void setBoardInterface(BoardInterface* board);
        void setDebugInterface(DebugInterface* debug);
        void setNetworkInterface(NetworkInterface* network);
        void setOtaInterface(OtaInterface* ota);
        void setWebserverInterface(WebServerInterface* webserver);

};