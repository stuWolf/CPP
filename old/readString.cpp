#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    string b("1, 2 ,3,");
    istringstream my_stream(b); //initiate stream

    char c;
    int n;

    while (my_stream >> n >> c) {
    //while (my_stream >> n ) {   //generates a,b,c,d,
    
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    // Testing to see if the stream was successful and printing results.
    // while (my_stream) {
    //     my_stream >> n;
    //     if (my_stream) {
    //         cout << "That stream was successful: " << n << "\n";
    //     }
    //     else {
    //         cout << "That stream was NOT successful!" << "\n";            
    //     }
    // }
}