//
// Created by kyle on 2025/05/11.
//

#include "PDFPrinter.h"

#include <iostream>

#include "PrinterProvider.h"


PrinterPtr PDFPrinter::GetInstance() {
    return std::shared_ptr<PDFPrinter>{new PDFPrinter{}};
}

void PDFPrinter::Print(const std::string& data) {
    std::cout << "[PDFPRINTER]" << data << '\n';
}
