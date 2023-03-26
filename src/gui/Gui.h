#pragma once

#include "internal/WebApp.h"

namespace gui
{
    /// Launches GUI child processes. For each GUI web site, a separate process is spawned by the
    /// Chromium Embedded Framework. For the main process, this method returns immediately, for all
    /// others it blocks until the child process has terminated.
    void startWebProcess(int argc, char* argv[]);

    /// Initializes CEF. Needs to be called after executeWebProcess().
    void init();

    /// Shuts down CEF.
    void cleanUp();

    /// Triggers the CEF update function. This should be called once a frame.
    void update();

    CefRefPtr<WebApp> app;
}