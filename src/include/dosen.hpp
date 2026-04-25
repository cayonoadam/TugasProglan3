#ifndef DOSEN_HPP
#define DOSEN_HPP
#include "orang.hpp"

namespace sim {
    class Dosen : public Orang {
    private:
        std::string nidn;
        std::string departemen;
    public:
        Dosen(std::string nama, int tgl, int bln, int thn, std::string nidn, std::string dept);
        void tampilkanData() override;
    };
}
#endif