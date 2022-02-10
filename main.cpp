#include <cstring>
#include <iostream>

using namespace std;
char* test();

int main(){
  

   
       char c1 ='0';
       char c2 ='4';
       char c3[3] = {c1,c2,0}; // 0 at the end to terminate the string
       cout<< c3 << endl;
       return 0;
   
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
