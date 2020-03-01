#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,w;
    vector <string> vt;
    vector <int> head;
    freopen("three_address_code_for_block_diagram.txt","r",stdin);
    freopen("block_diagram.txt","w",stdout);
    cout<<"Block diagram is:"<<endl;
    cout<<endl;
    while(getline(cin,s))
    {
        vt.push_back(s);
        stringstream ss(s);
        while(ss>>w)
        {
            if(w=="goto")
            {
                ss>>w;
                //cout<<"****"<<w<<endl;
                int num=0,mul=1;
                for(int i=0; i<w.size(); i++)
                {
                    if(w[i]>='0' && w[i]<='9')
                    {
                        num=num+mul*(w[i]-'0');
                        mul*=10;
                    }
                }
                num--;
                head.push_back(num);
                head.push_back((int)vt.size());
            }
        }
        //cout<<head.size()<<endl;
        int pos=0,cnt=1;
        for(int i=0; i<head.size(); i++)
        {
            cout<<"B"<<cnt++<<":"<<endl;
            for(; pos<vt.size(); pos++)
            {
                cout<<vt[pos]<<endl;
                if(i<head.size()-1)
                {
                    if(pos==head[i])
                        break;
                }
            }
            if(pos==vt.size())
                break;
        }
    }
    cout<<endl;
    cout<<"Flow graph is:"<<endl;
    cout<<endl;
    for(int i=0; i<head.size(); i++)
    {
        if(i!=head.size()-1)
        {
            cout<<"B"<<i+1<<" -> ";
        }
        else
            cout<<"B"<<i+1<<endl;
    }
    cout<<"B2 -> B1"<<endl;
    return 0;
}
