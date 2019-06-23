//https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/

#include <iostream> 
#include <queue> 
  
using namespace std; 
  
/*
void showpq(priority_queue <int> gq) 
{ 
    priority_queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
}
*/

void showpq(priority_queue <int> gq) 
{ 
    while (!gq.empty()) 
    { 
        cout << '\t' << gq.top(); 
        gq.pop(); 
    } 
    cout << '\n'; 
}
  
int main () 
{ 
    priority_queue <int> gquiz; 
    gquiz.push(10); 
    gquiz.push(30); 
    gquiz.push(20); 
    gquiz.push(5); 
    gquiz.push(1); 
  
    cout << "The priority queue gquiz is : "; 
    showpq(gquiz); 
  
    cout << "\ngquiz.size() : " << gquiz.size(); 
    cout << "\ngquiz.top() : " << gquiz.top(); 
  
  
    cout << "\ngquiz.pop() : "; 
    gquiz.pop(); 
    showpq(gquiz); 
  
    return 0; 
} 

/**
The result shows the showq is actually manipulate a copy of gquiz queue.
This is different from Java. See ContainPriorityQueue.java output. Java showQueue
function actually manipulate original container.


xu-Macbook:STL xushaoming$ ./a.out 
The priority queue gquiz is :   30  20  10  5   1

gquiz.size() : 5
gquiz.top() : 30
gquiz.pop() :   20  10  5   1
*/
