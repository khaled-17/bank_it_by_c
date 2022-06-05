#include <iostream>
#include "bankaccount.h"
#include "structure.h"
#include "corpaccount.h"
using namespace std;
int main()
{
    bankaccount b1 = bankaccount(01,9000);
    b1.display();


                      //number,balance,nationalid,holdername
    structure s1= structure(02,6000,9006,"khled ");

    s1.deposite(1000);
    s1.display();

    s1.withdraw(3000);
    s1.display();


corpaccount c1=corpaccount(03,100000,300," khaled  "," iti ",500);
c1.display();
c1.deposite(100000);
c1.display();
c1.withdraw(50000);
c1.display();
    return 0;
}
