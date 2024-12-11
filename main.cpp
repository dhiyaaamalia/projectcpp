#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string.h>
#include "Main.h"
#include "Rent.h"
#include "History.h"
#include "Loginpage.h"
#include <fstream>

using namespace std;

void Main::headerMain()
{
   cout <<"\t***********************************************************************\n";
   cout <<"\t                          S N A P B O O K                              \n";
   cout <<"\t***********************************************************************\n";
   cout <<"\t                         M A I N   M E N U                             \n";
   cout <<"\t***********************************************************************\n\n";
   cout <<"\tLogin Page > Main Menu\n\n";
}

void Main::callMenu(){
   Loginpage include;
   Rent access;
   History enter;
   int navigate;
   system("cls"); 
   headerMain();
      cout <<"\tNavigate:\n \t1. Rent Book\n \t2. History (shown the book you've been rented)\n \t3. Exit from Main Menu\n";
      cout <<"\tEnter the choice number= ";
      cin  >>navigate;      
      switch (navigate){
         case 1:
            access.allRent();
            break;
         case 2:
            enter.displayhistoryRent();
            break;
         case 3: {
            ofstream session("currentUser.txt", ios::trunc);
            if (!session.is_open()) {
                cout << "\tError: Unable to clear user session.\n";
                system("pause");
                callMenu();
                return;
            }
            session.close();
            include.userpage();
            break;
         }
         default:
            cout<<"\tYou enter the wrong number, please re-enter the right number\n";
            system("pause");
            callMenu();
            break;
      }
} 