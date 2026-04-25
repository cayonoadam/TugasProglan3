#ifndef MAHASISWA_HPP
#define MAHASISWA_HPP
#include "orang.hpp"

namespace sim {
    class Mahasiswa : public Orang {
    private:
        std::string nrp;
        float ipk;
    public:
        Mahasiswa(std::string nama, int tgl, int bln, int thn, std::string nrp, float ipk);
        void tampilkanData() override;
    };
}
#endif