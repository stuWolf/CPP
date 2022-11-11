#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;



// TODO: Add the ParseLine function here.
vector<int> ParseLine(string a)
{
  
  char c;
  int n;
  vector<int> v;
  istringstream my_stream(a);
  
  while (my_stream >> n >> c)
  {
    v.push_back(n);
  }
  
  for (int i: v)
  {
    cout << i << "\n";
  }
  return v;
}

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

#include "test.cpp" // For testing.

int main() {
  //ReadBoardFile("1.board");
  
  vector <int> b;
  string a  ("1,2,3,4,5,");
  b = ParseLine( a);
  
 // TestParseLine(); // For testing.
  // Leave commented out.
  // PrintBoard(board);
}