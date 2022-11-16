#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen ("inputb.txt","r",stdin);
    //freopen ("output2b.txt","w",stdout);
    int i;
    string str;
    char ch;
    getline(cin, str);
    int arr[26]={0};
    for(i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
            arr[str[i]-'A'] = 1;

        else if(str[i]>='a' && str[i]<='z')
            arr[str[i]-'a'] = 1;
    }
    cout <<"The Exixting Consonants are : ";
    for(i=0;i<26;i++)
        if(i!=0 && i!=4 && i!=8 && i!=14 && i!=20 && arr[i]==1){
            ch = 'a'+i;
            cout <<ch<<" ";
        }
    cout << endl;
    cout <<"The Exixting vowels are : ";
    for(i=0;i<26;i++)
        if(i==0 || i==4 || i==8 || i==14 || i==20 && arr[i]==1){
            ch = 'a'+i;
            cout <<ch<<" ";
        }
    cout << endl;
}
