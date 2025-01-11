#include <iostream>
using namespace std;
int main()
{ int m[4][4];
  int r;
  int c;
  int prodotto;
 
  for(int r=0; r<2;r++) {  
for(int c=0;c<2;c++) {
 m[r][c]=rand()%10;
if(r==c){
    prodotto=prodotto*m[r][c];
}
}
} 
for(int r=0; r<2;r++) {  
for(int c=0;c<2;c++) {
std::cout <<m[r][c]<< std::endl;
}
}
}
