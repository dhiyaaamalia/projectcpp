#ifndef _BOOK_H
#define _BOOK_H
#include<istream>

using namespace std;

class Book{
    public:
    string detail;
    int navigate;
    void headerBook();
    void fantasy();
    void romance();
    void horror();
    void biography();
    void ensiklopedia();
    void mystery();
    void scienceFiction();
    void comedy ();
    void detailF();
    void detailR();
    void detailH();
    void detailB();
    void detailE();
    void detailC();
    void detailM();
    void detailS();
    string getBookDetails(string code);

};

class  Bookcons{
    public:
    string Title;
    string Tahunterbit;
    string Penulis;
    string kotaterbit;
    string Penerbit;
    string code, judul;
    string Kode;
    Bookcons (string cd, string jud);
    Bookcons (string inputJudul, string inputTahunterbit, string inputPenulis, string inputKotaterbit, string inputPenerbit, string inputKode);
};

#endif //_BOOK_H