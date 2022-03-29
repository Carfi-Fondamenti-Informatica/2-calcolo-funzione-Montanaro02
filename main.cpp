#include <iostream>
using namespace std;

int main() {
   int a=0, b=0, x=0, y=0;
   cout << "Inserire questi valori:\n";
   cin>>a>>b>>x>>y;
   int z;
   if(x<0&&y>0){
       z=(a*x)-(b*y);
   }if(x>=0 && y<=0){
       z=(a*(x*x))-(b*y);
   }else{ 
        z=(a*x)+(b*(y*y));
    }
   cout <<z;
   return 0;
}
