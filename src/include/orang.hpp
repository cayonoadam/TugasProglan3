#ifndef ORANG_HPP
#define ORANG_HPP
#include <string>

namespace sim {
    class Orang {
    protected:
        std::string nama;
        int tgl, bln, thn;
    public:
        Orang(std::string nama, int tgl, int bln, int thn);
        virtual void tampilkanData(); // virtual supaya bisa di-override
    };
}
#endif