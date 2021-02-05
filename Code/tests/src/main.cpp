
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <windows.h>
#include <TiltedCore/Platform.hpp>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    TP_UNUSED(hInstance);
    TP_UNUSED(hPrevInstance);
    TP_UNUSED(lpCmdLine);
    TP_UNUSED(nShowCmd);

    return Catch::Session().run();
}
