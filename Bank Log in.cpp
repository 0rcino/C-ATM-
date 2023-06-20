#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

class Bank {
  // private variable 
 private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;
 
  // public 
 public: 
    void Register() {
    string reguserID, regpassword, regid, regpass;
        system("cls");
            cout << "\t\t\t\t +---------------------+\n";
      	    cout << "\t\t\t\t |       Register      |\n";
      	    cout << "\t\t\t\t +---------------------+\n";
            cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t\t Enter your Username: ";
             cin >> reguserID;
            cout << "\t\t\t Enter your Password: ";
             cin >> regpassword;
            cout << "\t\t\t +------------------------------+\n";
             
            ofstream f1("records.txt", ios::app);
            
            f1<<reguserID<<' '<<regpassword<<endl;
        system("cls");
            cout << "\n";
            cout << "\t\t\t Registered successfully!\n";
            cout << endl;
            cout << "\n";
            cout << "\t\t\t To return to Choices, press ENTER . . .";
             cin.get();
             cin.get();
        system("cls");
    }
    void Login () {
  	    int count;
        string userID, password, id, pass;
            system ("cls");
                cout << "\t\t\t\t +---------------------+\n";
      	        cout << "\t\t\t\t |    Account Log In   |\n";
      	        cout << "\t\t\t\t +---------------------+\n";
                cout << "\t\t\t +------------------------------+\n";
                cout << "\t\t\t Username: ";
                 cin >> userID;
                cout << "\t\t\t Password: ";
                 cin >> password;
                cout << "\t\t\t +------------------------------+\n"; 

        ifstream input("records.txt");

        while (input>>id>>pass) {
            if(id==userID && pass==password) {
              count=1;
                system("cls");
            }
        }
        input.close();
        if(count==1) {
            system("cls");
                cout << "\n";
		        cout << userID << "\t\t\t Login successful!";
		        cout << endl;
		        cout << "\n";
		        cout << "\t\t\t To return to Choices, press ENTER . . .";
    	         cin.get();
    	         cin.get();
    	    system("cls");
        }
        else {
            system("cls");
                cout << "\n";
		        cout << "\t\t\t Login error! Please check your username and password and try again.\n";
		        cout << endl;
		        cout << "\n";
		        cout << "\t\t\t Press ENTER to continue . . .";
                 cin.get();
                 cin.get();  
            system("cls");
        }
    }
    void Setdata () {
    	system("cls");
    	    cout << "\t\t\t\t +--------------------------------------+\n";
      	    cout << "\t\t\t\t |    Create Bank Account Person Data   |\n";
      	    cout << "\t\t\t\t +--------------------------------------+\n";
    	    cout << endl;
    	    cout << "\t\t\t +------------------------------+\n";
	        cout << "\t\t\t Enter name: ";
             cin.ignore();	
             // To use space in string
            getline(cin, name);
        
            cout << "\t\t\t Enter Account number: ";
             cin >> accnumber; 
            cout << "\t\t\t Enter Account type: ";
             cin >> type;
            cout << "\t\t\t Enter Balance: ";
             cin >> tot;
            cout << "\t\t\t +------------------------------+\n"; 
            cout << "\n";
            cout << "\t\t\t Create Bank account Succesful! \n";
            cout << endl;
            cout << "\t\t\t To return to Choices, press ENTER . . .";
             cin.get();
             cin.get();
        system("cls");
	}
	void showdata () {
		system("cls");
		    cout << "\t\t\t\t +---------------------+\n";
      	    cout << "\t\t\t\t |   Balance Enquiry   |\n";
      	    cout << "\t\t\t\t +---------------------+\n";
		    cout << endl;
		    cout << "\t\t\t +------------------------------+\n";
		    cout << "\t\t\t Name: " << name << endl;
            cout << "\t\t\t Account No: " << accnumber << endl;
            cout << "\t\t\t Account type: " << type << endl;
            cout << "\t\t\t Balance: " << tot << endl;
            cout << "\t\t\t +------------------------------+\n";
            cout << endl;
            cout << "\t\t\t To return to Choices, press ENTER . . . ";
		     cin.get();
		     cin.get();
		system("cls"); 
	}
	void deposit() {
    	system("cls");
            cout << "\t\t\t\t +---------------------+\n";
      	    cout << "\t\t\t\t |       Deposit       |\n";
      	    cout << "\t\t\t\t +---------------------+\n";
    	    cout << endl;
    	    cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t\t Enter amount to be Deposited: ";
              cin >> amount;
            cout << "\t\t\t +------------------------------+\n";
            cout << endl;
            cout << "\t\t\t Deposit Successful! \n";
            cout << endl;
            cout << "\t\t\t To return to Choices, press ENTER . . . \n";
             cin.get();
             cin.get();
        system("cls");
    }
    void showbalance() {
        system("cls");
            cout << "\t\t\t\t +---------------------------+\n";
      	    cout << "\t\t\t\t |        Balance Money      |\n";
      	    cout << "\t\t\t\t +---------------------------+\n";
    	    cout << endl;
            tot = tot + amount;
            cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t\t Total balance is: " << tot << endl;
            cout << "\t\t\t +------------------------------+\n";
            cout << endl;
            cout << "\t\t\t To return to Choices, press ENTER . . . \n";
             cin.get();
             cin.get();
        system("cls");
    }
      void withdrawl() {
      	system("cls");
      	    cout << "\t\t\t\t +---------------------+\n";
      	    cout << "\t\t\t\t |    Withdraw Money   |\n";
      	    cout << "\t\t\t\t +---------------------+\n";
         	cout << endl; 
            int a, avai_balance;
            cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t\t Enter amount to withdraw: ";
             cin >> a;
            avai_balance = tot - a;
            cout << "\t\t\t Available Balance is: " << avai_balance << endl;
			cout << endl; 
			cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t\t To return to Choices, press ENTER . . . \n";
             cin.get();
             cin.get();
        system("cls");
    }
	void aboutus() {
		system("cls");
	    cout << endl;
	        cout << "\t\t\t\t+--------------------------------------+\n"
	             << "\t\t\t\t|               About Us               |\n"
	             << "\t\t\t\t+--------------------------------------+\n" 
	             << "\t\t+----------------------------------------------------------------+\n"
	             << "\t\t|                           Devoloper                            |\n"
	             << "\t\t|                                                                |\n"
	             << "\t\t|                                                                |\n"                                                      
	             << "\t\t|                     Future Software Engineer                   |\n"
	             << "\t\t|                                                                |\n"
	             << "\t\t+----------------------------------------------------------------+\n" << endl;
	        cout << endl;
	         cin.get();
	        cout << " \t\t\t To return to Choices, press ENTER . . .";
             cin.get();
        system("cls");
	}
    void Exit () {
	    cout << endl;
	    cout<< "\n\t\t\t thank you! and God bless!"; 
    }
};

