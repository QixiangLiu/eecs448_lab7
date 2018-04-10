#include "Test.h"

Test::Test(){

}

Test::~Test(){


}

void Test::run(){

  LinkedListOfInts mylist;
  bool searchFlag = true;
  bool addBackFlag = true;
  cout << "============================\n";
  cout << "Test01 addBack() AND isEmpty() AND size() AND search():\n";
  cout << "List is empty in the beginning, start addback and search each elements: 1..10\n";
  for(int i=0;i<10;i++){
    mylist.addBack(i+1); //add 1..10
    if(mylist.search(i+1)==false){
      searchFlag = false;
    }
  }
  if(searchFlag){
    cout << "search() PASSED\n";
  }else{
    cout << "search() FAILED\n";
  }
  cout << "start Print List:";
  if(mylist.size()==mylist.toVector().size()){
    for(unsigned int i=0;i<mylist.toVector().size();i++){
      cout << mylist.toVector()[i]<<" "; //add 1..10
      if(mylist.toVector()[i]!=i+1){
        addBackFlag = false;
      }
    }
    cout << "\n";
    if(addBackFlag ==false){
      cout << "addBack() FAILED";
    }else{
      cout << "addBack() PASSED";
    }

  }else{
    cout << "size FAILED;\n";
  }
  cout << "\n";
  if(mylist.isEmpty()){
    cout << "List is empty\n";
    cout << "IF empty, what is size of list?: ";
    cout << mylist.size()<<endl;
  }else{
    cout << "List is not empty\n";
    cout << "IF Not empty, what is size of list?: ";
    cout << mylist.size()<<endl;
  }
  cout << "isEmpty() FAILED \n";
  cout << "size()    PASSED \n";
  cout << "============================\n";
  cout << "Test02 removeBack()\n";
  if(mylist.removeBack()){
    cout << "removeBack() PASSED! Start print\n";
    if(mylist.size()==mylist.toVector().size()){
      for(unsigned int i=0;i<mylist.toVector().size();i++){
        cout << mylist.toVector()[i]<<" "; //add 1..10
      }
    }else{
      cout << "size FAILED;\n";
    }
  }else{
    cout << "removeBack() FAILED! Start print\n";
    if(mylist.size()==mylist.toVector().size()){
      for(unsigned int i=0;i<mylist.toVector().size();i++){
        cout << mylist.toVector()[i]<<" "; //add 1..10
      }
    }else{
      cout << "size FAILED;\n";
    }
  }
  cout << "\n";
  cout << "============================\n";
  cout << "Test03 removeFront():\n";
  if(mylist.removeFront()){
    cout << "removeBack PASSED! Start print\n";
    if(mylist.size()==mylist.toVector().size()){
      for(unsigned int i=0;i<mylist.toVector().size();i++){
        cout << mylist.toVector()[i]<<" "; //add 1..10
      }
    }else{
      cout << "size FAILED;\n";
    }
  }else{
    cout << "removeFront() FAILED! Start print\n";
    if(mylist.size()==mylist.toVector().size()){
      for(unsigned int i=0;i<mylist.toVector().size();i++){
        cout << mylist.toVector()[i]<<" "; //add 1..10
      }
    }else{
      cout << "size FAILED;\n";
    }
  }
  cout << "\n";
  cout << "====================================";
  cout << "Test04 addFront(): \n";
  cout << "Add 1000 on the front:";
  mylist.addFront(1000);
  if(mylist.search(1000)){
    cout << "Print list: ";
    if(mylist.size()==mylist.toVector().size()){
      for(unsigned int i=0;i<mylist.toVector().size();i++){
        cout << mylist.toVector()[i]<<" "; //add 1..10
      }
    }else{
      cout << "size() FAILED;\n";
    }
    cout << "\n";

  }else{
    cout << "addFront() FAILED because cannot search add number.\n";
  }
  cout << "Test empty list ADD number 100\n";
  LinkedListOfInts mylist2;
  if(mylist2.size()==0){
    mylist2.addFront(100);
    if(mylist2.search(100)){
      cout << "Print list: ";
      if(mylist2.size()==mylist2.toVector().size()){
        for(unsigned int i=0;i<mylist2.toVector().size();i++){
          cout << mylist2.toVector()[i]<<" ";
        }
      }else{
        cout << "size() FAILED;\n";
      }
  }else{
    cout << "\n";
    for(unsigned int i=0;i<mylist2.toVector().size();i++){
      cout << mylist2.toVector()[i]<<" ";
    }
    cout << "addFront() FAILED because cannot search add number\n";
  }
}else{
  cout << "size() FAILED\n";
}
cout << "\n";
cout << "addFront() PASSED\n";

}
