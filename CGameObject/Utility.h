#pragma once
#include<iostream>
#include<cstdint>
#include<iomanip>

using namespace std;
void printHexVal(uint16_t val);

template <typename T>
void printRawMem(T* p, uint16_t linebytes, uint16_t lines) {
    auto printHex = [](uint8_t byte) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<uint16_t>(byte);
        };

    for (uint16_t l = 0; l < lines; ++l) {
        std::cout << reinterpret_cast<void*>(p) << " ";
        for (uint16_t u = 0; u < linebytes; ++u) {
            printHex(*reinterpret_cast<uint8_t*>(p + u));
            std::cout << " ";
        }
        std::cout << "\n";
        p += linebytes / sizeof(T);
    }
}