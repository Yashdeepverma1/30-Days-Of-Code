#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    string name;
    long long number;
    map<string,long long> phonebook;
    for (int i=0; i<n; i++)
    {
        cin>>name;
        cin>>number;
        phonebook.insert(make_pair(name,number));
    }
    while(cin>>name)
    {
        if (phonebook.find(name)!=phonebook.end())
            cout<<name<<"="<<phonebook[name]<<"\n";
        else
            cout<<"Not found"<<"\n";
    }
    return 0;
}
