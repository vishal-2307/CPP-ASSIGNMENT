#include<iostream>
using namespace std;
class hotel
{
    public:
    string tablenum;
    string name;
    int num;
    string order1;
    int quantity1;
    string order2;
    int quantity2;
    int prize1;
    int prize2;
    public:
    void getinfo()
    {
        cout<<"enter a name";
        cin>>name;
        cout<<"enter a contactnum";
        cin>>num;
        cout<<"enter a table num";
        cin>>num;
        cout<<"enter a quantity1";
        cin>>quantity1;
        cout<<"enter a quantity2";
        cin>>quantity2;
        cout<<"enter a order1";
        cin>>order1;
        cout<<"enter a order2";
        cin>>order2;
        cout<<"enter a prize1 for first order";
        cin>>prize1;
        cout<<"enter a prize2 for second order";
        cin>>prize2;

    }
    public:
          void calculatebill()
    {
        int a,b,c,d,e,f,j;
        a=prize1*quantity1;
        b=prize2*quantity2;
        c=a+b;
        if(c>=5000)
        {
            d=0.2*c;
            cout<<"total bill"<<d;
        }
        else
        if(c>=3000)
        {
            e=0.1*c;
            cout<<"total bill"<<e;
        }
        else
        if(c>=1000)
        {
            f=0.05*c;
            cout<<"total bill"<<f;
        }
        else
        cout<<"total bill"<<c;
    }

}; 


int main()
{
    hotel b1;
    b1.getinfo();
    b1.calculatebill();
}