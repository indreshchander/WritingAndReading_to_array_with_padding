#include<iostream>

using namespace std;

typedef struct structc_tag
{
   char        c;
   double      d;
   int         s;
} structc_t;

int main()
{
 char array[2000] = {0};
 
 structc_t abc;
 abc.c = 'x';
 abc.d = 100.32;
 abc.s = 10;

 //Writing to array with padding
 memcpy(array, &abc, sizeof(abc));

 
 //Reading to array with padding
 structc_t xyz;
 memcpy(&xyz, array, sizeof(abc)); 
 
 cout << "char:" << xyz.c << ", double:" << xyz.d << ", int:" << xyz.s << endl; 

 return 1;
}
