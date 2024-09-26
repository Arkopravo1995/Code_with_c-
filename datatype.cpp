#include<iostream>
using namespace std;

int main()
{
    // int a = 19;
    // int b = 30;
    // int c= a+b;
    // cout << c << endl;

    int age = 25;
    cout << sizeof(age) << endl; // int = 4 bytes;

    char a = 'b';
    cout << sizeof(a) << endl ; // char  = 1 bytes;

    float m =  34.8f;
    cout <<  sizeof(m) << endl ; // float size  = 4bytes;
    
    bool isSafe = true;
    cout << sizeof(isSafe) << endl; // bool size  = 1 bytes;

    double x = 8938.9;
    cout << sizeof(x) << endl; // double size  = 8 bytes;

   
// type casting == converting data one to another;

    double price  = 345.6;    
    int newPrice = (int) price;
    cout << newPrice << endl ;   // casting explicit  = (big to small )

    int age1 = 34;
    double newAge = age1;
    cout << newAge << endl ;
     cout <<sizeof(newAge) << endl ;


    return 0;




}