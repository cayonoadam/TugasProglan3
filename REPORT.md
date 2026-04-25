# Laporan Tugas 2: Pemrograman Berorientasi Objek (OOP)
**Nama:** Adam Naufal Putra Cayono
**NRP:** 5024251099  
**Jurusan:** Teknik Komputer, ITS

## 1. Deskripsi Program
Program ini adalah sistem informasi akademik (SIM Akademik) sederhana yang mengimplementasikan konsep dasar **Object-Oriented Programming (OOP)** menggunakan bahasa C++. Program mengelola data tiga entitas utama: Mahasiswa, Dosen, dan Tenaga Kependidikan (Tendik), yang semuanya diturunkan dari satu kelas induk.

## 2. Struktur Kelas (Inheritance)
Program ini menggunakan prinsip **Inheritance (Pewarisan)** untuk menghindari duplikasi kode.

* **Kelas Induk (Orang):** Menyimpan atribut umum seperti nama dan tanggal lahir (tgl, bln, thn).
* **Kelas Turunan:**
    * Mahasiswa: Menambahkan atribut NRP dan IPK.
    * Dosen: Menambahkan atribut NIDN dan Departemen.
    * Tendik: Menambahkan atribut NIP dan Unit Kerja.

## 3. Implementasi Teknis
Beberapa fitur OOP tingkat lanjut yang diterapkan:
* **Encapsulation:** Atribut kelas menggunakan akses protected dan private untuk keamanan data.
* **Namespace Custom:** Seluruh kelas berada di dalam namespace sim untuk menghindari bentrokan nama fungsi di proyek skala besar.
* **Polymorphism:** Menggunakan fungsi virtual pada kelas induk dan override pada kelas turunan untuk memastikan fungsi tampilkanData() memanggil implementasi yang benar sesuai tipe objeknya.
* **Separation of Concerns:** Kode dipisahkan menjadi file header (.hpp) untuk deklarasi dan file sumber (.cpp) untuk implementasi sesuai standar industri.

## 4. Cara Menjalankan Program
Dikarenakan kendala pada environment make di sistem operasi Windows, proses kompilasi dilakukan secara manual menggunakan compiler g++ dengan menghubungkan seluruh file sumber (.cpp) secara langsung.

Buka terminal pada folder root project:

* PowerShell
* cd assignment2-main

Jalankan perintah kompilasi untuk menggabungkan seluruh modul:

* PowerShell
* g++ src/main.cpp src/orang.cpp src/mahasiswa.cpp src/dosen.cpp src/tendik.cpp -o main

Jalankan program yang telah berhasil dikompilasi:

* PowerShell
* ./main