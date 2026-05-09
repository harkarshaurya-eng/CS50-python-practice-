#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

class Book{
public:
string title;
string author;
int ISBN;

};

class Ebook:public Book{


};

class Signin_LoginPage{
    protected:
    int SerialNo;
    string name;
    string branch;
    string year;

    void SignIn()
    {
        cout<<"Enter your name:\n";
        cin>>name;
        users.push_back(name);
        cout<<"Enter the year you study in:\n";
        cin>>year;
        cout<<"Enter your branch:\n";
        cin>>branch;

        


    }
};

class menu{
    public:
    int choice;

    void UserMenu(){
        cout<<"What would like to do?";
        cin>>choice;
        
        if(choice==1)
         cout<<"[1]Display available Ebooks";
        
        if(choice==2)
        cout<<"[2]Display available printed books";
        
        if(choice==3)
        cout<<"[3]Search Book";
        
        if(choice==4)
        cout<<"[4]Add Ebook";
        
        if(choice==5)
        cout<<"[5]Add printed book";
        
        if(choice==6)
        cout<<"[6]exit";

        
        

    }

    void AdminMenu()
    {
        cout<<"Welcome Sir!";
    }


};

class Database:private Signin_LoginPage{
public:
vector<vector<string>> users = {
    {"Serial No.", "Username", "Year", "Branch", "Book Issued"}
};


int serialCounter =1;
    void AddUsers(string name,string year,string branch)
    {

    }
};

int main()
{
    
    return 0;
}