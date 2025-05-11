
//
// Created by kyle on 2025/05/11.
//

#include "LocalPrinter.h"

void PrintSales() {
    Printer::GetInstance("local").Print("Sales data");
}

int main() {
    auto& p = Printer::GetInstance("local");
    p.Print("Printing data to local printer");
    PrintSales();
}
