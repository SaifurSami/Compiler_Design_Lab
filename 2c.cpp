#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen ("inputb.txt","r",stdin);
    int i;
    string str,temp;
    getline(cin, str);
    vector<string>words,vowels,consonants;
    for(i=0;i<str.size();i++){
        if(str[i]==' '){
            words.push_back(temp);
            temp.clear();
        }
        else{
            temp+=str[i];
        }
    }
    words.push_back(temp);
    for(i=0;i<words.size();i++){
        if(words[i][0] =='A'||words[i][0] =='E'||words[i][0] =='I'||words[i][0] =='O'||words[i][0] =='U'
        ||words[i][0] =='a'||words[i][0] =='e'||words[i][0] =='i'||words[i][0] =='o'||words[i][0] =='u')
            vowels.push_back(words[i]);
        else if(words[i][0]>='a'&&words[i][0]<='z'||words[i][0]>='A'&&words[i][0]<='Z')
            consonants.push_back(words[i]);
    }
    cout <<"The string which all the starting letter of words are vowel : ";
    for(i=0;i<vowels.size();i++)
        cout << vowels[i] << " ";
    cout << endl;
    cout <<"The string which all the starting letter of words are consonant : ";
    for(i=0;i<consonants.size();i++)
        cout << consonants[i] << " ";
    cout << endl;
}
