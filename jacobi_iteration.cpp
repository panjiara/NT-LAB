#include<bits/stdc++.h>
using namespace std;
double x1=(double)1/2,x2=-(double)1/2,x3=-(double)1/2;
void jacobi( )
{
   x1=(double)1/4*(2-x2-x3);
   x2=(double)1/5*(-6-2*x3-x1);
   x3=(double)1/3*(-4-2*x2-x1);
    cout<<x1<<" " <<x2<<" " <<x3<<" "<<endl;
}


int main()
{
   for(int i=0;i<10;i++)
      jacobi();
 return 0;
}
