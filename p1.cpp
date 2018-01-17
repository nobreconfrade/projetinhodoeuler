#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int v[1000] = {0};
  int count = 0;
  for (int i = 0; i < 1000; i++) {
    if((i%3 == 0) || (i%5 == 0)){
      v[i]++;
    }
  }
//coisa
  for (int i = 0; i < 1000; i++) {
    if (v[i] > 0) {
      count += i;
    }
  }
  cout << count << '\n';
  return 0;
}
