//
// Created by kyle on 2024/11/24.
//

#pragma once
#include <cstdio>
#include <memory>
#include <string>

class Logger {
    struct Deleter {
        void operator()(Logger* p) {
            delete p;
        }
    };

    inline static std::mutex m_Mtx;

    FILE* m_pStream;
    std::string m_Tag;

    Logger();

    inline static Logger* m_pInstance;
    //inline static std::unique_ptr<Logger, Deleter> m_pInstance{};

    ~Logger();

public:
    Logger(const Logger&) = delete;

    Logger& operator=(const Logger&) = delete;

    static Logger& Instance();

    void WriteLog(const char* pMessage) const;

    void SetTag(const char* pTag);
};
