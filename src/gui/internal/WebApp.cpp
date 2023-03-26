#include "WebApp.h"

WebApp::WebApp(int argc, char* argv[], bool hardware_accelerated) : m_Args(argc, argv)
{
}

CefMainArgs const& WebApp::GetArgs()
{
    return m_Args;
}
