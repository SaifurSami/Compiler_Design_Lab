#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen ("inputb.txt","r",stdin);
    //freopen ("output2a.txt","w",stdout);
    int vowels = 0,consonants = 0;
    string str;
    getline(cin, str);
    for(int i=0;i<str.size();i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
           ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowels++;
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            consonants++;
    }
    cout << "The Number of vowels are "<<vowels<<endl;
    cout << "The Number of consonants are "<<consonants<<endl;
}
