//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <string>

#include "Printer.h"

class LocalPrinter : public Printer {
    static LocalPrinter m_Instance;

    LocalPrinter() = default;

public:
    static LocalPrinter& GetInstance();

    void Print(const std::string& data) override;
};
