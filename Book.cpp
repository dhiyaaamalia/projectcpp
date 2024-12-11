#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include "Book.h"
#include "Rent.h"
#include <map>

using namespace std;

void Book::headerBook(){
    system("cls");
        cout <<"\t**************************************************************************\n";
        cout <<"\t                            S N A P B O O K                               \n";
        cout <<"\t**************************************************************************\n";
        cout <<"\t                   Detail Information of the Book                         \n";
        cout <<"\t**************************************************************************\n";
        cout <<"\t                Rent price Rp 15.000 for each book                        \n";
        cout <<"\t**************************************************************************\n\n";
}

void Book::fantasy(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy\n\n\n";
        Bookcons F1 = Bookcons("F1", "The Fellowship of the Ring");
        Bookcons F2 = Bookcons("F2", "A Game of Thrones");
        Bookcons F3 = Bookcons("F3", "The Name of the Wind");
        Bookcons F4 = Bookcons("F4", "Mistborn: The Final Empire");
        Bookcons F5 = Bookcons("F5", "The Way of Kings");
        Bookcons F6 = Bookcons("F6", "Eragon");
        Bookcons F7 = Bookcons("F7", "The Lies of Locke Lamora");
        Bookcons F8 = Bookcons("F8", "The Wheel of Time");
        Bookcons F9 = Bookcons("F9", "Harry Potter");
        Bookcons F10 = Bookcons("F10", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
            if (navigate==1){
                enter.allRent();      
            }
            if (navigate==2){
                access.detailF();
            }
            if (navigate!=1 && navigate!=2){
                cout<<"\tYou enter the wrong number, please re-enter the right number\n";
                system("pause");
                access.fantasy();
            }
}

void Book::romance(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Romance\n\n\n";
        Bookcons R1 = Bookcons("R1", "Pride and Prejudice");
        Bookcons R2 = Bookcons("R2", "Me Before You");
        Bookcons R3 = Bookcons("R3", "The Notebook");
        Bookcons R4 = Bookcons("R4", "Twilight");
        Bookcons R5 = Bookcons("R5", "A Walk to Remember");
        Bookcons R6 = Bookcons("R6", "The Fault in Our Stars");
        Bookcons R7 = Bookcons("R7", "Jane Eyre");
        Bookcons R8 = Bookcons("R8", "Anna Karenina");
        Bookcons R9 = Bookcons("R9", "Outlander");
        Bookcons R10 = Bookcons("R10", "The Time Traveler's Wife");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailR();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.romance();
        }
}

void Book::horror(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Horror/Creepy\n";
        Bookcons H1 = Bookcons("H1", "It");
        Bookcons H2 = Bookcons("H2", "The Shining");
        Bookcons H3 = Bookcons("H3", "Dracula");
        Bookcons H4 = Bookcons("H4", "The Haunting of Hill House");
        Bookcons H5 = Bookcons("H5", "The Exorcist");
        Bookcons H6 = Bookcons("H6", "Frankenstein");
        Bookcons H7 = Bookcons("H7", "Pet Sematary");
        Bookcons H8 = Bookcons("H8", "Bird Box");
        Bookcons H9 = Bookcons("H9", "The Silent Patient");
        Bookcons H10 = Bookcons("H10", "Coraline");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin  >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailH();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.horror();
        }
}

void Book::biography(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category >  Biography\n\n\n";
        Bookcons B1 = Bookcons("B1", "Steve Jobs");
        Bookcons B2 = Bookcons("B2", "Becoming");
        Bookcons B3 = Bookcons("B3", "Long Walk to Freedom");
        Bookcons B4 = Bookcons("B4", "The Diary of a Young Girl");
        Bookcons B5 = Bookcons("B5", "Elon Musk: Tesla, SpaceX");
        Bookcons B6 = Bookcons("B6", "The Wright Brothers");
        Bookcons B7 = Bookcons("B7", "Alexander Hamilton");
        Bookcons B8 = Bookcons("B8", "Churchill: Walking with Destiny");
        Bookcons B9 = Bookcons("B9", "Leonardo da Vinci");
        Bookcons B10 = Bookcons("B10", "Einstein: His Life and Universe");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailB();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.biography();
        }
}

