#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int x;
  int max;
  int a[] = {1};
  cin >> x;
  max = sqrt(x);
  cout << max << '\n';
  for (int i = 0; i < x; i++) {
    cout << a[i] << '\n';
  }
  return 0;
}
