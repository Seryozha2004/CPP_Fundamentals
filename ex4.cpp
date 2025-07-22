/*Write a C++ program that takes an integer as input and determines whether it is a prime or composite number.


Example
Input:
7
Output:
7 is a prime number.
*/
#include <iostream>
using namespace std;
int main()
{
        int a;
        cout<<"Enter natural number: "; cin>>a;
        int k=0;
        if(a<=0) cout<<"The number is not natural"<<endl;
        else {
                for(int i=1;i<=a;i++)
                {
                        if(a%i==0)      k++;
                }
        }
        if (k==2) cout<<a<<" is a prime number."<<endl;
        else cout<<a<<" is a composite number."<<endl;
        return 0;
}
