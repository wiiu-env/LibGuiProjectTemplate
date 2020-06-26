#include <string.h>
#include <whb/log_udp.h>
#include <nsysnet/socket.h>
#include "utils/logger.h"
#include "common/common.h"
#include "Application.h"

int32_t main(int32_t argc, char **argv) {
    WHBLogUdpInit();
    DEBUG_FUNCTION_LINE("Starting " VERSION "");

    DEBUG_FUNCTION_LINE("Start main application");
    Application::instance()->exec();

    DEBUG_FUNCTION_LINE("Main application stopped");
    Application::destroyInstance();

    DEBUG_FUNCTION_LINE("Peace out...");
    return 0;
}
