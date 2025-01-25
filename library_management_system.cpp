#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

class employ 
{
    private:
	string name; 
	string job;
	string password;
	int roll;
	string dep_name;
	int dep_no;
	string book_name;
	int book_no;
	string book_publi_name;
	struct Date iss;

	public:
	void library () 
   { 
	    cout << "Welcome to library\n";
	    
		cout << "Enter your name: ";
		cin >> name ;
		
		bool repeat = true;
		string confirmPassword;
		while(repeat) 
	   {
			cout << "Enter your job: ";
			cin >> job;
			
			if (job == "librarian")
			{
				repeat=false;
				cout << "Enter your password: ";
			cin >> password;
			cout << "Enter confirm password: ";
			cin >> confirmPassword;
			if (confirmPassword == password){
				repeat = false;
			}
			else {
				 cout << "Incorrect Password\n";
			}
			}
			else {
				 cout << "Incorrect person\n";
			}
		}
		cout << "login successfully:\n";
	}

	
	void login ()
	{
	    cout << "loging in library of rn college:"<<endl;
	    string job, pwd;
	    bool repeat = true;
	    while(repeat){
	        cout << "Enter job: ";
	        cin >> job;
	        cout << "Password: ";
	        cin >> pwd;
	        if(pwd != password)
			{
	            cout << "Incorrect password\n";
	            
	        }
	        cout << "\nLogin successfull !!\n";
	        repeat = false;
	    }
	    
	}
    void student()
	{
		cout<<"student details:"<<endl;
		int roll,dep_no;
		cout<<"enter the name of student:"<<endl;
		cin>>name;
		cout<<"enter roll no";
		cin>>roll;
		cout<<"enter department name:"<<endl;
		cin>>dep_name;
		cout<<"enter department number:"<<endl;
		cin>>dep_no;
		cout<<"please provide the book"<<endl;
		cin>>book_name;
		cout<<"enter publication  name:"<<endl;
	    cin>>book_publi_name;
	}
	void book()
	{
		cout<<"enter book details:"<<endl;
		cout<<"enter the name of book"<<endl;
		cin>>book_name;
		cout<<"enter book no";
		cin>>book_no;
		
		bool repeat = true;
		while(repeat)
		{
			cout<<"enter publication  name:"<<endl;
		    cin>>book_publi_name;
			if(book_publi_name==book_publi_name)
			{
				 cout << "book is not  avaliable\n";
	            
	        }
			else
			{
	        cout << "\nbook is avaliable\n";
	        repeat = false;
			}
			cout<<"provide the book:"<<endl;
			cout<<"enter the book detail in database:"<<endl;
			cout<<"enter the name of book:"<<endl;
			cin>>book_name;
			cout<<"enter book no:";
			cin>>book_no;
			cout<<"enter the issue date:"<<endl;
			cout << "Day: ";
			cin >> iss.day;
			cout << "Month: ";
			cin >> iss.month;
			cout << "Year: ";
			cin >> iss.year;




		}

	}

};
int main() 
{
   employ e;
    e.library();
    e.login();
	e.student();
	e.book();
    return 0;
}