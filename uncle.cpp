#include <iostream>
#include <stdlib.h>
using namespace std;

int lenghtOfa(int lenght)
{
    /* l = 2a+b
        a*b -> max
        a*(l-2a)-> max
        maximum in p 
        p = lenght/4
    */

   int a = lenght/4;
  
   
   return a;
}
int lenghtOfb(int lenght,int a)
{
    

    return lenght - 2 * a;
}
void printAnswer(int a, int b)
{
  if (b%2!=0)
  { 
    cout << " Maximum possible surface area = "<<a*b<<endl;
    cout << " Lenght of a="<<a<<"  lenght of b="<<b<<endl;
  }
  else if (b/2 != a)
  {
    cout << " Maximum possible surface area = "<<a*b<<endl;
    cout << " First option lenght of a="<<a<<"  lenght of b="<<b<<endl;
    cout << " Second option lenght of a="<<b/2<<"  lenght of b="<<2*a<<endl;
  }
  else
   { 
    cout << " Maximum possible surface area = "<<a*b<<endl;
    cout << " Lenght of a="<<a<<"  lenght of b="<<b<<endl;
  }
  
}
int main()
{   
  string run;
    
  do{
    cout << "Type RUN to run program " << endl;
    cin >> run ;
    system("clear"); }
  while (run!="RUN");
    
  int lenght;
  do{
    cout << "chose the lenght of the fance(should be integer)" << endl;
    cin>> lenght;}
  while(lenght<=0||lenght >=2147483647);
    
  int a,b;
  a = int(lenghtOfa(lenght));
  b = lenghtOfb(lenght,a);
  printAnswer(a, b);
  cout << "End of the program" << endl;
    
  return 0;
}