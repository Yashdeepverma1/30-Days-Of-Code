#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, K, max, result;
    cin >> T;
    for (int test=1; test<=T; test++)
    {
        cin >> N >> K;
        max = 0;
        for (int i=1; i<=N; i++)
        {
            for (int j=1; j<i; j++)
            {
                result = j&i;
                if (result >= max && result < K)
                    max = result;
            }
        }
        cout << max << "\n";
    }
    return 0;
}
