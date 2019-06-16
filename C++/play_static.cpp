//https://www.geeksforgeeks.org/static-keyword-cpp/


// #include<iostream> 
// using namespace std; 
  
// class GfG 
// { 
// public: 
//     static int i; 
      
//     GfG() 
//     { 
//         // Do nothing 
//     }; 
// }; 
  
// int GfG::i = 1; 
  
// int main() 
// { 
//     GfG obj, obj2;
//     cout << obj2.i << endl;
//     obj.i = 2;
//     // prints value of i 
//     cout << obj.i <<endl;
//     cout << obj2.i << endl;
// } 

#include<iostream> 
using namespace std; 
  
class GfG 
{ 
    int i; 
    public: 
        GfG() 
        { 
            i = 0; 
            cout << "Inside Constructor\n"; 
        } 
        ~GfG() 
        { 
            cout << "Inside Destructor\n"; 
        }

        static void printMsg() 
        { 
            cout<<"Welcome to GfG!"<<endl; 
        }  
}; 
  
int main() 
{ 
    GfG::printMsg(); 
    int x = 0; 
    if (x==0) 
    { 
        //GfG obj;
        static GfG obj;
        obj.printMsg();
    }
    cout << "End of main\n"; 
} 