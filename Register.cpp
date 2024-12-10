#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "Register.h"
#include "Rent.h"
#include "Loginpage.h"
#include "Main.h"
using namespace std;

void Register::reg(){
    Register regs;
    string regName, regEmail, regPass;
    system("cls");
        cout <<"\t***********************************************************************\n";
        cout <<"\t                           G O - B O O K                               \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\t                      R E G I S T E R   P A G E                        \n";
        cout <<"\t***********************************************************************\n\n";
        cout <<"\tEnter the following details\n";
        cout <<"\tUSERNAME= ";
        cin  >>regName;
        cout <<"\tEMAIL ADDRESS= ";
        cin  >>regEmail;
        cout <<"\tPASSWORD(lowercase only)= ";
        cin  >>regPass;
        ofstream reg("userData.txt",ios::app);
        reg<<regName<<' '<<regPass<<endl;
        system("cls");
        cout <<"\n\tRegistration Sucessful\n";
        cout <<"\tPlease re-Login to acces the main menu\n";
        system("pause");
        regs.login();   
};

void Register::login(){
    Loginpage access;
    Main enter;
    int count = 0;
    string akun, name, pass, u, p;
    system("cls");
        cout <<"\t***********************************************************************\n";
        cout <<"\t                           G O - B O O K                               \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\t                        L O G I N   P A G E                            \n";
        cout <<"\t***********************************************************************\n\n";
        cout <<"\tPlease enter the following details"<<endl;
        cout <<"\tUSERNAME :";
        cin  >>name;
        cout <<"\tPASSWORD :";
        cin  >>pass;
        ifstream input ("userData.txt");
        while(input>>u>>p)
            {
                if(u==name && p==pass)
                {
                    count=1;
                    system("cls");
                    break;
                }
            }
        input.close();

        if(count==1){
            cout <<"\n\tHello "<<name<<"\n\tLOGIN SUCESS";
            cout <<"\n\tWe're glad that you're here.\n\tThanks for logging in\n";
            cin.get();
            cin.get();
            enter.callMenu();
        }
        else{
            cout<<"\t\nLOGIN ERROR \t\nPlease check your username and password\n";
            system("pause");
            access.userpage();
        }
    };

void Register::changepass(){
    Loginpage first;
    Register regis;
    string name, pass;
    bool notfound = 1;
    system("cls");
        cout <<"\t***********************************************************************\n";
        cout <<"\t                           G O - B O O K                               \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\t                   C H A N G E  P A S S W O R D                        \n";
        cout <<"\t***********************************************************************\n\n";
        cout <<"\tPlease enter the following details of the account you want to edit" <<endl;
        cout <<"\tUSERNAME :";
        cin  >>name;
        cout <<"\tPASSWORD (old) :";
        cin  >>pass;

    ifstream readFile;
    readFile.open("userData.txt");
    
    while ( !readFile.eof() && notfound ){
     string n,p;
     readFile >> n >> p;
            if ((n==name) && (p==pass)){
                notfound = 0;
            }
    }
    readFile.close();

    string newPass;
    if (!notfound){
        cout <<"\t\nWe've found your account, " << name <<endl;
        cout <<"\t\nEnter your new password: "  <<endl;
        cin  >> newPass;

        ifstream readFile;
        readFile.open("userData.txt");
        ofstream outFile;
        outFile.open("temp.txt");

        string search = name + " " + pass;
        string readout;
        while (getline(readFile,readout)){
            if (readout == search){
                outFile << name << " " << newPass << endl;
            }
            else {
            outFile << readout << endl;
            }
        }

        readFile.close();
        outFile.close();
        remove("userData.txt");
        rename("temp.txt", "userData.txt");

        cout <<"\tYour password has changed. Please re-login.";
        system("pause");
        system("cls");
        regis.login();

    } 
    else{
        cout <<"\tData not found. Please check your username and password.";
        system("pause");
        system("cls");
        first.userpage();
    }
};

void Register::del(){
    Loginpage access;
    string name, pass;
    bool notfound = 1;
    system("cls");
        cout <<"\t***********************************************************************\n";
        cout <<"\t                           G O - B O O K                               \n";
        cout <<"\t***********************************************************************\n";
        cout <<"\t                    D E L E T E  A C C O U N T                         \n";
        cout <<"\t***********************************************************************\n\n";
        cout <<"\tPlease enter the following details of the account you want to delete" << endl;
        cout <<"\tUSERNAME :";
        cin  >>name;
        cout <<"\tPASSWORD :";
        cin  >>pass;

    ifstream readFile;
    readFile.open("userData.txt");
    
    while ( !readFile.eof() && notfound )
    {
        string n,p;
        readFile >> n >> p;
        if ((n==name) && (p==pass)){
            notfound = 0;
        }
    }
    readFile.close();

    
    if (!notfound){
        ifstream readFile;
        readFile.open("userData.txt");
        ofstream outFile;
        outFile.open("temp.txt");

        string search = name + " " + pass;
        string readout;
        while (getline(readFile,readout))
        {
            if (readout != search){
                outFile << readout << endl;
            }
        }

        readFile.close();
        outFile.close();
        remove("userData.txt");
        rename("temp.txt", "userData.txt");

        cout <<"\tYour account has been deleted.";
        system("pause");
        system("cls");
        access.userpage();

    } 
    
    else {
        
        cout <<"\tData not found. Please check your username and password.";
        system("pause");
        system("cls");
        access.userpage();
    }
};


