/*Write a program that will input two integers - N and M. The program should "draw" a rectangle of NxM size using "*", "/", "\" and spaces.


Example:
   Input: 
       6 4
   Output: 
       /****\     
       *      *
       *      *
       \****/
#include <iostream>
using namespace std;
int main()
{
        int m, n;
        cout<<"Enter height (m): "; cin>>m;
        cout<<"Enter width (n): "; cin>>n;
        if(m<2 || n<2) cout<<"Width and height must be at least 2"<<endl;
        else {
                for(int i=0; i<m; i++)
                {
                        for(int j=0; j<n; j++)
                        {
                                //first row
                                if(i==0)
                                {
                                        if(j==0) cout<<'/';
                                        else if(j==n-1) cout<<'\\';
                                        else cout<<'*';
                                }
                                //last row
                                else if(i==m-1)
                                {
                                        if(j==0) cout<<'\\';
                                        else if(j==n-1) cout<<'/';
                                        else cout<<'*';
                                }
                                else {
                                        if(j==0 || j==n-1) cout<<'*';
                                        else cout<<' ';
                                }
                        }
                cout<<endl;
                }
        }
        return 0;
}
