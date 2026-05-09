#pragma once

#include<string>
#include<iostream>
using namespace std;
class Menus{

public:
int choice;
    void UserMenu() {

        cout<<"Welcome";

        cout<<"What would you like to do";
        cin>>choice;
        cout<<"[1]Browse Books";
        cout<<"[2]Browse Ebooks";
        cout<<"[3]Issue Books";
        cout<<"[4]Return Book";
        cout<<"[5]Exit";
        cin>>choice;
        if(choice>5||choice<0)
        {
            cout<<"Invalid choice";
        }

        else if(choice==1)
        {}
        else if(choice==2)
        {}
        else if(choice==3)
        {}
        else if(choice==4)
        {}
        else
        {}
    }
      
    void AdminMenu() {




}
};
