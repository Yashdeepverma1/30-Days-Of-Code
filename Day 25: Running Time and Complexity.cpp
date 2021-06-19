#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T, n, root;
    bool flag;
    cin >> T;
    for (int test=1; test<=T; test++)
    {
        cin >> n;
        flag = false;
        root = sqrt(n);
        if (n==1)
            flag = true;
        for (int i=2; i<=root; i++)
        {
            if (n % i == 0)
                flag = true;
        }
        if (flag)
            cout << "Not prime\n";
        else
            cout << "Prime\n";
    }
    return 0;
}
