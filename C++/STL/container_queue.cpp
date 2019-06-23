//https://www.geeksforgeeks.org/queue-cpp-stl/

// CPP code to illustrate  
// Queue in Standard Template Library (STL) 
#include <iostream> 
#include <queue> 
  
using namespace std; 

/*  
void showq(queue <int> gq) 
{   
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << ' ' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
}
*/

void showq(queue <int> gq) 
{   
    while (!gq.empty()) 
    { 
        cout << ' ' << gq.front(); 
        gq.pop(); 
    } 
    cout << '\n'; 
}
  
int main() 
{ 
    queue <int> gquiz; 
    gquiz.push(10); 
    gquiz.push(20); 
    gquiz.push(30); 
  
    cout << "The queue gquiz is : "; 
    showq(gquiz); 
  
    cout << "\ngquiz.size() : " << gquiz.size(); 
    cout << "\ngquiz.front() : " << gquiz.front(); 
    cout << "\ngquiz.back() : " << gquiz.back(); 
  
    cout << "\ngquiz.pop() : "; 
    gquiz.pop(); 
    showq(gquiz); 
  
    return 0; 
} 
/**
The result shows the showq is actually manipulate a copy of gquiz queue.

xu-Macbook:STL xushaoming$ ./a.out 
The queue gquiz is :  10 20 30

gquiz.size() : 3
gquiz.front() : 10
gquiz.back() : 30
gquiz.pop() :  20 30
*/
