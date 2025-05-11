//
// Created by kyle on 2025/05/11.
//

#include "LocalPrinter.h"

#include <iostream>

#include "PrinterProvider.h"

LocalPrinter LocalPrinter::m_Instance;

LocalPrinter& LocalPrinter::GetInstance() {
    return m_Instance;
}

void LocalPrinter::Print(const std::string& data) {
    std::cout << "[LOCALPRINTER]" << data << '\n';
}

LocalPrinter::LocalPrinter() {
    PrinterProvider::RegisterPrinter("local", this);
}
