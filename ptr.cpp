// #include<iostream>
// using namespace std;
// int main () {
//     int a = 10;
//     int* ptr = &a;
//     int** ptr1 = &ptr;
//     cout<< ptr<<endl;
//     cout<< &ptr<<endl;
//     cout<< ptr1<<endl;
//     cout<<&a<<endl;

  //// de refrencing operator - yeh address ki value ko edta hai 
        // int* parptr = &ptr;
        // cout<<*(parptr)<<endl;
        // cout<<ptr<<endl;
//     return 0;
// }

 



// NULL POINTER - Kisi bhi valid locationb ko access nhi krta '


// #include<iostream>
// using namespace std ;
// void change(int* ptr) {
//   //  *ptr = 20;  // for pass by reference using pointer
//   //  int a= 20;  // for pass by value using pointer

// }
// int main () {
//     int a = 10;
//     change(&a);
//     cout<<"inside main "<<a<<endl;
//     return 0;


// }





// #include<iostream>
// using namespace std ;
// void change(int &b) { //  for pass bby reference using alias ( alias matlab 1 bar ko dusre var ki value assign kr sakte hai function mai dusra var likh k aur uske aage & laga k )
//     b = 20;
// }
// int main () {
//     int a = 10;
//     change(a);
//     cout<<"inside main "<<a<<endl;
//     return 0;


// }
 

// #include<iostream>
// usig namespace std;
// int main () {
//     int arr[] = {1,2,3,4,5};
//     int a = 15, b=20 ;
//     int* ptr =&a;
//     ptr = &b;

//     return 0;

// }



// #include<iostream>
// using namespace std;
// int main () {
//     int arr[] ={1,2,3,4,5};
//     cout<<*arr<<endl;
//     cout<<*(arr+1)<<endl;   // yaha p +1 krne p hame next value milegi arr ki and *(arr+1) se address mai byyes honge 4 isiliye yeh next number ko print krega .
//     return 0;

// }







