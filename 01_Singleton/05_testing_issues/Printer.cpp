//
// Created by kyle on 2025/05/11.
//

#include "Printer.h"

#include "LocalPrinter.h"

Printer& Printer::GetInstance(const std::string& key) {
    if (key == "local") {
        return LocalPrinter::GetInstance();
    }
}
