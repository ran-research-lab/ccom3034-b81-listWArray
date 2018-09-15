/*
A list ADT implemented using static array.
*/

#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;

const int CAPACITY = 1024;
typedef int ElementType;

class List {
 public:
   List();

   bool isEmpty() const;
   void insert(ElementType item, int pos);
   void erase(int pos);
   void display(ostream & out) const;
   void elimOdds();
   void reverse();
   ElementType mode() const;

 private:
   int mySize;                     
   ElementType myArray[CAPACITY];  

}; 


List::List(): mySize(0){}

bool List::isEmpty() const { return mySize == 0; }

void List::display(ostream & out) const {
  for (int i = 0; i < mySize; i++)
    out << myArray[i] << " ";
}

ostream & operator<< (ostream & out, const List & aList) {
  aList.display(out);
  return out;
}

void List::insert(ElementType item, int pos) {
  if (mySize == CAPACITY) {
    cerr << "*** No space for list element -- terminating execution ***\n";
    exit(1);
  }
  if (pos < 0 || pos > mySize) {
    cerr << "*** Illegal location to insert -- " << pos 
         << ".  List unchanged. ***\n";
    return;
  }

  // First shift array elements right to make room for item
  for(int i = mySize; i > pos; i--)
    myArray[i] = myArray[i - 1];

  // Now insert item at position pos and increase list size  
  myArray[pos] = item;
  mySize++;
}

void List::erase(int pos) {
  if (mySize == 0) {
    cerr << "*** List is empty ***\n";
    return;
  }
  if (pos < 0 || pos >= mySize) {
    cerr << "Illegal location to delete -- " << pos << ".  List unchanged. ***\n";
    return;
  }

  // Shift array elements left to close the gap
  for(int i = pos; i < mySize - 1; i++) {
    cout << i << ", " << i + 1 << endl;
    myArray[i] = myArray[i + 1];
  }

  // Decrease list size
  mySize--;
}

// ****************************************************************************************
// These are the functions that you will implement
// ****************************************************************************************

void List::elimOdds() {
}

void List::reverse() {
}

ElementType List::mode() const {
  return -1;
}


using namespace std;

int main() {

  int position, element;
  List L;
  string inst;
  
  cout << "$ ";
  while (cin >> inst && inst != "q") {
    if (inst == "i") {
      cin >> element >> position;
      cout << "Inserting " << element << " in position " << position << endl; 
      L.insert(element,position);
    }
    else if (inst == "e") {
      cin >> position; 
      cout << "Erasing element from position " << position << endl;
      L.erase(position);
    }
    else if (inst == "d")  cout << L << endl;
    else if (inst == "eo") { 
      cout << "Erasing odds elements"<< endl;
      L.elimOdds();
    }
    else if (inst == "r")  { 
      cout << "Reversing the list" << endl;
      L.reverse();
    }
    else if (inst == "m")  { 
      cout << "The list mode is " << L.mode() << endl;
    }
    cout << "$ ";
  }
  return 0;
}

