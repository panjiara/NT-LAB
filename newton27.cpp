#include<bits/stdc++.h>
using namespace std;
double fxy(double x,double y)
{
    return y+x*x-1-x;

}
double gxy(double x,double y)
{
    return x*x-2*y*y-y;

}
double dfx(double x)
{
   return 2*x-1 ;

}
double dfy(double y)
{
   return 1;

}
double dgx(double x)
{
   return 2*x;

}
double dgy(double y)
{
   return -4*y-1;

}
double det(double x,double y)
{
    return (-8*x*y-4*x+4*y+1);
}
int main()
{
     double X,Y,x1,y1;
     double n1,n2;
    double x0=0.00,y0=0.00;
    for(int i=0;i<10;i++)
    {

     n1=(dgy(y0)*fxy(x0,y0)-dfy(y0)*gxy(x0,y0));
     n2=(-dgx(x0)*fxy(x0,y0)+dfx(x0)*gxy(x0,y0));
     x1=x0-n1/det(x0,y0);
     y1=y0-n2/det(x0,y0);
     x0=x1;
     y0=y1;

    cout<<x0<<" "<<y0<<endl;
    }

    cout<<x0<<" "<<y0<<endl;




 return 0;
}

