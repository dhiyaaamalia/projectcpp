#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include "History.h"
#include "Rent.h"
#include "Main.h"

using namespace std;

void History::headerHistory() {
    cout << "\t***********************************************************************\n";
    cout << "\t                          S N A P B O O K                              \n";
    cout << "\t***********************************************************************\n";
    cout << "\t                        H  I  S  T  O  R  Y                            \n";
    cout << "\t***********************************************************************\n";
    cout << "\tLogin Page > Main Menu > History \n";
}

void History::displayhistoryRent() {
    Main include;
    system("cls");
    headerHistory();
    cout << "\tYour Rental History:\n\n";

    // get username from currentUser.txt
    string currentUser;
    ifstream session("currentUser.txt");
    if (!session.is_open()) {
        cout << "\n\tError: Cannot find the current user session. Please login first.\n";
        system("pause");
        include.callMenu();
        return;
    }
    getline(session, currentUser);
    session.close();

    // history table
    cout << "\n\tHistory for user: " << currentUser << "\n\n";
    cout << "\t=====================================================================\n";
    cout << "\t|       Book Title        |  Borrowed Date  |  Return Date (7 Days) |\n";
    cout << "\t=====================================================================\n";

    // read file from rentedBook.txt
    string record, username, borrowDate, returnDate;
    bool hasHistory = false;
    ifstream history("rentedBook.txt");
    while (getline(history, record)) {
        stringstream ss(record);
        
        // get history for current user
        ss >> username;
        if (username != currentUser) {
            continue;
        }

        string bookTitle;
        string temp;
        while (ss >> temp) {
            if (temp.find("/") != string::npos) {
                borrowDate = temp;
                ss >> returnDate; 
                break;
            }
            bookTitle += temp + " "; 
        }

        bookTitle = bookTitle.substr(0, bookTitle.length() - 1); 

        // display history
        cout << "\t| " << bookTitle << " | " << borrowDate << " | " << returnDate << " |\n";
        hasHistory = true;
    }
    history.close();

    if (!hasHistory) {
        cout << "\tNo rental history found for user " << currentUser << ".\n";
    }

    cout << "\t=====================================================================\n";
    system("pause");
    include.callMenu();  // back to main menu
}
