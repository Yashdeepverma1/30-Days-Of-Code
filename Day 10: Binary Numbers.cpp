#include <bits/stdc++.h>

using namespace std;

int  count_max_1s(int n)
{
    int curr_count=0, max_count=0;
    while(n>=1)
    {
    if (n%2==1)
        curr_count++;
    else
        curr_count=0;
    if (curr_count>max_count)
        max_count=curr_count;
    n/=2;
    }
    return max_count;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout<<count_max_1s(n);

    
    return 0;
}
