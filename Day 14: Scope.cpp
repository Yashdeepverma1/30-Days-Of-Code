#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
  private:
  vector<int> elements;
  
  public:
  int maximumDifference;
  // Add your code here
    Difference(vector<int> arr)
    {
        elements = arr;
    }

    void computeDifference()
    {
        maximumDifference=0;
        int currDiff;
        int N=elements.size();
        for (int i=0; i<N; i++)
        {
            for (int j=i+1; j<N; j++)
            {
                currDiff = abs(elements[i]-elements[j]);
                if (currDiff > maximumDifference)
                    maximumDifference = currDiff;
            }
        }
    }
}; // end of difference class

int main()
{
  int N;
  cin >> N;
  
  vector<int> a;
  
  for (int i = 0 ; i < N ; i++)
  {
    int e;
    cin >> e;
    
    a.push_back(e);
  }
  
  Difference d(a);
  
  d.computeDifference();

  cout << d.maximumDifference;
  
  return 0;
}
