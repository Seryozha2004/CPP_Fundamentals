/*Write a C++ program that asks the user to enter a positive integer, and then prints the factorial of that number.

Example
Input:
    5
Output:
    Factorial of 5 is 120*/
#include <iostream>
using namespace std;
int main()
{
        int a, factorial;
        cout<<"Enter positive number: a="; cin>>a;
        if (a<0) cout<<"The number is not positive"<<endl;
        else {
                for (int i=1; i<=a; ++i)
                {
                        factorial*=i;
                }
                cout<<"The factorial of "<<a<<" is "<<factorial<<endl;
        }
        return 0;
}