void Book::ensiklopedia(){
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Ensiklopedia\n\n\n";
        Bookcons E1 = Bookcons("E1", "National Geographic Kids Encyclopedia");
        Bookcons E2 = Bookcons("E2", "Smithsonian Earth");
        Bookcons E3 = Bookcons("E3", "Britannica All New Kids' Encyclopedia");
        Bookcons E4 = Bookcons("E4", "Science Year by Year");
        Bookcons E5 = Bookcons("E5", "The Animal Book");
        Bookcons E6 = Bookcons("E6", "The History of the World");
        Bookcons E7 = Bookcons("E7", "Universe: The Definitive Visual Guide");
        Bookcons E8 = Bookcons("E8", "Atlas of Human Anatomy");
        Bookcons E9 = Bookcons("E9", "The Big Book of Knowledge");
        Bookcons E10 = Bookcons("E10", "Ocean: The Definitive Visual Guide");
        cout  <<"\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin   >>navigate;
        if (navigate==1){
            enter.allRent();      
        }
        if (navigate==2){
            access.detailE();
        }
        if (navigate!=1 && navigate!=2){
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            access.fantasy();
        }
}

void Book::mystery() {
    Book access;
    Rent enter;
    access.headerBook();
        cout << "\tLogin Page > Main Menu > Rent > Book Category > Mystery\n\n\n";
        Bookcons M1 = Bookcons("M1", "The Girl with the Dragon Tattoo");
        Bookcons M2 = Bookcons("M2", "Gone Girl");
        Bookcons M3 = Bookcons("M3", "Big Little Lies");
        Bookcons M4 = Bookcons("M4", "Sherlock Holmes");
        Bookcons M5 = Bookcons("M5", "The Da Vinci Code");
        Bookcons M6 = Bookcons("M6", "Murder on the Orient Express");
        Bookcons M7 = Bookcons("M7", "The Silence of the Lambs");
        Bookcons M8 = Bookcons("M8", "In the Woods");
        Bookcons M9 = Bookcons("M9", "The Woman in White");
        Bookcons M10 = Bookcons("M10", "Rebecca");

        cout << "\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin >> navigate;

        if (navigate == 1) {
            enter.allRent();
        } else if (navigate == 2) {
            access.detailM();
        } else {
            cout << "\tYou entered the wrong number, please re-enter the right number\n";
            system("pause");
            access.mystery();
        }
}

void Book::comedy() {
    Book access;
    Rent enter;
    access.headerBook();
        cout << "\tLogin Page > Main Menu > Rent > Book Category > Comedy\n\n\n";
        Bookcons C1 = Bookcons("C1", "Good Omens");
        Bookcons C2 = Bookcons("C2", "The Hitchhiker's Guide");
        Bookcons C3 = Bookcons("C3", "Bossypants");
        Bookcons C4 = Bookcons("C4", "Yes Please");
        Bookcons C5 = Bookcons("C5", "Catch-22");
        Bookcons C6 = Bookcons("C6", "Diary of a Wimpy Kid");
        Bookcons C7 = Bookcons("C7", "Hyperbole and a Half");
        Bookcons C8 = Bookcons("C8", "The Secret Diary");
        Bookcons C9 = Bookcons("C9", "The World According to Garp");
        Bookcons C10 = Bookcons("C10", "The Rosie Project");

        cout << "\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin >> navigate;

        if (navigate == 1) {
            enter.allRent();
        } else if (navigate == 2) {
            access.detailC();
        } else {
            cout << "\tYou entered the wrong number, please re-enter the right number\n";
            system("pause");
            access.comedy();
        }
}

