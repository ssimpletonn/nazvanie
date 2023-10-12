#include "MainController.h"
#include <drogon/drogon.h>

using namespace drogon;

void MainController::helloHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) {
    auto resp = HttpResponse::newHttpResponse();
    resp->setBody("hello");
    // resp->addHeader("Access-Control-Allow-Origin", "www.vk.com");
    // resp->addHeader("Access-Control-Allow-Methods", "POST");
    callback(resp);
}
