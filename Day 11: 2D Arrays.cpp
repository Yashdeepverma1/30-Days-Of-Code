#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int max_sum=-100, curr_sum=0;
        
        for (int i=0; i<4; i++)
        {
            for (int j=0; j<4; j++)
            {
                curr_sum=0;
                for (int k=0; k<3; k++)
                {
                    for (int l=0; l<3; l++)
                    {
                        if (k==1 && (l==0 || l==2))
                            curr_sum+=0;
                        else
                            curr_sum+=arr[k+j][l+i];
                    }
                }
                if (curr_sum>max_sum)
                    max_sum=curr_sum;
            }
            
        }
    
    cout<<max_sum;

    return 0;
}
