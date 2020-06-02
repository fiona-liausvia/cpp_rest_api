#include "crow_all.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/welcome") ([] {
      crow::json::wvalue d;
      d["data"] = "Hello World.";
      return d;
    });

    app.port(5000).multithreaded().run();
}