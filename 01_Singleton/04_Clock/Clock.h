//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <string>


class Clock {

    int m_Hour;
    int m_Minute;
    int m_Second;

    void CurrentTime();
public:
    Clock();
    int GetHour();
    int GetMinute();
    int GetSecond();

    std::string GetTimeString();

};
