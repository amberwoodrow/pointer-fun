#include <iostream>
using namespace std;

int main() {
  int index = 0;
  bool yummy = false;
  int* wat = &index; // points to index variable. & means address.
  int* wat2 = new int; // allocates a new int at a random spot in memory. var type with star after is pointer.
  // Must be deleted so no memory leak. Other languages do this for you, it is called garbage collection.
  *wat2 = 1;
  cout << *wat2 << "\n"; // * on var is referencing it so we can get it's value
  cout << wat2 << "\n";
  cout << yummy << "\n";
  cout << &yummy << "\n"; // address of yummy
  delete wat2;

  return 0;
}


// a pointer points to a spot in memory