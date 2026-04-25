#include <iostream>
#include <string>

// Pastikan file-file ini sudah ada di folder src/include/
#include "include/orang.hpp"
#include "include/dosen.hpp"
#include "include/mahasiswa.hpp"
#include "include/tendik.hpp"

using namespace std; // Untuk cout dan endl
using namespace sim; // Untuk Mahasiswa, Dosen, Tendik

int main(int argc, char ** argv)
{
    // Pastikan parameter konstruktor sesuai dengan yang ada di file .hpp kamu
    Mahasiswa mhs1("Adam Naufal Putra Cayono", 25, 1, 2007, "5024251099", 3);
    Dosen dsn1("Reza Fuad Rachmadi, S.T., M.T., Ph.D", 12, 5, 1980, "198504032012121001", "Teknik Komputer");
    Tendik tdk1("Muzammil, S.Sos", 20, 10, 1990, "197009031990031003", "Staff Tata Usaha");

    cout << "--- Sistem Informasi Akademik ---" << endl;
    mhs1.tampilkanData();
    dsn1.tampilkanData();
    tdk1.tampilkanData();

    return 0;
}