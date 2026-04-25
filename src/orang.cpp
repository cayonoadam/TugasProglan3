#include "include/orang.hpp"
#include <iostream>

namespace sim {
    // Constructor Orang
    Orang::Orang(std::string nama, int tgl, int bln, int thn) 
        : nama(nama), tgl(tgl), bln(bln), thn(thn) {}

    void Orang::tampilkanData() {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Tanggal Lahir: " << tgl << "-" << bln << "-" << thn << std::endl;
    }
}