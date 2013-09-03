#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void Sieve(int n)
{
    vector<bool> A;

    for(int i=0; i<=n; i++)
    {
        A.push_back(false);
    }

    for(int i=2; i<=(int)(sqrt(n)); ++i )
    {
        if(!A[i])
        {
            int multiple = i*2;
            while(multiple <= n)
            {
                A[multiple] = true;
                multiple += i;

            }
        }

    }

    for(int i = 2; i<= n; ++i)
        if(!A[i])
            cout<<i<<" ";

}


int main()
{
    Sieve(200);
    return 0;
}
