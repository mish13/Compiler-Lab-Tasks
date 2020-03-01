#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> opr,aa,bb,cc;
    string s,w;
    freopen("three_address_code_for_quadruples_and_triples.txt","r",stdin);
    freopen("quadruples_and_triples.txt","w",stdout);
    cout<<"Quadruples are:"<<endl;
    cout<<endl;
    cout<<"Op \t arg1 \t arg2 \t res"<<endl;
    cout<<endl;
    while(getline(cin,s))
    {

        string a="",b="",c="",op="";
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(!(s[i]==' '||s[i]=='+' || s[i]=='='||s[i]=='-'||s[i]=='*'||s[i]=='/'))
            {
                if(cnt==0)
                {
                    a+=s[i];
                }
                else if(cnt==1)
                {
                    if(s[i]!=';')
                    b+=s[i];
                }
                else if(cnt==2)
                {
                    if(s[i]!=';')
                    c+=s[i];
                }
            }
            else
            {
                if(s[i]=='=')
                {
                    cnt=1;
                }
                else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                {
                    op+=s[i];
                    cnt=2;
                }
            }
        }
        if(op=="")
        {
            op+='=';
            c+=' ';
        }
        cout<<op<<" \t "<<b<<" \t "<<c<<" \t "<<a<<endl;
        opr.push_back(op);
        aa.push_back(a);
        bb.push_back(b);
        cc.push_back(c);
    }
    cout<<endl;
    cout<<"The triples are:"<<endl;
    cout<<endl;
    cout<<"Op \t arg1 \t arg2"<<endl;
    cout<<endl;
    for(int i=0;i<opr.size();i++)
    {
        cout<<opr[i]<<" \t ";
        int red=0,n=0,mul=1;
        for(int j=0;j<bb[i].size();j++)
        {
            if(bb[i][j]>='0' && bb[i][j]<='9')
            {
                n=n+mul*(bb[i][j]-'0');
                mul*=10;
                red=1;
            }
        }
        if(red==0)
        {
            cout<<bb[i]<<" \t ";
        }
        else
        {
            cout<<"("<<n-1<<") \t ";
        }
        red=0,n=0,mul=1;
        for(int j=0;j<cc[i].size();j++)
        {
            if(cc[i][j]>='0' && cc[i][j]<='9')
            {
                n=n+mul*(cc[i][j]-'0');
                mul*=10;
                red=1;
            }
        }
        if(red==0)
        {
            cout<<cc[i]<<endl;
        }
        else
        {
            cout<<"("<<n-1<<")"<<endl;
        }
    }
}
