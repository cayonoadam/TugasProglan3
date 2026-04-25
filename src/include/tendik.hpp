#ifndef TENDIK_HPP
#define TENDIK_HPP
#include "orang.hpp"

namespace sim {
    class Tendik : public Orang {
    private:
        std::string nip;
        std::string unit_kerja;
    public:
        Tendik(std::string nama, int tgl, int bln, int thn, std::string nip, std::string unit);
        void tampilkanData() override;
    };
}
#endif