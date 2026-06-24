#include<iostream>
using namespace std;
class calci {
    public :
    int add(int a , int b){
        return a + b;
    }
    int sub(int a , int b){
        return a - b;

    }
    int multi(int a , int b){
        return a*b;

    }
    int div(int a , int b){
        return a/b;

    }
};

int main () {
    // int ans;
    // //cout<<"enter 1 number : "<<a<<endl;
    // //cout<<"enter 2 number : "<<b<<endl;
    calci c1;
    // c1.add(2,3);
    // ans = c1.add(2,3);
    // cout<<ans<<endl;
    while(true) {
        int a,b;
        int ans;
        char ch;
        
        cin>>a;
        cin>>b;
        cin>>ch;
        if (ch == '+') {
            ans = c1.add(a,b);
            cout<<ans<<endl;
            break ;
        }
        else if (ch == '-') {
            ans = c1.sub(a,b);
            cout<<ans<<endl;
            break ;

        }
        else if (ch == '*') {
            ans = c1.multi(a,b);
            cout<<ans<<endl;
            break ;
        }
        else if (ch == '/') {
            ans = c1.div(a,b);
            cout<<ans<<endl;
            break ;

        }
        else {
            cout<<"INVALID OPERATOR";
            break ;
        }

    }
    return 0;
}
