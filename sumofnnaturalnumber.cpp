/*Write an expression for finding sum of first n Natural numbers

just write the formula at line

sum=(n*(n+1))/2*/
#include<iostream>
using  namespace std ;
int main()
{   int n;
    float sum;
    cout<<"Enter number";
    cin>> n;
    
    sum = (n*(n+1))/2;
    cout<<"Sum ="<<sum;
    return 0;
}