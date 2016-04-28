
#include "test.h"

test::test()
{
   tLinkedList=  new LinkedList<int>();
}

test::~test()
{
  delete  tLinkedList;
}

//EMPTY TEST--------------------------------------------------------------------------
bool test::testIsEmpty()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
  bool testempty = tLinkedList->isEmpty();
  std::cout<<"Is linked list empty?(correct:1)"<< testempty<<std::endl;
tLinkedList->addFront(1); 
bool testnotempty=tLinkedList->isEmpty();				  
   std::cout<<"Is linked list occupied?(correct:0)"<< testempty<<std::endl;
 delete tLinkedList;
 return(true);
}
//SIZE TEST---------------------------------------------------------------------
bool test::testSize()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
 int size = tLinkedList->size();
  std::cout<< "size of empty list (correct: 0) " << size <<std::endl;

  for(int i = 0; i<5; i++)
  {
    tLinkedList->addFront(i);

  }
 int size2 = tLinkedList->size();
  std::cout<<"size of linked list after adding 5 nodes(correct:5): "<<size2<<std::endl;

}

//SEARCH TEST-------------------------------------------------------------------------
bool test::testSearch()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
  for(int i = 0; i<10; i++)
  { 
    tLinkedList->addFront(i);
  }
  //test for value not in list
  bool test1 = tLinkedList->search(20);
  std::cout <<"Searching value not in list(correct:0)"<<test1<<std::endl;

  //test for value in list
std::vector<int> lvect = tLinkedList->toVector();
std::cout<<"value of 4th node(corect:7) : " << lvect[2] <<std::endl;
  bool test2 = tLinkedList->search(3);
  std::cout <<"Searching value in linked list (correct:1): "<<test2<<std::endl;
delete tLinkedList;
}
//ADD BACK-------------------------------------------------------------------------------------------------
bool test::testAddBack()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
    tLinkedList-> addBack(1);
 tLinkedList-> addBack(2);
 tLinkedList-> addBack(3);
	int size = tLinkedList->size();
std::vector<int> lvect = tLinkedList->toVector();

std::cout<<"size of list after adding 3 value(correct:3): " << size <<std::endl;
std::cout<<"value of first node(corect:1) : " << lvect[0] <<std::endl;
std::cout<<"value of second node(corect: 2) : " << lvect[1] <<std::endl;	
std::cout<<"value of third node(corect: 3) : " << lvect[2] <<std::endl;	
 delete tLinkedList;
  return(true);
 

}
//ADD FRONT TEST-----------------------------------------------------------------------

bool test::testAddFront()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
    tLinkedList-> addFront(1);
	int size = tLinkedList->size();
std::vector<int> lvect = tLinkedList->toVector();

std::cout<<"size of list after adding 1 value(correct:1): " << size <<std::endl;
std::cout<<"value of first node(corect:1) : " << lvect[0] <<std::endl;
std::cout<<"value of second node(corect: null) : " << lvect[1] <<std::endl;		
 delete tLinkedList;
  return(true);
  }
//REMOVE FRONT TEST----------------------------------------------------------------------------------
bool test::testRemoveFront()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
  bool test1 = tLinkedList->removeFront();
tLinkedList->addFront(1);
tLinkedList->addFront(2);
tLinkedList->addFront(3);
tLinkedList->addFront(4);
tLinkedList->addFront(5);
  std::cout <<"remove from empty list(correct:0)" << test1 <<std::endl;
int test2 = tLinkedList->size();
tLinkedList->removeFront();
std::cout<<"size after removing front from a linked list of size 5 (correct: 4)"<< test2 << std::endl;


std::vector<int> lvect = tLinkedList->toVector();
std::cout<<"front node value after removing front of size 4 (correct:4)"<< lvect[0] << std::endl;
std::cout<<"last node value (correct:1)"<< lvect[4] << std::endl;
  delete tLinkedList;
  return(true);
}


//REMOVE BACK--------------------------------------------------------------------------------------------
bool test::testRemoveBack()
{
  LinkedList<int>* tLinkedList = new LinkedList<int>();
  bool test1 = tLinkedList->removeBack();

  std::cout <<"removeBack on empty list (correct: 0):" << test1 <<std::endl;

  for(int i = 1; i<6; i++)
  {
    tLinkedList->addFront(i);
   
  }
 bool test2 = tLinkedList->removeBack();

  std::cout<<"removed back from populated list (correct:1): "  <<test2 <<std::endl;
std::vector<int> lvect = tLinkedList->toVector();
  std::cout<<"first node in list (correct:5): "  <<lvect[0] <<std::endl;
  std::cout<<"last node in list (correct:2): "  <<lvect[3] <<std::endl;
  delete tLinkedList;
  return(true);
}





