/**
 *
 *  TestFilter.cc
 *
 */

#include "TestFilter.h"
#include <iostream>

using namespace drogon;

    void TestFilter::doFilter(const HttpRequestPtr &req,
                            FilterCallback &&fcb,
                            FilterChainCallback &&fccb)
    {
    //Edit your logic here
    if (1)
    {
        //Passed
        fccb();
        return;
    }
    //Check failed
    auto res = drogon::HttpResponse::newHttpResponse();
    res->setStatusCode(k500InternalServerError);
    fcb(res);
}
