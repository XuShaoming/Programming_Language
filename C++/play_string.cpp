#include <iostream>
#include <cstring>

using namespace std;

// int main () {

//    char str1[11] = "Hello";
//    char str2[10] = "World";
//    char str3[10];
//    int  len ;

//    // copy str1 into str3
//    strcpy( str3, str1);
//    cout << "strcpy( str3, str1) : " << str3 << endl;

//    // concatenates str1 and str2
//    strcat( str1, str2);
//    cout << "strcat( str1, str2): " << str1 << endl;

//    // total lenghth of str1 after concatenation
//    len = strlen(str1);
//    cout << "strlen(str1) : " << len << endl;

//    return 0;
// }

/*Using String Class*/

int main () {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}