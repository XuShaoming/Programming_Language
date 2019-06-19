#include <iostream>
#include <csignal>

#ifdef _WIN32
    #include <windows.h>

    void sleep(unsigned milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>
#endif

using namespace std;

void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

int main () {
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  

   while(1) {
      cout << "Going to sleep...." << endl;
      sleep(1);
   }

   return 0;
}

/**
Use #ifdef #else #endif  prprocessor is a good way to make code cross platform adaptable.

definition of signal function
void (*signal (int sig, void (*func)(int)))(int); 


Result.
Going to sleep....
Going to sleep....
Going to sleep....
Going to sleep....
Going to sleep....
Going to sleep....
Going to sleep....
^CInterrupt signal (2) received.
*/
