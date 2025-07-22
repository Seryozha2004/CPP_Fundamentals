/*Write a program to input a number and convert it to binary
Example:
    Input: 
        5
    Output: 
        101 */
#include <iostream>
using namespace std;
int main()
{
        int a;
        cout<<"a="; cin>>a;
        if(a==0) {
                cout<<"Binary: 0"<<endl;
                return 0;
        }
        string binary="";
        if(a>0) {
                while(a)
                {
                        binary=char('0'+(a%2))+binary;
                        a/=2;
                }
                cout<<"Binary: "<<binary<<endl;
        }
        if(a<0) {
                while(a)
                {
                        binary=char('1'+(a%2))+binary;
                        a/=2;
                }
                cout<<"Binary: (One's complement) "<<binary<<endl;
        }
        return 0;
}
