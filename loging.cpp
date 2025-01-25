#include <iostream>
using namespace std;
struct Date 
{
    int day;
    int month;
    int year;
};

class User
{
    private:
	string name; 
	string email; 
	string phone; 
	struct Date dob; 
	string city;
	string password;
	
	public:
	 void registration () 
	 { 
	    cout << "Welcome to Registration -- Social.com\n";
	    
		cout << "Enter full name: ";
		cin >> this->name ;
		
		cout << "Enter email: ";
		cin >> this->email;
		
		cout << "Enter Phone number: ";
		cin >> this->phone;
		
		cout << "Enter Date of Birth\n";
		cout << "Day: ";
		cin >> this->dob.day;
		cout << "Month: ";
		cin >> this->dob.month;
		cout << "Year: ";
		cin >> this->dob.year;
		
		
		cout << "Enter your city: ";
		cin >> this->city;
		
		bool repeat = true;
		string confirmPassword;
		while(repeat) 
		
		{
			cout << "Enter your password: ";
			cin >> this->password;
			cout << "Enter confirm password: ";
			cin >> confirmPassword;
			if (confirmPassword == this->password)
			{
				repeat = false;
			}
			else 
			{
				 cout << "Incorrect Password\n";
			}
		}
		
		cout << "\nRegistration complete successfully\n\n";
	}
	
	void login ()
	{
	    cout << "\nLogin to Registration -- Social.com\n\n";
	    string email, pwd;
	    bool repeat = true;
	    while(repeat){
	        cout << "Enter email: ";
	        cin >> email;
	        if(email != this->email)
			{
	            cout << "Incorrect email\n";
	            continue;
	        }
	        cout << "Password: ";
	        cin >> pwd;
	        if(pwd != this->password)
			{
	            cout << "Incorrect password\n";
	            continue;
	        }
	        cout << "\nLogin successfull !!\n";
	        repeat = false;
	    }
	    
	}
    
};



int main() 
{
    
    User u1;
    u1.registration();
    u1.login();

    return 0;
}