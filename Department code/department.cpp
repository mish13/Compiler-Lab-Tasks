#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("dept.txt","r",stdin);
    freopen("dept_out.txt","w",stdout);
    string s,word;
    map <string,int> mp;
    mp["CSE"]=1;
    mp["EEE"]=1;
    mp["SWE"]=1;
    mp["PHY"]=1;
    mp["MAT"]=1;
    mp["GEB"]=1;
    mp["STA"]=1;
    mp["SOC"]=1;
    mp["BMB"]=1;
    mp["IPE"]=1;
    mp["CEE"]=1;
    mp["CEP"]=1;
    mp["ENG"]=1;
    mp["BAN"]=1;
    mp["ENG"]=1;
    mp["BBA"]=1;
    mp["ECO"]=1;
    mp["CHE"]=1;
    mp["FET"]=1;
    while(getline(cin,s))
    {
        stringstream ss(s);
        while(ss>>word)
        {
            //cout<<"*"<<word<<endl;
            if(mp.find(word)!=mp.end())
            {
                cout<<word<<endl;
            }
        }
    }

    return 0;
}
