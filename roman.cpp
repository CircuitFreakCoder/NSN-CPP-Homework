#include <iostream>
#include <string>
#include <vector>
using namespace std;



string intToRoman(int n) {

std::vector<int> decimal = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
std::vector<string> roman = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
string result ="";

for(unsigned int i=0; i<decimal.size(); i++)
{
    for(;n>=decimal.at(i);)
    {
        n-=decimal.at(i);
        result += roman.at(i);
    }
}

return result;

}

int main()
{

    
    cout<<intToRoman(2051)<<endl;
}
