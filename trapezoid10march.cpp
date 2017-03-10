#include<bits/stdc++.h>
using namespace std;

double trapezoid(double x1)
{
 return exp(pow(x1,2));
}
int main()
{
    int n;
    cin>>n;
  double v=0;
double d=(double)1/n;
double sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+(double)1/2*d*(trapezoid(v+d)+trapezoid(v));
    v=v+d;
}

  cout<<sum<<endl;

    return 0;
}
