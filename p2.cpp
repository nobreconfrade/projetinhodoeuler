#include<iostream>

#define SIZE 4000000

using namespace std;

int main(int argc, char const *argv[]) {
  int x1,x2,option;
  int count = 0;
  x1 = 1;
  x2 = 2;
  option = 0;
  while ((x1<SIZE) || (x2<SIZE)) {
    if(option == 0){
      if (x2 % 2 == 0) {
        count += x2;
      }
      x1 = x1 + x2;
      option = 1;
    }
    if (option == 1) {
      if (x1 % 2 == 0) {
        count += x1;
      }
      x2 = x1 + x2;
      option = 0;
    }
  }
  cout << count << '\n';
  return 0;
}
