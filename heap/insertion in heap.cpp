#include <iostream>
using namespace std;
class heap
{
  public:
  int *arr;
  int capacity;
  int size;
 
 heap (int capacity)
 {
  this ->arr =new int[capacity];
  this->size =0;
  // size = current number of elements in the heap
 }
 void insert(int val)
 {
  if(size==capacity)
  {
    cout<<"heap overflow";

  }
  size++;
  int index = size;
  arr[index]=val;
  // take the val to its correect position
  while(index>1)
  {
    int parentindex = index/2;
    if(arr[index]>arr[parentindex])
    {
      swap(arr[index],arr[parentindex]);
      index = parentindex;
    }
    else{
      break;
    }
  }

 }
 void print()
 {
  for(int i=1;i<=size;i++)
  {
    cout<<arr[i]<<endl;
  }
 }
};

int main() {
  cout << "Hello world!" << endl;
  heap h(20);
  h.insert(10);
  h.insert(20);
  h.insert(78);
  h.insert(6);
  h.insert(67);
  h.print();
  return 0;
}