void Book::scienceFiction() {
    Book access;
    Rent enter;
    access.headerBook();
        cout << "\tLogin Page > Main Menu > Rent > Book Category > Science Fiction\n\n\n";
        Bookcons S1 = Bookcons("SF1", "Dune");
        Bookcons S2 = Bookcons("SF2", "Ender's Game");
        Bookcons S3 = Bookcons("SF3", "The Martian");
        Bookcons S4 = Bookcons("SF4", "1984");
        Bookcons S5 = Bookcons("SF5", "Brave New World");
        Bookcons S6 = Bookcons("SF6", "Neuromancer");
        Bookcons S7 = Bookcons("SF7", "Snow Crash");
        Bookcons S8 = Bookcons("SF8", "Hyperion");
        Bookcons S9 = Bookcons("SF9", "Foundation");
        Bookcons S10 = Bookcons("SF10", "Fahrenheit 451");

        cout << "\tNavigate:\n \t1. Previous Page (back to the category list)\n \t2. Next Page (It'll be shown the detail information of the book)\n \tEnter the choice number = ";
        cin >> navigate;

        if (navigate == 1) {
            enter.allRent();
        } else if (navigate == 2) {
            access.detailF();
        } else {
            cout << "\tYou entered the wrong number, please re-enter the right number\n";
            system("pause");
            access.scienceFiction();
        }
}

