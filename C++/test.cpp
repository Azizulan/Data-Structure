#include <iostream>
using namespace std;
void printsum(int &c, int &f){
c=5; f=7;
}

int main(){

int a=1,b=2;
printsum(a,b);

cout<<a<<" "<<b<<endl;
return 0;
}
