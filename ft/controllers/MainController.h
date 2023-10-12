#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class MainController : public drogon::HttpController<MainController>
{
  public:
    METHOD_LIST_BEGIN
    ADD_METHOD_TO(MainController::helloHandleHttpRequest, "hello", Options, Get, "TestFilter");
    METHOD_LIST_END
    void helloHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback);
};
