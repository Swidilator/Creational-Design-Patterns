//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <string>

#include "Printer.h"

class LocalPrinter : public Printer {
    LocalPrinter() = default;

public:
    static PrinterPtr GetInstance();

    void Print(const std::string& data) override;
};
