#include<bits/stdc++.h>

using namespace std;

int main()

{

    long long int max=1000000;

    long long int i,j,a[max+1];

    a[0]=a[1]=0;

    for(i=2;i<=max;i++)

    a[i]=1;

    for(i=2;i*i<=max;i++)

    {

        if(a[i]==1)

        {

            for(j=i*i;j<=max;j+=i)

            a[j]=0;

        }

    }

    long long int t,n;

    cin>>t;

    while(t--)

    {

        cin>>n;

        int c=0;

        for(i=2;i<n;i++)

        {

            if(a[i]==1&&a[n-i]==1)

            {

                c=1;

                break;

            }

        }

        if(c==1)

        cout<<"Deepa"<<"\n";

        else

        cout<<"Arjit"<<"\n";

    }

    return 0;

}
