#include "include/tendik.hpp"
#include <iostream>

namespace sim {
    Tendik::Tendik(std::string nama, int tgl, int bln, int thn, std::string nip, std::string unit)
        : Orang(nama, tgl, bln, thn), nip(nip), unit_kerja(unit) {}

    void Tendik::tampilkanData() {
        std::cout << "[Tendik] Nama: " << nama << " | NIP: " << nip << " | Unit: " << unit_kerja << std::endl;
    }
}