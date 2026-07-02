#include <iostream>
#include <limits>
#include "calci.h"

using namespace std;

int main()
{
    calci c1;
    while (true) {
        double a, b;
        double ans;
        char ch;
        cout << "Enter first number: ";
        while (!(cin >> a)) {
            cout << "Invalid input! Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout<<"Enter operator (+, -, *, /): ";
        cin>>ch;
        cout<<"Enter second number: ";
        while (!(cin >> b)) {
            cout<<"Invalid input! Please enter a valid number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (ch == '+') {
            ans =c1.add(a, b);
            cout << "Answer = " << ans << endl;
        }
        else if (ch == '-') {
            ans=c1.sub(a, b);
            cout<<"Answer = "<<ans<<endl;
        }
        else if (ch == '*') {
            ans=c1.multi(a, b);
            cout<<"Answer="<<ans<<endl;
        }
        else if (ch == '/') {
            if (b == 0)
            {
                cout<<"cannot divide by 0"<<endl;
            }
            else
            {
                ans =c1.div(a, b);
                cout<<"Answer="<<ans<<endl;
            }
        }
        else
        {
            cout<<"Invalid operator!"<<endl;
        }
        break;
    }
    return 0;
}