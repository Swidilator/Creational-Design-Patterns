//
// Created by kyle on 2025/05/11.
//

#pragma once
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <functional>

#include "Printer.h"

//Registry of singletons
//Multiton - Multiple singletons

using PrinterPtr = std::shared_ptr<Printer>;
using Creator = std::function<PrinterPtr()>;

class PrinterProvider {
    struct InstanceInfo {
        PrinterPtr m_Printer{};
        Creator m_Creator{};
    };

    inline static std::recursive_mutex m_mTx;
    inline static std::unordered_map<std::string, InstanceInfo> m_Printers{};

    PrinterProvider() = default;

public:
    static void RegisterCreator(const std::string& key, Creator creator);

    static PrinterPtr GetPrinter(const std::string& key);
};
