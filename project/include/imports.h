#pragma once

#if defined(_WIN32)
#include "WebView2EnvironmentOptions.h"
#include "WebView2.h"
#define WEBVIEW_MSWEBVIEW2_BUILTIN_IMPL 0
#endif

#include "webview.h"
#include "webview/errors.hh"
#include "webview/types.hh"
#include "webview/version.h"
#include "../src/WebViewHelper.cpp"