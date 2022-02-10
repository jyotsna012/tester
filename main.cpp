#include <cstring>
#include <iostream>

using namespace std;
char* test();

int main(){
  
  cout << test() << endl;
  
}

char* test(){
  
  char* array[80];
  char* theVal = new char[80]; 
  strcpy(theVal, head -> dataVal);
    strcat(array, theVal);
    head = head -> next;
  cout << "enter a num" << endl;
  char array[80];
  cin >> array;
  return array;

}
