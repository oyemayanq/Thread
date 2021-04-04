#include "../include/thread.h"
#include <iostream>
using namespace std;

int main(){
  Thread z("-1234");
  cout<<z.toInt()<<endl;
  return 0;
}
