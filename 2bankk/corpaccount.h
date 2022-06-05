#include<iostream>
using namespace std;

class corpaccount: public structure
{
  public:
      string corporatename;
      int registernumber;
      corpaccount(int _number,int _balance,int _nationalid,string _holdername,string _corp,int _reg)
      :structure(_number,_balance,_nationalid,_holdername)
      {
         corporatename=_corp;
          registernumber=_reg;
      }
       void deposite (int amt)
      {
         balance+=amt;

      }
      void withdraw (int amt)
      {
         balance-=amt;

      }
      void display ()
      {
          structure::display();
          cout<<" Corporate name  = "<<corporatename<<" registernumber = "<<registernumber<<endl;
      }

};
