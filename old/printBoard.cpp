#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
void PrintBoard (vector<vector<int>> j)
{
// Write your double loop here.
    for(auto v : j) { // range based for-loop, takes each row of vector b and writes it into sub vector v
        for(int i : v) {  // range based for-loop, takes each element of sub vector v and writes it into i
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  
   PrintBoard(board) ;
  
} //end nmain