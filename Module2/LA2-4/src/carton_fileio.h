#pragma once

#include<array>
#include<string>
#include "carton.h"

const int kMaxArraySize = 20;

std::string ReadDataFormatFromFile(std::string filename, // by value
            std::array<Carton,kMaxArraySize>& cartons,   // by reference
            int& rec_num);                               // by reference

void WriteDataToFile(std::string filename,                    // by value
            const std::array<Carton,kMaxArraySize>& cartons,  // by constant reference
            int rec_num);                                     // by value

