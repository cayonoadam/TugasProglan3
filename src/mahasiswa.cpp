#include "include/mahasiswa.hpp"
#include <iostream>

namespace sim {
    Mahasiswa::Mahasiswa(std::string nama, int tgl, int bln, int thn, std::string nrp, float ipk)
        : Orang(nama, tgl, bln, thn), nrp(nrp), ipk(ipk) {}

    void Mahasiswa::tampilkanData() {
        std::cout << "[Mahasiswa] Nama: " << nama << " | NRP: " << nrp << " | IPK: " << ipk << std::endl;
    }
}