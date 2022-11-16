#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string str;
    freopen ("input.txt","r",stdin);
    freopen ("output1b.txt","w",stdout);
    getline(cin, str);
    cout <<"The Letters are : "<<endl;
    for(i=0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            cout << str[i]<<" ";
    }

    cout <<"\n\nThe Digits are : "<<endl;
    for(i=0;i<str.size();i++){
        if(str[i]>='0'&&str[i]<='9')
            cout << str[i]<<" ";
    }

    cout <<"\n\nOther characters are : "<<endl;
    for(i=0;i<str.size();i++){
        if(str[i]=='.'||str[i]==','||str[i]=='-')
            cout << str[i] <<' ';
    }
    cout << endl;
}
