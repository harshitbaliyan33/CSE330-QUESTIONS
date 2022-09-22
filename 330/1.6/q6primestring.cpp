#include<bits/stdc++.h>

using namespace std;

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL); // THis is fast input output.....

 

int t;

cin>>t;

while(t>0)

{

string s;

        cin>>s;

        vector<int>v;

        unordered_map<char,int>se;

        int i,c=0;

    

        for(i=0;i<s.size();i++)

        {

            se[s[i]]++;

        }

        int d=0,f=0;

        unordered_map<char,int>::iterator it;

        for(it=se.begin();it!=se.end();++it)

        {

            c++;

            v.push_back(it->second);

        }

        int j;

        v.push_back(c);

        for(i=0;i<v.size();i++)

        {

            d=0;

            for(j=2;j<=sqrt(v[i]);j++)

            {

                if(v[i]%j==0)

                d++;

            }

            if(d==0 && v[i]!=1)

            f++;

        }

        if(f==v.size())

        cout<<"YES";

        else

        cout<<"NO";

t--;

cout<<endl;

}

return 0;

}
