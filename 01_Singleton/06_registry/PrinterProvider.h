//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <mutex>
#include <string>
#include <unordered_map>

#include "Printer.h"

//Registry of singletons
//Multiton - Multiple singletons

class PrinterProvider {
    inline static std::recursive_mutex m_mTx;
    inline static std::unordered_map<std::string, Printer*> m_Printers{};

    PrinterProvider() = default;

public:
    static void RegisterPrinter(const std::string& key, Printer* p);

    static Printer* GetPrinterPtr(const std::string& key);

    static Printer& GetPrinterRef(const std::string& key);
};
