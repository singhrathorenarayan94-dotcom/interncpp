#include<iostream>
using namespace std;
int count(int num ) {
    for (int i=1;i<=num;i++){
        cout<<i<<endl;


    }
    cout<<endl;


}
int main  () {
    int num ;
    cin>>num;
    count(num);
    return 0;
    
}