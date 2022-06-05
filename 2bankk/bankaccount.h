#include <iostream>
using namespace std;
class bankaccount
{
public :
    int number;
    int balance;
    bankaccount(int _number ,int _balance)
    {
        number=_number;
        balance=_balance;

    }
    void display()
    {
        cout<<"acount number = "<<number
             <<" balance = "<<balance<<" $"<<endl;
             cout <<endl;
    }
};
