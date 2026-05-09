#include<iostream>
using namespace std;


class Salary{
public:
    //poen salary
    void calculateSalary(int HI,int BS)
    {
        cout<<"Enter BS and HI:\n";
        cin>>BS>>HI;
    }
//for junior engineer-Health Insurance(HI),Housing allowance(HI),Base salary(BS)
    void calculateSalary(int HI,int HA,int BS)
    {
        cout<<"Enter BS, HA and HI:\n";
        cin>>BS>>HA>>HI;
    }
//for senior engineer-Health Insurance(HI),Housing allowance(HI),Base salary(BS),Stock Options(SO)
    void calculateSalary(int HI,int HA,int BS,int SO)
    {
        cout<<"Enter BS, HA, SO and HI:\n";
        cin>>BS>>HA>>SO>>HI;
    }

};
int main(){
    int choice;
    int sum;
cout<<"Which salary would you like to calculate?";
cout<<"[1]Poen\n";
cout<<"[2]Junior Developer\n";
cout<<"[3]Senior Developer\n";
cin>>choice;
Salary S;
if(choice<0||choice>3)
{
    cout<<"Invalid input!";
}
else if(choice==1)
{
    int HI, BS;
    cout<<"Enter BS and HI:\n";
    cin>>BS>>HI;
    S.calculateSalary(HI, BS);
    sum=BS+HI;
    cout<<"The salary is:"<<sum;
}
else if(choice==2)
{
    int HI, BS, HA;
    cout<<"Enter BS, HA and HI:\n";
    cin>>BS>>HA>>HI;
    S.calculateSalary(HI, HA, BS);
    sum=BS+HI+HA;
    cout<<"The salary is:"<<sum;
}

else if(choice==3)
{
    int HI, BS, HA, SO;
    cout<<"Enter BS, HA, SO and HI:\n";
    cin>>BS>>HA>>SO>>HI;
    S.calculateSalary(HI, HA, BS, SO);
    sum=BS+HI+HA+SO;
    cout<<"The salary is:"<<sum;

}

      
    return 0;
}