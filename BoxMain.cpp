#include<iostream>
#include"Box.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Box box1,box2;
  box2.initialize_box(1,2,3)
  box1.initialize_box(2,4,2);
  cout << "(Box1)" << endl;//box 1 components
  cout << "Length Of Box: "<<b1.get_length() << endl;
  cout << "Width Of Box:  "<<b1.get_width() << endl;
  cout << "Height Of Box: "<<b1.get_height() << endl;
  cout << "(Box2)" << endl;//box 2 components
  cout << "Length Of Box 2: "<<b2.get_length() << endl;
  cout << "Width Of Box 2: "<<b2.get_width() << endl;
  cout << "Height Of Box 2: "<<b2.get_height() << endl;
  return 0;
}
