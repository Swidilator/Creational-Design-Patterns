//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <string>

// Monostate pattern, enforces singularity through behaviour, using structure
class Clock {

    inline static int m_Hour;
    inline static int m_Minute;
    inline static int m_Second;

    static void CurrentTime();
    Clock();

public:
    static int GetHour();
    static int GetMinute();
    static int GetSecond();

    static std::string GetTimeString();

};
