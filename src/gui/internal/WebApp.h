#pragma once

#include <include/cef_app.h>

class WebApp : public CefApp
{
public:
    WebApp(int argc, char* argv[], bool hardware_accelerated);

    CefMainArgs const& GetArgs();
private:
  IMPLEMENT_REFCOUNTING(WebApp);

  CefMainArgs m_Args;

};