#include<bits/stdc++.h>

using namespace std;

int main()
{

    set <char> ter,nonter;
    freopen("productions.txt","r",stdin);
    freopen("terminals_non_terminals.txt","w",stdout);
    string s;
    while(cin>>s)
    {
        //cout<<s<<endl;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                ter.insert(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                nonter.insert(s[i]);
            }

        }

    }
    set <char>::iterator it=ter.begin();
    cout<<"The terminals are: "<<endl;
    while(it!=ter.end())
    {
        cout<<*it<<endl;
        it++;
    }
    it=nonter.begin();
    cout<<"The non-terminals are: "<<endl;
    while(it!=nonter.end())
    {
        cout<<*it<<endl;
        it++;
    }

    return 0;
}
