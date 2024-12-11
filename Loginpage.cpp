#include <iostream> 
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include "Register.h"
#include "Loginpage.h"

using namespace std;

void Loginpage::headerLoginpage() {   
    cout <<"\t***********************************************************************\n";
    cout <<"\t                           S N A P B O O K                             \n";
    cout <<"\t***********************************************************************\n";
    cout <<"\t                 W E L C O M E  T O  S N A P B O O K                   \n";
    cout <<"\t***********************************************************************\n\n";
}

void Loginpage::userpage() {
    Register access;
    Loginpage enter;
    int akun;
    system("cls");
    headerLoginpage();
    cout <<"\t1. Login\n \t2. Register\n \t3. Change Password\n \t4. Delete Account\n \t5. Exit App\n";
    cout <<"\tEnter the choice number : ";
    cin >> akun;

    switch (akun) {
        case 1:
            access.login();
            break;
        case 2:
            access.reg();
            break;
        case 3:
            access.changepass();
            break;
        case 4:
            access.del();
            break;
        case 5: {
            ofstream session("currentUser.txt", ios::trunc);
            session.close();
            exit(0);
            break;
        }
        default:
            cout << "\tYou entered the wrong number, please re-enter the right number\n";
            system("pause");
            userpage(); 
            break;
    }
}