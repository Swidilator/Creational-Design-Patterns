//
// Created by kyle on 2024/11/24.
//

#include "Logger.h"

#include <iostream>
#include <source_location>
#include <cstdlib>
#include <mutex>

//Logger *Logger::m_pInstance;

Logger::Logger() {
    std::cout << std::source_location::current().function_name() << std::endl;
    m_pStream = fopen("applog.txt", "w");
}

Logger::~Logger() {
    std::cout << std::source_location::current().function_name() << std::endl;
    fclose(m_pStream);
}

void Logger::WriteLog(const char* pMessage) const {
    fprintf(m_pStream, "[%s] %s\n", m_Tag.c_str(), pMessage);
    fflush(m_pStream);
}

void Logger::SetTag(const char* pTag) {
    m_Tag = pTag;
}
