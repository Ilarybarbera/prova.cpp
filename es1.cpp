#include <iostream>
using namespace std;
int main()
{ int m1[2][2];
  int m2[2][2];
  int r;
  int c;
  int max=0;
  
  for(int r=0; r<2;r++) {
      
for(int c=0;c<2;c++) {
std::cout << "inserisci i numeri" << std::endl;
   std::cin >> m1[r][c]; 
   if(m1[r][c]>max){
       max=m1[r][c];
   }
}
}
for(int r=0; r<2;r++) {
      
for(int c=0;c<2;c++) {
m2[r][c]=max*m1[r][c];
}
}
for(int r=0; r<2;r++) {
      
for(int c=0;c<2;c++) {
std::cout << m2[r][c] << ""; 
}
}
}