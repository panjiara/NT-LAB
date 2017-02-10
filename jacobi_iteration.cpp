#include<bits/stdc++.h>
using namespace std;
double x1=(double)1/2,x2=-(double)1/2,x3=-(double)1/2;
void jacobi( )
{
    double a=x1,b=x2,c=x3;
   x1=(double)1/4*(2-b-c);
   x2=(double)1/5*(-6-2*c-a);
   x3=(double)1/3*(-4-2*b-a);
    cout<<x1<<" " <<x2<<" " <<x3<<" "<<endl;
}


int main()
{

   for(int i=0;i<50;i++)
   {
       jacobi();


  }
  return 0;
}
