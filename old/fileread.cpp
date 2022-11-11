#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::vector;
using std::ifstream;
using std::string; //to avoid using sts:: all the time

void ReadBoardFile(string FileName)
{

  ifstream my_file; //create stream
    my_file.open(FileName); //open file for output
    if (my_file) 
    {
        cout << "The file stream has been created!" << "\n";
        string line;
        while (getline(my_file, line)) {
            cout << line << "\n";
        }
    } else
    {
        cout << "file not found" << "\n";
        string line;
    }
}

int main() {
    ReadBoardFile("./files/board.txt");

    // ifstream my_file;
    // my_file.open("./files/board.txt");
    // if (my_file) {
    //     cout << "The file stream has been created!" << "\n";
    //     string line;
    //     while (getline(my_file, line)) {
    //         cout << line << "\n";
    //     }
    // } else
    // {
    //     cout << "file not found" << "\n";
    //     string line;
    // }
}