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
    //beware static-initialisation fiasco
    std::atexit([]() {
        delete m_pInstance;
    });
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


std::once_flag flag;
Logger& Logger::Instance() {
    // Double-checked locking pattern

    // if (m_pInstance == nullptr) {
    //     m_Mtx.lock();
    //     if (m_pInstance == nullptr) {
    //         //m_pInstance = new Logger{};
    //         // Non-thread-safe demonstration of above line of code.
    //         void *p=operator new(sizeof(Logger));
    //         m_pInstance = static_cast<Logger*>(p);
    //         new(p) Logger{};
    //     }
    //     m_Mtx.unlock();
    // }

    // Meyer's Singleton (thread-safe from C++11 onwards)
    // static Logger instance;
    //
    // return instance;

    // call_once, in this case Meyer's Singleton is still better
    std::call_once(flag, []() {
        m_pInstance = new Logger{};
    });

    return *m_pInstance;
}
