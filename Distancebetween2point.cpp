/*Write an Expression for finding Distance between 2 point parameters
x1,y1 -- first point
x2,y2 -- second point
just write formula at line
dist=*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
   float x1,x2,y1,y2;
  
   cout<<"Enter values of (x1,y1)";
   cin>>x1>>y1;
   cout<<"("<<x1<<","<<y1<<")"<<endl;
   cout<<"Enter values of (x2,y2)"<<endl;
   cin>>x2>>y2;
   cout<<"("<<x2<<","<<y2<<")"<<endl;
   float distance;
   distance = sqrt(pow((x2-x1),2))+(pow((y2-y1),2));
   cout<<"distance="<<distance;
  
    return 0;
}

