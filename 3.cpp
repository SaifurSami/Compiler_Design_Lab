#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0] == 'C' && s[1] == 'S' && s[2] == 'E')
        cout <<"Computer Science & Engineering, ";
    else if(s[0] == 'I' && s[1] == 'C' && s[2] == 'E')
        cout <<"Information & Communication Engineering, ";
    else if(s[0] == 'E' && s[1] == 'E' && s[2] == 'E')
        cout <<"Electrical & Electronic Engineering, ";
    else if(s[0] == 'M' && s[1] == 'S' && s[2] == 'E')
        cout <<"Material Science & Engineering, ";
    if(s[4]=='1')
        cout << "1st year, ";
    else if(s[4]=='2')
        cout << "2nd year, ";
    else if(s[4]=='3')
        cout << "3rd year, ";
    else if(s[4]=='4')
        cout << "4th year, ";
    if(s[5]=='1')
        cout << "1st semester, ";
    else if(s[5]=='2')
        cout << "2nd semester, ";
    if(s[6]=='4')
        cout << "Compiler Design, ";
    if(s[7]=='1')
        cout << "Theory.";
    else if(s[7]=='2')
        cout << "Lab.";

}
