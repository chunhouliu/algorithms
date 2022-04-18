#include <cstdio>
using namespace std;


int main(int argc, char* argv[]) {
   // 2 4 8 16 32 64
   // 64  2 4
   // 32 16 8
   int t;
   scanf("%d", &t);
   while(t>0) {
     --t;
     int n;
     scanf("%d", &n);
     int a=0, b=0, acnt=0;
     for(int i=n; i>0; --i) {
       if(a<b && acnt<n/2) {
         a+=(0x1<<i);
         ++acnt;
       } else b+=(0x1<<i);
     }
     printf("%d\n", a>b?a-b:b-a);
   }
}