int main () {	
	Bank B;
	   int choice; 
     	while (1) {
            cout << "\t\t\t+-------------------------------------+\n"
			     << "\t\t\t|        Bank Management System       |\n"
			     << "\t\t\t+-------------------------------------+\n"
			     << "\n"
			     << "\t\t\t+-------------------------------------+\n"
                 << "\t\t\t|                WELCOME!             |\n"
                 << "\t\t\t+-------------------------------------+\n"
                 << "\t\t\t+-------------------------------------+\n"
                 << "\t\t\t|  Enter 1 to Register                |\n"
                 << "\t\t\t|  Enter 2 to Log in                  |\n"
                 << "\t\t\t|  Enter 3 to Create Bank Account     |\n"
                 << "\t\t\t|  Enter 4 to Balance Enquiry         |\n"
                 << "\t\t\t|  Enter 5 to Deposit Money           |\n"
                 << "\t\t\t|  Enter 6 to Show Balance            |\n"
                 << "\t\t\t|  Enter 7 to Withdraw                |\n"
                 << "\t\t\t|  Enter 8 to About Us                |\n"
                 << "\t\t\t|  Enter 9 to Exit                    |\n"
                 << "\t\t\t+-------------------------------------+\n\n"
                 << "\t\t\t Enter your choice: ";
             cin >> choice;
            cout << endl;	 
	     // Choices to selection 	
	    switch (choice) {
		
         	case 1: 
	            B.Register();
         	    break;
			case 2: 
			    B.Login();
				break;
			case 3: 
			    B.Setdata(); 
			    break;
			case 4:
			    B.showdata();
				break;
			case 5: 
			    B.deposit();
				break; 
			case 6: 
			    B.showbalance();
			    break;
			case 7: 
			    B.withdrawl();
			    break;
			case 8: 
			    B.aboutus();
			    break;
		    case 9: 
		        B.Exit();
		        exit (1);  
	        default: 
               	cout << "\t\t\t Choice not valid Plss try again. . . \n";
               	cout << "\n";
	            cout << "\t\t\t Press ENTER . . . \n";	
				cout << endl;
				cout << endl; 
	            break; 
	    }   
    }
}