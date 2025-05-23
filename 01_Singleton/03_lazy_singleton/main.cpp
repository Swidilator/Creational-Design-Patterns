
//
// Created by kyle on 2024/11/24.
//
#include <thread>

#include "BaseSingleton.h"
#include "Logger.h"


class GameManager : public BaseSingleton<GameManager> {
    MAKE_SINGLETON(GameManager);

public:
    void LoadAssets() {
    }

    void Run() {
    }
};

void OpenConnection() {
    Logger& lg = Logger::Instance();
    lg.WriteLog("Attempting to open a connection");
}

int main() {
    GameManager& gm = GameManager::Instance();
    gm.LoadAssets();


    std::thread t1{
        []() {
            Logger& lg = Logger::Instance();
            lg.WriteLog("Thread 1 has started");
        }
    };

    std::thread t2{
        []() {
            Logger& lg = Logger::Instance();
            lg.WriteLog("Thread 2 has started");
        }
    };

    t1.join();
    t2.join();


    // Logger &lg = Logger::Instance();
    // lg.SetTag("192.168.1.123");
    // lg.WriteLog("Application has started");
    // OpenConnection();
    // lg.WriteLog("Application is shutting down");
}
