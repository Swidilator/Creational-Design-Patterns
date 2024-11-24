//
// Created by kyle on 2024/11/24.
//

#pragma once
#include <cstdio>
#include <string>

class Logger {
    FILE *m_pStream;
    std::string m_Tag;

    Logger();

    static Logger *m_pInstance;

public:
    static Logger &Instance();

    Logger(const Logger &) = delete;

    Logger &operator=(const Logger &) = delete;

    ~Logger();

    void WriteLog(const char *pMessage);

    void SetTag(const char *pTag);
};
