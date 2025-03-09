//
// Created by kyle on 2024/11/24.
//

#pragma once
#include <cstdio>
#include <memory>
#include <string>

#include "BaseSingleton.h"

class Logger : public BaseSingleton<Logger> {
    friend BaseSingleton<Logger>;

    FILE* m_pStream;
    std::string m_Tag;

    Logger();

    ~Logger();

public:
    Logger(const Logger&) = delete;

    Logger& operator=(const Logger&) = delete;

    void WriteLog(const char* pMessage) const;

    void SetTag(const char* pTag);
};
