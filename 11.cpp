#include<bits/stdc++.h>
using namespace std;
 
//char gr[][10] = {"E+E","E-E","E*E","E/E","(E)","a","b","c"};
string grammar[] = {"E+E","E-E","E*E","E/E","(E)","a","b","c"};
 
int Operator(char ch)
{
	if(ch == '+')
		return 0;
	else if(ch == '-')
		return 1;
	else if(ch == '*')
		return 2;
	else if(ch == '/')
		return 3;
	else if(ch == '(')
		return 4;
	else
		return -1;
}
 
int main()
{
    string str, res;
 
    cin>>str;
    int len = str.size(), index;
 
    res+='E';
    cout<<res<<endl;
 
    //right most derivation
 
    for(int i = 0 ; i < len ; i++)
    {
        index = Operator(str[i]);
        if(index != -1){
            res.erase(res.begin()+res.size()-1);
            res += grammar[index];
            cout<<res<<endl;
        }
    }
 
    for(int i = res.size()  - 1 ; i >= 0; i--)
    {
        if(res[i] == 'E')
        {
            res[i] = str[i];
            cout<<res<<endl;
        }
    }
 
    //left most derivation [j=0, +2, print together, EF_j_pos]
 
    return 0;
}
