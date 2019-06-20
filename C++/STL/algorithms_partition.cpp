//https://www.geeksforgeeks.org/stdpartition-in-c-stl/

// C++ code to demonstrate the working of  
// partition() and is_partitioned() 
/*
#include<iostream> 
#include<algorithm> // for partition algorithm 
#include<vector> // for vector 
using namespace std; 
int main() 
{ 
    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
      
    // Checking if vector is partitioned  
    // using is_partitioned() 
    is_partitioned(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    })? 
      
    cout << "Vector is partitioned": 
    cout << "Vector is not partitioned"; 
    cout << endl; 
      
    // partitioning vector using partition() 
    partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    }); 
      
    // Checking if vector is partitioned  
    // using is_partitioned() 
    is_partitioned(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    })? 
      
    cout << "Now, vector is partitioned after partition operation": 
    cout << "Vector is still not partitioned after partition operation"; 
    cout << endl; 
      
    // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int &x : vect) cout << x << " "; 
    cout << endl;
    return 0; 
      
} 
*/

/**
not stable, not keep the original array's order.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
Vector is not partitioned
Now, vector is partitioned after partition operation
The partitioned vector is : 2 8 6 5 1 7
*/


// C++ code to demonstrate the working of  
// stable_partition() and partition_point()

/*
#include<iostream> 
#include<algorithm> // for partition algorithm 
#include<vector> // for vector 
using namespace std; 
int main() 
{ 
    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
      
    // partitioning vector using stable_partition() 
    // in sorted order 
    stable_partition(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2 == 0;         
    }); 
      
    // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int &x : vect) cout << x << " "; 
    cout << endl; 
      
    // Declaring iterator 
    vector<int>::iterator it1; 
      
    // using partition_point() to get ending position of partition 
    auto it = partition_point(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
    }); 
      
    // Displaying partitioned Vector 
    cout << "The vector elements returning true for condition are : "; 
    for ( it1= vect.begin(); it1!=it; it1++) 
        cout << *it1 << " "; 
    cout << endl; 
      
    return 0; 
      
} 
*/
/**
the vectory also supprot for (int &x : vect) grammer. This is good.
This function also use auto to let compiler to find the true type.

myous-MacBook-Pro:STL xushaoming$ ./a.out 
The partitioned vector is : 2 6 8 1 5 7 
The vector elements returning true for condition are : 2 6 8 
*/



// C++ code to demonstrate the working of  
// partition_copy() 
#include<iostream> 
#include<algorithm> // for partition algorithm 
#include<vector> // for vector 
using namespace std; 
int main() 
{ 
    // Initializing vector 
    vector<int> vect = { 2, 1, 5, 6, 8, 7 }; 
      
    // Declaring vector1 
    vector<int> vect1; 
      
    // Declaring vector1 
    vector<int> vect2; 
      
    // Resizing vectors to suitable size using count_if() and resize() 
    int n = count_if (vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    } ); 
    vect1.resize(n);  
    vect2.resize(vect.size()-n); 
      
    // Using partition_copy() to copy partitions 
    partition_copy(vect.begin(), vect.end(), vect1.begin(),  
                                     vect2.begin(), [](int x) 
    { 
        return x%2==0; 
    }); 
      
      
    // Displaying partitioned Vector 
    cout << "The elements that return true for condition are : "; 
    for (int &x : vect1)  
            cout << x << " "; 
    cout << endl; 
      
    // Displaying partitioned Vector 
    cout << "The elements that return false for condition are : "; 
    for (int &x : vect2)  
            cout << x << " "; 
    cout << endl; 
      
    return 0;     
}

/**

myous-MacBook-Pro:STL xushaoming$ ./a.out 
The elements that return true for condition are : 2 6 8 
The elements that return false for condition are : 1 5 7 
*/