void Book::detailF(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailF1 = Bookcons("The Fellowship of the Ring", "1954", "J.R.R. Tolkien", "London", "George Allen & Unwin", "F1");
        Bookcons detailF2 = Bookcons("A Game of Thrones", "1996", "George R.R. Martin", "New York", "Bantam Spectra", "F2");
        Bookcons detailF3 = Bookcons("The Name of the Wind", "2007", "Patrick Rothfuss", "New York", "DAW Books", "F3");
        Bookcons detailF4 = Bookcons("Mistborn: The Final Empire", "2006", "Brandon Sanderson", "New York", "Tor Books", "F4");
        Bookcons detailF5 = Bookcons("The Way of Kings", "2010", "Brandon Sanderson", "New York", "Tor Books", "F5");
        Bookcons detailF6 = Bookcons("Eragon", "2002", "Christopher Paolini", "New York", "Alfred A. Knopf", "F6");
        Bookcons detailF7 = Bookcons("The Lies of Locke Lamora", "2006", "Scott Lynch", "New York", "Bantam Spectra", "F7");
        Bookcons detailF8 = Bookcons("The Wheel of Time", "1990", "Robert Jordan", "New York", "Tor Books", "F8");
        Bookcons detailF9 = Bookcons("Harry Potter and the Philosopher's Stone", "1997", "J.K. Rowling", "London", "Bloomsbury", "F9");
        Bookcons detailF10 = Bookcons("The Chronicles of Narnia: The Lion, the Witch and the Wardrobe", "1950", "C.S. Lewis", "London", "Geoffrey Bles", "F10");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailR(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailR1 = Bookcons("Pride and Prejudice", "1813", "Jane Austen", "London", "T. Egerton, Whitehall", "R1");
        Bookcons detailR2 = Bookcons("Me Before You", "2012", "Jojo Moyes", "London", "Penguin Books", "R2");
        Bookcons detailR3 = Bookcons("The Notebook", "1996", "Nicholas Sparks", "New York", "Warner Books", "R3");
        Bookcons detailR4 = Bookcons("Twilight", "2005", "Stephenie Meyer", "New York", "Little, Brown and Company", "R4");
        Bookcons detailR5 = Bookcons("A Walk to Remember", "1999", "Nicholas Sparks", "New York", "Warner Books", "R5");
        Bookcons detailR6 = Bookcons("The Fault in Our Stars", "2012", "John Green", "New York", "Dutton Books", "R6");
        Bookcons detailR7 = Bookcons("Jane Eyre", "1847", "Charlotte Bronte", "London", "Smith, Elder & Co.", "R7");
        Bookcons detailR8 = Bookcons("Anna Karenina", "1877", "Leo Tolstoy", "Moscow", "The Russian Messenger", "R8");
        Bookcons detailR9 = Bookcons("Outlander", "1991", "Diana Gabaldon", "New York", "Delacorte Press", "R9");
        Bookcons detailR10 = Bookcons("The Time Traveler's Wife", "2003", "Audrey Niffenegger", "New York", "MacAdam/Cage", "R10");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailH(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailH1 = Bookcons("It", "1986", "Stephen King", "New York", "Viking Press", "H1");
        Bookcons detailH2 = Bookcons("The Shining", "1977", "Stephen King", "New York", "Doubleday", "H2");
        Bookcons detailH3 = Bookcons("Dracula", "1897", "Bram Stoker", "London", "Archibald Constable and Company", "H3");
        Bookcons detailH4 = Bookcons("The Haunting of Hill House", "1959", "Shirley Jackson", "New York", "Viking Press", "H4");
        Bookcons detailH5 = Bookcons("The Exorcist", "1971", "William Peter Blatty", "New York", "Harper & Row", "H5");
        Bookcons detailH6 = Bookcons("Frankenstein", "1818", "Mary Shelley", "London", "Lackington, Hughes, Harding, Mavor & Jones", "H6");
        Bookcons detailH7 = Bookcons("Pet Sematary", "1983", "Stephen King", "New York", "Doubleday", "H7");
        Bookcons detailH8 = Bookcons("Bird Box", "2014", "Josh Malerman", "New York", "Ecco Press", "H8");
        Bookcons detailH9 = Bookcons("The Silent Patient", "2019", "Alex Michaelides", "London", "Orion Publishing", "H9");
        Bookcons detailH10 = Bookcons("Coraline", "2002", "Neil Gaiman", "New York", "HarperCollins", "H10");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailB(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailB1 = Bookcons("Steve Jobs", "2011", "Walter Isaacson", "New York", "Simon & Schuster", "B1");
        Bookcons detailB2 = Bookcons("Becoming", "2018", "Michelle Obama", "New York", "Crown Publishing Group", "B2");
        Bookcons detailB3 = Bookcons("Long Walk to Freedom", "1994", "Nelson Mandela", "Johannesburg", "Macdonald Purnell", "B3");
        Bookcons detailB4 = Bookcons("The Diary of a Young Girl", "1947", "Anne Frank", "Amsterdam", "Contact Publishing", "B4");
        Bookcons detailB5 = Bookcons("Elon Musk: Tesla, SpaceX, and the Quest for a Fantastic Future", "2015", "Ashlee Vance", "New York", "HarperCollins", "B5");
        Bookcons detailB6 = Bookcons("The Wright Brothers", "2015", "David McCullough", "New York", "Simon & Schuster", "B6");
        Bookcons detailB7 = Bookcons("Alexander Hamilton", "2004", "Ron Chernow", "New York", "Penguin Press", "B7");
        Bookcons detailB8 = Bookcons("Churchill: Walking with Destiny", "2018", "Andrew Roberts", "London", "Viking Press", "B8");
        Bookcons detailB9 = Bookcons("Leonardo da Vinci", "2017", "Walter Isaacson", "New York", "Simon & Schuster", "B9");
        Bookcons detailB10 = Bookcons("Einstein: His Life and Universe", "2007", "Walter Isaacson", "New York", "Simon & Schuster", "B10");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailE(){
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
        cout  <<"\tLogin Page > Main Menu > Rent > Book Category > Fantasy > Detail Information\n\n\n";
        Bookcons detailE1 = Bookcons("National Geographic Kids Encyclopedia", "2016", "National Geographic Society", "Washington, D.C.", "National Geographic", "E1");
        Bookcons detailE2 = Bookcons("Smithsonian Earth", "2015", "James F. Luhr", "New York", "DK Publishing", "E2");
        Bookcons detailE3 = Bookcons("Britannica All New Kids' Encyclopedia", "2020", "Christopher Lloyd", "Chicago", "Encyclopaedia Britannica", "E3");
        Bookcons detailE4 = Bookcons("Science Year by Year", "2018", "DK Publishing", "New York", "DK Publishing", "E4");
        Bookcons detailE5 = Bookcons("The Animal Book", "2014", "David Burnie", "New York", "DK Publishing", "E5");
        Bookcons detailE6 = Bookcons("The History of the World", "2019", "J.M. Roberts", "New York", "Penguin Books", "E6");
        Bookcons detailE7 = Bookcons("Universe: The Definitive Visual Guide", "2012", "Martin Rees", "London", "Dorling Kindersley", "E7");
        Bookcons detailE8 = Bookcons("Atlas of Human Anatomy", "2021", "Frank H. Netter", "Philadelphia", "Elsevier", "E8");
        Bookcons detailE9 = Bookcons("The Big Book of Knowledge", "2017", "DK Publishing", "New York", "DK Publishing", "E9");
        Bookcons detailE10 = Bookcons("Ocean: The Definitive Visual Guide", "2014", "National Geographic Society", "Washington, D.C.", "National Geographic", "E10");
        cout  <<"\t\nIf you want to rent a book, enter the following details: \n";
        enter.bokingBook();
}

void Book::detailC() {
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
    cout << "\tLogin Page > Main Menu > Rent > Book Category > Comedy > Detail Information\n\n\n";
    Bookcons detailC1 = Bookcons("Good Omens", "1990", "Neil Gaiman & Terry Pratchett", "London", "Gollancz", "C1");
    Bookcons detailC2 = Bookcons("The Hitchhiker's Guide to the Galaxy", "1979", "Douglas Adams", "London", "Pan Books", "C2");
    Bookcons detailC3 = Bookcons("Bossypants", "2011", "Tina Fey", "New York", "Little, Brown and Company", "C3");
    Bookcons detailC4 = Bookcons("Yes Please", "2014", "Amy Poehler", "New York", "Dey Street Books", "C4");
    Bookcons detailC5 = Bookcons("Catch-22", "1961", "Joseph Heller", "New York", "Simon & Schuster", "C5");
    Bookcons detailC6 = Bookcons("Diary of a Wimpy Kid", "2007", "Jeff Kinney", "New York", "Amulet Books", "C6");
    Bookcons detailC7 = Bookcons("Hyperbole and a Half", "2013", "Allie Brosh", "New York", "Touchstone", "C7");
    Bookcons detailC8 = Bookcons("The Secret Diary of Adrian Mole", "1982", "Sue Townsend", "London", "Methuen Publishing", "C8");
    Bookcons detailC9 = Bookcons("The World According to Garp", "1978", "John Irving", "New York", "Dutton", "C9");
    Bookcons detailC10 = Bookcons("The Rosie Project", "2013", "Graeme Simsion", "Melbourne", "Text Publishing", "C10");
    enter.bokingBook();
}

void Book::detailS() {
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
    cout << "\tLogin Page > Main Menu > Rent > Book Category > Science Fiction > Detail Information\n\n\n";
    Bookcons detailS1 = Bookcons("Dune", "1965", "Frank Herbert", "Philadelphia", "Chilton Books", "SF1");
    Bookcons detailS2 = Bookcons("Ender's Game", "1985", "Orson Scott Card", "New York", "Tor Books", "SF2");
    Bookcons detailS3 = Bookcons("The Martian", "2011", "Andy Weir", "California", "Crown Publishing Group", "SF3");
    Bookcons detailS4 = Bookcons("1984", "1949", "George Orwell", "London", "Secker & Warburg", "SF4");
    Bookcons detailS5 = Bookcons("Brave New World", "1932", "Aldous Huxley", "London", "Chatto & Windus", "SF5");
    Bookcons detailS6 = Bookcons("Neuromancer", "1984", "William Gibson", "New York", "Ace Books", "SF6");
    Bookcons detailS7 = Bookcons("Snow Crash", "1992", "Neal Stephenson", "New York", "Bantam Books", "SF7");
    Bookcons detailS8 = Bookcons("Hyperion", "1989", "Dan Simmons", "New York", "Doubleday", "SF8");
    Bookcons detailS9 = Bookcons("Foundation", "1951", "Isaac Asimov", "New York", "Gnome Press", "SF9");
    Bookcons detailS10 = Bookcons("Fahrenheit 451", "1953", "Ray Bradbury", "New York", "Ballantine Books", "SF10");
    enter.bokingBook();
}

void Book::detailM() {
    system("cls");
    Book access;
    Rent enter;
    access.headerBook();
    cout << "\tLogin Page > Main Menu > Rent > Book Category > Mystery > Detail Information\n\n\n";
    Bookcons detailM1 = Bookcons("The Girl with the Dragon Tattoo", "2005", "Stieg Larsson", "Stockholm", "Norstedts Förlag", "M1");
    Bookcons detailM2 = Bookcons("Gone Girl", "2012", "Gillian Flynn", "New York", "Crown Publishing Group", "M2");
    Bookcons detailM3 = Bookcons("Big Little Lies", "2014", "Liane Moriarty", "Sydney", "Penguin Publishing Group", "M3");
    Bookcons detailM4 = Bookcons("Sherlock Holmes: The Complete Novels and Stories", "1887", "Arthur Conan Doyle", "London", "Ward, Lock & Co.", "M4");
    Bookcons detailM5 = Bookcons("The Da Vinci Code", "2003", "Dan Brown", "New York", "Doubleday", "M5");
    Bookcons detailM6 = Bookcons("Murder on the Orient Express", "1934", "Agatha Christie", "London", "Collins Crime Club", "M6");
    Bookcons detailM7 = Bookcons("The Silence of the Lambs", "1988", "Thomas Harris", "New York", "St. Martin's Press", "M7");
    Bookcons detailM8 = Bookcons("In the Woods", "2007", "Tana French", "New York", "Viking Press", "M8");
    Bookcons detailM9 = Bookcons("The Woman in White", "1859", "Wilkie Collins", "London", "Harper & Brothers", "M9");
    Bookcons detailM10 = Bookcons("Rebecca", "1938", "Daphne du Maurier", "London", "Victor Gollancz", "M10");
    enter.bokingBook();
}
    
Bookcons::Bookcons(string cd, string jud){
    code=cd;
    judul=jud;
    cout<<"\t"<<Bookcons::code<<"\t"<<Bookcons::judul<<endl<<endl;
}

Bookcons::Bookcons(string inputJudul, string inputTahunterbit, string inputPenulis, string inputKotaterbit, string inputPenerbit, string inputKode){
    Title       = inputJudul;
    Tahunterbit = inputTahunterbit;
    Penulis     = inputPenulis;
    kotaterbit  = inputKotaterbit;
    Penerbit    = inputPenerbit;
    Kode        = inputKode;

    cout <<"\n\tTitle\t\t  : "<< Title <<endl;
    cout << "\tPublication Year  : "<<Tahunterbit <<endl;
    cout << "\tWriter\t\t  : "<<Penulis <<endl;
    cout << "\tPublicatioln City : "<<kotaterbit <<endl;
    cout << "\tPublisher\t  : "<<Penerbit <<endl;
    cout << "\tKode\t\t  : " << Kode <<endl;
}

map<string, string> bookMap = {
    // Fantasy
    {"F1", "The Fellowship of the Ring"},
    {"F2", "A Game of Thrones"},
    {"F3", "The Name of the Wind"},
    {"F4", "Mistborn: The Final Empire"},
    {"F5", "The Way of Kings"},
    {"F6", "Eragon"},
    {"F7", "The Lies of Locke Lamora"},
    {"F8", "The Wheel of Time"},
    {"F9", "Harry Potter and the Philosopher's Stone"},
    {"F10", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe"},

    // Romance
    {"R1", "Pride and Prejudice"},
    {"R2", "Me Before You"},
    {"R3", "The Notebook"},
    {"R4", "Twilight"},
    {"R5", "A Walk to Remember"},
    {"R6", "The Fault in Our Stars"},
    {"R7", "Jane Eyre"},
    {"R8", "Anna Karenina"},
    {"R9", "Outlander"},
    {"R10", "The Time Traveler's Wife"},

    // Horror
    {"H1", "It"},
    {"H2", "The Shining"},
    {"H3", "Dracula"},
    {"H4", "The Haunting of Hill House"},
    {"H5", "The Exorcist"},
    {"H6", "Frankenstein"},
    {"H7", "Pet Sematary"},
    {"H8", "Bird Box"},
    {"H9", "The Silent Patient"},
    {"H10", "Coraline"},

    // Biography
    {"B1", "Steve Jobs"},
    {"B2", "Becoming"},
    {"B3", "Long Walk to Freedom"},
    {"B4", "The Diary of a Young Girl"},
    {"B5", "Elon Musk: Tesla, SpaceX, and the Quest for a Fantastic Future"},
    {"B6", "The Wright Brothers"},
    {"B7", "Alexander Hamilton"},
    {"B8", "Churchill: Walking with Destiny"},
    {"B9", "Leonardo da Vinci"},
    {"B10", "Einstein: His Life and Universe"},

    // Ensiklopedia
    {"E1", "National Geographic Kids Encyclopedia"},
    {"E2", "Smithsonian Earth"},
    {"E3", "Britannica All New Kids' Encyclopedia"},
    {"E4", "Science Year by Year"},
    {"E5", "The Animal Book"},
    {"E6", "The History of the World"},
    {"E7", "Universe: The Definitive Visual Guide"},
    {"E8", "Atlas of Human Anatomy"},
    {"E9", "The Big Book of Knowledge"},
    {"E10", "Ocean: The Definitive Visual Guide"},

    // Comedy
    {"C1", "Good Omens"},
    {"C2", "The Hitchhiker's Guide to the Galaxy"},
    {"C3", "Bossypants"},
    {"C4", "Yes Please"},
    {"C5", "Catch-22"},
    {"C6", "Diary of a Wimpy Kid"},
    {"C7", "Hyperbole and a Half"},
    {"C8", "The Secret Diary of Adrian Mole"},
    {"C9", "The World According to Garp"},
    {"C10", "The Rosie Project"},

    // Science Fiction
    {"S1", "Dune"},
    {"S2", "Ender's Game"},
    {"S3", "The Martian"},
    {"S4", "1984"},
    {"S5", "Brave New World"},
    {"S6", "Neuromancer"},
    {"S7", "Snow Crash"},
    {"S8", "Hyperion"},
    {"S9", "Foundation"},
    {"S10", "Fahrenheit 451"},

    // Mystery
    {"M1", "The Girl with the Dragon Tattoo"},
    {"M2", "Gone Girl"},
    {"M3", "Big Little Lies"},
    {"M4", "Sherlock Holmes: The Complete Novels and Stories"},
    {"M5", "The Da Vinci Code"},
    {"M6", "Murder on the Orient Express"},
    {"M7", "The Silence of the Lambs"},
    {"M8", "In the Woods"},
    {"M9", "The Woman in White"},
    {"M10", "Rebecca"}
};

string Book::getBookDetails(string code) {
    if (bookMap.find(code) != bookMap.end()) {
        return bookMap[code];
    } else {
        return "Invalid code";
    }
}