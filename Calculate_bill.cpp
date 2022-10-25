/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;

class Bill
{
    int unit;
    float totalbill;
    public:
       void get(int n)
       {
         unit =n;
       }
       void calculateBill()
       {
        if(unit<=100)
        {
            totalbill=unit*1.20f;
        }
        else if(unit>100&&unit<=200)
        {
            totalbill=(unit-100)*2+100*1.20f;
        }
        else{
            totalbill=(unit-200)*3+100*2+100*1.20f;
        }
        cout<<"Toatal Electricity bill is "<<totalbill<<endl;
       }
};
int main()
{
    Bill b1,b2,b3;
    b1.get(90);
    b2.get(120);
    b3.get(203);
    b1.calculateBill();
    b2.calculateBill();
    b3.calculateBill();
}
