#include <iostream>

using namespace std;

int GCD(int x, int y)
{
          if(y==0){

            return x;}

          else
{
        (GCD(y, x%y));
}
}

int main()
{
    int a, b;
    char choice;
    do
        {
            cout<< "Enter your first number: ";
            cin>> a;
            cout<<endl;

            cout<< "Enter your second number:";
            cin>> b;
            cout<<endl;
            cout<< " GCD is: "<<GCD(a, b)<<endl;
            cout<< "Do you wish to continue(press y):";
            cin>>choice;
            cout<<endl;

        }while(choice=='y'|| choice=='Y');

return 0;}
