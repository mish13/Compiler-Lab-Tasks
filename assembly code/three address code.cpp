#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int cnt;
    freopen("three_address_code.txt","r",stdin);
    freopen("assembly_code.txt","w",stdout);
    while(getline(cin,s))
    {
        cnt=0;

        string a="",b="",c="",op="";
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
                    b+=s[i];
                }
                else if(cnt==2)
                {
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
        cout<<"Assembly code for the 3 address code: "<<s<<endl;
        cout<<"(We assume "<<a<<","<<b<<" and "<<c<<" are stored in memory location "<<a<<","<<b<<" and "<<c<<")"<<endl;
        cout<<endl;
        cout<<"LD R1 , "<<a<<endl;
        cout<<"LD R2 , "<<b<<endl;
        cout<<"LD R3 , "<<c<<endl;
        if(op=="+")
        {
            cout<<"ADD R1 , R2 , R3"<<endl;
        }
        else if(op=="-")
        {
            cout<<"SUB R1 , R2 , R3"<<endl;
        }
        else if(op=="*")
        {
            cout<<"MUL R1 , R2 , R3"<<endl;
        }
        else if(op=="/")
        {
            cout<<"DIV R1 , R2 , R3"<<endl;
        }
        cout<<"ST "<<a<<" , R1"<<endl;
    }

    return 0;
}
