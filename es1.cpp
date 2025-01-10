#include <iostream>
using namespace std;
int main()
{ int m[2][2];
  int r;
  int c;
  
  for(int r=0; r<2;r++) {   
for(int c=0;c<2;c++) {
std::cout << "inserisci i numeri" << std::endl;
   std::cin >> m[r][c]; 
   if(m[r][c]==3){
    std::cout << "il numero 3 è presente" << std::endl;   
   }
   else{
    std::cout << "il numero 3 non è presente" << std::endl; 
   }
}
}
}