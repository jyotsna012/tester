#include <cstring>
#include <iostream>

using namespace std;
char* test();

int main(){
  
  cout << test() << endl;
  
}

char* test(){

  cout << "enter a num" << endl;
  char array[80];
  cin >> array;
  return array;

}
