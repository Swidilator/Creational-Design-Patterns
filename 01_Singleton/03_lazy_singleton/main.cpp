
//
// Created by kyle on 2024/11/24.
//
#include "Logger.h"

void OpenConnection() {
    Logger &lg = Logger::Instance();
    lg.WriteLog("Attempting to open a connection");
}

int main() {
    Logger &lg = Logger::Instance();
    lg.SetTag("192.168.1.123");
    lg.WriteLog("Application has started");
    OpenConnection();
    lg.WriteLog("Application is shutting down");
}
