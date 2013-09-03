#include <iostream>
#include <string>


using namespace std;

//number 1
void toHex(const int intVal, string& strHex);
char to_hex_ch(int hex_val);

void perfectNumber();

int main()
{
    string result;

//    toHex(345, result);
//    toHex(6678, result);
//    toHex(1000, result);

perfectNumber();
    return 0;
}


void toHex(const int intVal, string& strHex)
{
    strHex = "";//clear the output
    int val = intVal;//temporary local variable

    while(val !=0){

        int hex_val = val%16;
        strHex = to_hex_ch(hex_val)+strHex;
        val/=16;

    }
    cout<<strHex<<endl;

}

char to_hex_ch(int hex_val) //utility function for converting each digit to hex
{
    if(hex_val>=0 && hex_val<=9)
        return char(hex_val+'0');
    else
        return char(hex_val-10)+'A';
}


void perfectNumber()
{
    int pcount = 0;
    for(int i=1; pcount < 5; i++)
    {
        int f =0;
        for(int j=1; j<i; j++)
        {
            if(i%j==0)
                f+=j;
        }

        if(i==f) cout<<i<<" is a perfect number "<<++pcount <<endl;
    }


}
