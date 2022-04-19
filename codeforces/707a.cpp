#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
  int n, m;
  scanf("%d%d", &n, &m);
  char c;
  const char * s = "#Black&White";
  for(int i=0; i<n*m; ++i) {
    cin >> c;
    if(c=='C' || c=='M' || c == 'Y') {
      s = "#Color";
    }
  }
  cout << s;
}