#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s;
    cin >> s;
    bool integer,shortint,longint,yes;
    int numberofdigit = 0;
    integer = 0;

    if(s[0]>='i'&& s[0]<='n'||s[0]>='I'&& s[0]<='N')
        integer = 1;
    for(i=1;i<s.size();i++){
        if(s[i]<'a' && s[i]>'z' || s[i]<'A'&&s[i]>'Z'||s[i]<'0'&&s[i]>'9')//Out of range
            integer = 0;
    }
    for(i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            numberofdigit++;
        }
    }
    if(integer == 1)
        cout <<"Integer Variable"<<endl;
    else if(numberofdigit == s.size()&& s.size()<=4)
        cout <<"ShortInt Number"<<endl;
    else if(numberofdigit == s.size()&& s.size()>4)
        cout <<"LongInt Number"<<endl;
    else
        cout <<"Invalid"<<endl;
}

