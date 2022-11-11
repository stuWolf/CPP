## compile


    To compile, use the following command: g++ main.cpp
    To run, use: ./a.out


## range based for-loop
```cpp
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    
    vector<int> a {1, 2, 3, 4, 5};
    for (int i: a) {    // range based for-loop, takes each element of vector a and writes it into i
        cout << i << "\n";
    }

    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for(auto v : b) { // range based for-loop, takes each row of vector b and writes it into sub vector v
        for(int i : v) {  // range based for-loop, takes each element of sub vector v and writes it into i
            cout << i << " ";
        }
        cout << "\n";
    }
}

```
## vector size
```cpp
vector<int> a = {0, 1, 2, 3, 4};
    
    // Print the length of vector a to the console.
    cout << a.size() << "\n";

```
## function declaration and call
```cpp

// Function declaration.
int AdditionFunction(int i, int j) 
{
    return i + j;
}

//CAll
int main() 
{
    auto d = 3;
    auto f = 7;
    cout << AdditionFunction(d, f) << "\n";
}

```
## create and read from file

```cpp
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
}
```

## Vecctor push back

```cpp
int main() {
    // Initial Vector
    vector v {1, 2, 3};
     // Push 2 to the back of the vector
    v.push_back(2);
}
```
## read out from string

```cpp

string b("1, 2 ,3,");
    istringstream my_stream(b); //initiate stream

    char c;
    int n;

    while (my_stream >> n >> c) {
cout <<n << c << "\n";
    }

```

## enun type, switch statement

```cpp
  // Create the enum direction with fixed values.
    enum class Direction {kUp, kDown, kLeft, kRight};

    // Create a  variable.
   Dir a = Direction::kUp;

   // eval with switch
   switch (a) {
      case Direction::kUp : cout << "Going up!" << "\n";
        break;
      case Direction::kDown : cout << "Going down!" << "\n";
        break;
      case Direction::kLeft : cout << "Going left!" << "\n";
        break;
      case Direction::kRight : cout << "Going right!" << "\n";
        break;
        default: cout << "none applies";
    }


```

## A* pseudo code



    Search( grid, initial_point, goal_point ) :

        Initialize an empty list of open nodes.

        Initialize a starting node with the following:
            x and y values given by initial_point.
            g = 0, where g is the cost for each move.
            h given by the heuristic function (a function of the current coordinates and the goal).

        Add the new node to the list of open nodes.

        while the list of open nodes is nonempty:
            Sort the open list by f-value
            Pop the optimal cell (called the current cell).
            Mark the cell's coordinates in the grid as part of the path.

            if the current cell is the goal cell:
                return the grid.

            else, expand the search to the current node's neighbors. This includes the following steps:
                Check each neighbor cell in the grid to ensure that the cell is empty: it hasn't been closed and is not an obstacle.
                If the cell is empty, compute the cost (g value) and the heuristic, and add to the list of open nodes.
                Mark the cell as closed.

        If you exit the while loop because the list of open nodes is empty, you have run out of new nodes to explore and haven't found a path.

