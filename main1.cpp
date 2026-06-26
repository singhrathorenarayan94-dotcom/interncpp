#include <iostream>
#include "calci.h"
using namespace std;
int main()
{
    calci c1;
    while (true)
    {
        int a, b;
        int ans;
        char ch;
        cout << "Enter first number";
        cin>>a;
        cout<<"Enter second number";
        cin>>b;
        cout<<"Enter operator";
        cin>>ch;
        if(ch == '+')
        {
            ans = c1.add(a, b);
            cout<<"Answer = "<<ans<<endl;
        }
        else if (ch == '-')
        {
            ans = c1.sub(a, b);
            cout<<"answer = "<<ans<<endl;
        }
        else if (ch == '*')
        {
            ans = c1.multi(a, b);
            cout<<"answer "<< ans<<endl;
        }
        else if(ch == '/')
        {
            if(b == 0)
            {
                cout<<"Division by zero not allowed"<<endl;
            }
            else
            {
                ans= c1.div(a, b);
                cout<<"answer = "<<ans<<endl;
            }
        }
        else
        {
            cout<<"INVALID OPERATOR"<<endl;
        }
        break;
    }
    return 0;
}