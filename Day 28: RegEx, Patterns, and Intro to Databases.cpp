#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<string> names;
    
    string name, email;
    regex r(".+@gmail\\.com$");
    for (int i=0; i<N; i++)
    {
        cin >> name >> email;
        if (regex_match(email,r))
            names.push_back(name);
    }
    
    sort(names.begin(), names.end());
    int s = names.size();
    
    for (int i=0; i<s; i++)
        cout << names[i]<<"\n";
    
    return 0;
}
