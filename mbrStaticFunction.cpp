#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private : 
       static int nim;

public : 
      int id;
      string nama;

      void setID();
      void printAll();

      static void setNim(int pNim) {nim = pNim; }
      static int getNim()  { return nim; }

      mahasiswa(string pnama)
      {
        nama = pnama;
        setID();
      }
};

int mahasiswa::nim = 0;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main ()
{
    mahasiswa mhs1("Baskara Hindia");
    mahasiswa mhs2("Juminten Asiap");

    mahasiswa::setNim(219); // memgakses nim melalui static member function "setNim"
    mahasiswa mhs3("Unung Meong");
    mahasiswa mhs4("Wirno Basudara");

    mhs1.printAll();

    mhs2.PrintAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() <<endl; // mengakses nim melalui static member function "getNim"

    return 0;
}