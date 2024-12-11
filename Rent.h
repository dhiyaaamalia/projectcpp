#ifndef _RENT_H
#define _RENT_H
#include<istream>

using namespace std;

class Rent{
    public:
        void headerCategory();
        void displayCategory();
        void allRent();
        void bokingBook();
};

class Cons{
    public:
    string code, category;
    Cons (string code, string category);
};

#endif //_RENT_H