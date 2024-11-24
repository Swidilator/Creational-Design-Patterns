//
// Created by kyle on 2024/11/24.
//

#include "Singleton.h"

Singleton Singleton::m_Instance;

Singleton &Singleton::Instance() {
    return m_Instance;
}

void Singleton::MethodA() {
}

void Singleton::MethodB() {
}
