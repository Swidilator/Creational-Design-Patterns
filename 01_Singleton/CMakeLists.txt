cmake_minimum_required(VERSION 3.31)

set(CMAKE_CXX_STANDARD 20)


project(01_Singleton LANGUAGES CXX)


add_executable(01_basic_example 01_basic_example/main.cpp
        01_basic_example/Singleton.cpp
        01_basic_example/Singleton.h)

add_executable(02_logger 02_logger/main.cpp
        02_logger/Logger.cpp
        02_logger/Logger.h)

add_executable(03_lazy_singleton 03_lazy_singleton/main.cpp
        03_lazy_singleton/Logger.cpp
        03_lazy_singleton/Logger.h
        03_lazy_singleton/BaseSingleton.h)

add_executable(04_clock 04_clock/main.cpp
        04_clock/Clock.cpp
        04_clock/Clock.h)

add_executable(05_testing_issues 05_testing_issues/main.cpp
        05_testing_issues/LocalPrinter.cpp
        05_testing_issues/LocalPrinter.h
        05_testing_issues/Printer.h
        05_testing_issues/Printer.cpp
)

add_executable(06_registry 06_registry/main.cpp
        06_registry/LocalPrinter.cpp
        06_registry/LocalPrinter.h
        06_registry/Printer.h
        06_registry/PrinterProvider.cpp
        06_registry/PrinterProvider.h
        06_registry/PDFPrinter.cpp
        06_registry/PDFPrinter.h
)