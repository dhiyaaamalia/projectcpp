#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <chrono>
#include "Rent.h"
#include "Book.h"
#include "Main.h"

using namespace std;
using namespace chrono;

void Rent::headerCategory(){
    cout <<"\t***********************************************************************\n";
    cout <<"\t                          S N A P B O O K                              \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t                    B O O K   C A T E G O R Y                          \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t      Code      ||                  Category Name                      \n";
    cout <<"\t***********************************************************************\n";
}

Cons::Cons(string cd, string ctg){
    code = cd;
    category = ctg;
    cout <<"\t       " << Cons::code << "        ||   " << Cons::category <<"\n";
}

void Rent::displayCategory(){
    Book access;
    string genre;
    Cons Cons1=Cons("F", "Fantasy\t");
    Cons Cons2=Cons("R", "Romance\t");
    Cons Cons3=Cons("H", "Horror/Creepy");
    Cons Cons4=Cons("B", "Biography\t");
    Cons Cons5=Cons("E", "Ensiklopedia\t");
    Cons Cons6=Cons("C", "Comedy\t");
    Cons Cons7=Cons("S", "Science Fiction\t");
    Cons Cons8=Cons("M", "Mystery");
    cout <<"\t***********************************************************************\n";
    cout <<"\tLogin Page > Main Menu > Rent > Book Catagory\n\n";
    cout <<"\tChoose the book category based on the book code = ";
    cin  >>genre;
    if(genre=="F"){
        system("cls");
        access.fantasy();
    }
    if(genre=="R"){
        system("cls");
        access.romance();
    }
    if(genre=="H"){
        system("cls");
        access.horror();
    }
    if(genre=="B"){
        system("cls");
        access.biography();
    }
    if(genre=="E"){
        system("cls");
        access.ensiklopedia();
    }
    if(genre=="C"){
        system("cls");
        access.comedy();
    }
    if(genre=="S"){
        system("cls");
        access.scienceFiction();
    }
    if(genre=="M"){
        system("cls");
        access.mystery();
    }
    if (genre!="F" && genre!="R" && genre!="H" && genre!="B" && genre!="E" && genre!="C" && genre!="S" && genre!="M"){
        cout<<"\tYou enter code was wrong, please re-enter the code with capital\n";
        system("pause");
        system ("cls");
        headerCategory();
        displayCategory();    
    }
}

void Rent::allRent(){
    Rent access;
    system("cls");
    access.headerCategory();
    access.displayCategory();
}

void Rent::bokingBook() {
    Main include;
    Book book;
    string rentDay, bookCode, rentedBook, returnDay, currentUser;

    // Read current user
    ifstream session("currentUser.txt");
    if (!session.is_open()) {
        cout << "\tError: No user is currently logged in.\n";
        system("pause");
        include.callMenu();
        return;
    }
    getline(session, currentUser);
    session.close();

    // Get current date (today's date)
    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now);
    struct tm *parts = localtime(&now_c);

    // Format the current date as DD/MM/YYYY
    rentDay = to_string(parts->tm_mday) + "/" +
              to_string(parts->tm_mon + 1) + "/" +
              to_string(parts->tm_year + 1900);

    cout << "\tToday's date: " << rentDay << endl;

    // Input book code
    cout << "\tEnter the book code you want to rent: ";
    cin >> bookCode;

    // Get book details (Title) based on the code
    rentedBook = book.getBookDetails(bookCode); 
    if (rentedBook == "Invalid code") {
        cout << "\tInvalid book code. Please try again.\n";
        system("pause");
        bokingBook(); 
        return;
    }

    // Calculate return day (7 days later)
    string day, month, year;
    day = rentDay.substr(0, 2); 
    month = rentDay.substr(3, 2); 
    year = rentDay.substr(6, 4); 

    int dayInt = stoi(day) + 7;
    int monthInt = stoi(month);
    int yearInt = stoi(year);
    if (dayInt > 31) { 
        dayInt -= 31;
        monthInt += 1;
    }

    if (monthInt > 12) {
        monthInt = 1;
        yearInt += 1;
    }

    // Format return date as DD/MM/YYYY
    returnDay = (dayInt < 10 ? "0" : "") + to_string(dayInt) + "/" +
                (monthInt < 10 ? "0" : "") + to_string(monthInt) + "/" +
                to_string(yearInt);

    // Save rental record in rentedBook.txt
    ofstream rentalRecord("rentedBook.txt", ios::app);
    if (rentalRecord.is_open()) {
        rentalRecord << currentUser << " " << rentedBook << " " << rentDay << " " << returnDay << endl;
        rentalRecord.close();
        cout << "\tBook rented successfully!\n";
        cout << "\tBook rented: " << rentedBook << endl;
        cout << "\tReturn by: " << returnDay << endl;
    } else {
        cout << "\tError: Could not save rental record.\n";
    }

    system("pause");
    include.callMenu();  // Return to main menu
}

