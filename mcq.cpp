#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class mcq
{
    public:
    string q,o1,o2,o3,o4;
    char answer, uans;
    
    
    int count=0;
    void input()
    {
        cout<<endl;
        count++;
        int i=96;
        cout<<count<<".)enter the question :"<<endl;
        cin.ignore();
        getline(cin,q);
        i++;
        cout<<char(i)<<".enter the first option :";
        getline(cin,o1);
        i++;
        cout<<char(i)<<".enter the second option: ";
       getline(cin,o2);
         i++;
        cout<<char(i)<<".enter the third option: ";
       getline(cin,o3);
         i++;
        cout<<char(i)<<".enter the fourth option: ";
       getline(cin,o4);
        cout<<"enter the question answer option number:";
        cin>>answer;

    }
    void out()
    {
        system("cls");
        int h=96;
        

        cout<<"Q"<<count<<".)"<<q<<endl;
        h++;
        cout<<"\t"<<char(h)<<".) "<<o1<<endl;
         h++;
        cout<<"\t"<<char(h)<<".) "<<o2<<endl;
         h++;
        cout<<"\t"<<char(h)<<".) "<<o3<<endl;
         h++;
        cout<<"\t"<<char(h)<<".) "<<o4<<endl;
        cout<<"ANSWER:-";
        cin>>uans;
        if(answer==uans)
        {
            cout<<"\n \033[32manswer is right"<<endl;
            cout<<"\033[0m";
        }
        else
        {
            cout<<"\n\033[31manswer is wrong"<<endl<<endl;
            cout<<"\033[0m";
        }
        

    }

};
int main()
{
    int n;
    mcq m;
    abd:
    m.input();
    m.out();
    cout<<"IF YOU WANT TO INPUT A NEW QUESTION ,then press 2"<<endl;
        cin>>n;
        if(n==2)
        {
            
          
             system("cls");
            goto abd;
           
            
        }
        else{
            cout<<"DONE";
        }
    return 0;

}