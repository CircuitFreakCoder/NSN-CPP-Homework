#include <iostream>
#include <fstream>
#include <string>
#include <vector>

 using namespace std;

 int main()
 {
     ifstream myFile;
     myFile.open("bible.txt");
      vector<int> counts(26,0);

     if (myFile.is_open())
     {
       char ch;
        cout<<"Open file\n";

       while(myFile.good())
       {
           ch = myFile.get();

           if(ch>='a' && ch<='z')
                ch -= ('a'-'A');

           if(ch>='A' && ch<='Z')
           {
               for(unsigned int i=0; i<counts.size(); i++)
               {
                   if(ch==char('A'+i))
                      (counts[i])++;
               }
           }
       }


       myFile.close();
     }

     for(unsigned int i=0; i<counts.size();i++)
        cout<<char('A'+i)<<" : "<<counts[i]<<endl;

     return 0;
 }
