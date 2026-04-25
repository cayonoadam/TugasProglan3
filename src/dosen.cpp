#include "include/dosen.hpp"
#include <iostream>

namespace sim {
    // Memanggil constructor Orang dulu, baru isi atribut Dosen
    Dosen::Dosen(std::string nama, int tgl, int bln, int thn, std::string nidn, std::string dept)
        : Orang(nama, tgl, bln, thn), nidn(nidn), departemen(dept) {}

    void Dosen::tampilkanData() {
        std::cout << "[Dosen] Nama: " << nama << " | NIDN: " << nidn << " | Dept: " << departemen << std::endl;
    }
}