#include "Gui.h"

#include <iostream>


int main(int argc, char * argv[])
{
    gui::startWebProcess(argc, argv);
    gui::init();
}

void gui::startWebProcess(int argc, char* argv[])
{
    app = new WebApp(argc, argv, false);
    int result = CefExecuteProcess(app->GetArgs(), app, nullptr);
  if (result >= 0) {
    // Child proccess has endend, so exit.
    exit(result);
  }
}
void gui::init()
{
  CefSettings settings;
  settings.command_line_args_disabled   = true;
  settings.no_sandbox                   = true;
  settings.remote_debugging_port        = 8999;
  settings.windowless_rendering_enabled = true;

  if(!CefInitialize(app->GetArgs(), settings, app, nullptr))
  {
    std::cerr<<"Failed to initialize CEF app"<<std::endl;
  }
}
void gui::cleanUp()
{
  CefShutdown();
}
void gui::update()
{
  CefDoMessageLoopWork();
}