
#include "test.h"
#include <iostream>
int main() {

  test newtest;

  std::cout<<"\n_____IsEmpty Tests______"<<std::endl;
  newtest.testIsEmpty();
 
   std::cout<<"\n_______Size Tests_______"<<std::endl;
  newtest.testSize();

  std::cout<<"\n_______Search Tests_______"<<std::endl;
newtest.testSearch();
 std::cout<<"\n_______Add Back Tests_______"<<std::endl;
    newtest.testAddBack();
 std::cout<<"\n__________Add Front Tests___"<<std::endl;
  newtest.testAddFront();
  
 std::cout<<"\n_______Remove Back Tests_______"<<std::endl;
  newtest.testRemoveBack();

std::cout<<"\n_______Remove Front Tests_______"<<std::endl;
  newtest.testRemoveFront();
  return 0;
}
