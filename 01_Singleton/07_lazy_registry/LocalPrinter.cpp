//
// Created by kyle on 2025/05/11.
//

#include "LocalPrinter.h"

#include <iostream>

#include "PrinterProvider.h"

PrinterPtr LocalPrinter::GetInstance() {
    // meyers singleton
    //static LocalPrinter instance{};
    //return instance;
    // simpler, but does not allow for detruction upon request

    return std::shared_ptr<LocalPrinter>{new LocalPrinter{}};
}

void LocalPrinter::Print(const std::string& data) {
    std::cout << "[LOCALPRINTER]" << data << '\n';
}
