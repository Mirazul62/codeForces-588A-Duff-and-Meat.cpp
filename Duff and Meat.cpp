#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[100000],p[100000],min,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>p[i];
     min=p[0];
    for(i=0;i<n;i++)
    {

        if(p[i]<min)
            min=p[i];

        sum+=a[i]*min;
///cout<<min<<endl;

    }
    cout<<sum;



}
