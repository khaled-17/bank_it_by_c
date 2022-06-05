#include <iostream>
using namespace std ;
class structure : public bankaccount
{
  public :
      string holdername ;
      int nationalid;
     // structure():bankaccount()
      //{
         // holdername="null";
         // nationalid="0";
      //}
      structure(int _number,int _balance,int _nationalid,string _holdername):bankaccount(_number,_balance)
      {
          holdername=_holdername;
          nationalid=_nationalid;
      }
      void deposite (int amt)
      {
         balance+=amt;

      }
      void withdraw (int amt)
      {
         balance-=amt;

      }
      void display()
      {
          bankaccount::display();
          cout<<"  national id  "<<nationalid<<" holder name "<<holdername<<endl;
      }
};
