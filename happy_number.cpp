#include <iostream>

using namespace std;

int digitSquared(int n);
bool is_happyNumber(int n);
void printHappyNumber(int n);

int main()
{
    printHappyNumber(1000);

    return 0;
}


int digitSquared(int n)
{
    int sum = 0;
    while(n!=0)
    {
        int digit = n%10;
        sum += digit*digit;
        n/=10;
    }
    return sum;
}

bool is_happyNumber(int n)
{

        int temp = digitSquared(n);

        while(n != temp)
        {
            n = digitSquared(n);
            temp = digitSquared(digitSquared(temp));
        }
         return ( n==1)? true:false;
}


void printHappyNumber(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(is_happyNumber(i))
            cout<<i<<" is a happy number"<<endl;
    }
}
