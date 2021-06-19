#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, strlen;
    cin>>T;
    string str, even_string, odd_string;
    for (int test=1; test<=T; test++)
    {
        cin>>str;
        even_string="";
        odd_string="";
        strlen=str.length();
        for (int i=0; i<strlen; i++)
        {
            if (i%2==0)
                even_string+=str[i];
            else
                odd_string+=str[i];
        }
        cout<<even_string<<" "<<odd_string<<"\n";
    }
    return 0;
}
