// main.cpp

// the ios header contains cout among other things
#include <iostream>

// this declaration lets us leave off the "std::" when using things in 
// the standard libraries
// Without it, we'd have to type "std::cout", now we can just type "cout"
using namespace std;

int main(int argc, char **argv) {
    cout << "Hello World" << endl;
    
    // return 0 to indicate success
    return 0;

}

