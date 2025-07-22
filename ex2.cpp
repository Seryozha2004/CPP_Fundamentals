/*Write a C++ program that takes an integer input from the user and calculates the sum of its digits.

Input:
    1234
Output:
    Sum of digits: 10*/
#include <iostream>
using namespace std;
int main()
{
        int a;
        cout<<"Enter positive number: "; cin>>a;
        int sum=0;
        if(a<=0) cout<<"The number is not positive"<<endl;
        else
        {
                while(a)
                {
                        sum+=a%10;
                        a/=10;
                }
                cout<<"Sum of digits: "<<sum<<endl;
        }
        return 0;
}
