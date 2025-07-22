/*Write a program that will input an integer number and calculate the inverse of the number. Print the output.

Example: 
   Input: 
       163
   Output:
       361*/
#include <iostream>
using namespace std;
int main()
{
        int a, b=0;
        cout<<"Enter number: "; cin>>a;
        while(a)
        {
                int k;
                k=a%10;
                b=10*b+k;
                a/=10;
        }
        cout<<"The invertion is "<<b<<endl;
        return 0;
}
