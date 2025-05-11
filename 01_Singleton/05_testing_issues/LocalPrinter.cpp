//
// Created by kyle on 2025/05/11.
//

#include "LocalPrinter.h"

#include <iostream>

LocalPrinter LocalPrinter::m_Instance;

LocalPrinter& LocalPrinter::GetInstance() {
    return m_Instance;
}

void LocalPrinter::Print(const std::string& data) {
    std::cout << "[LOCALPRINTER]" << data << '\n';
}
