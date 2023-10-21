/*Write an expression for calculating Distance
parameters are
u -- initial velocity
v -- final velocity
a -- acceleration
just write an expression at line
Distance=
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float u,v,a,dist;
    cout<<"Enter u ,v ,a";
    cin>>u>>v>>a;
    dist = (pow(u,2)-pow(v,2))/2*a;
    cout<<"Distance"<<dist;
    return 0;
}