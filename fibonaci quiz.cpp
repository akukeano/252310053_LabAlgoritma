#include <iostream>
using namespace std;
int main ()
{
int i, a=0, c=0;
for(i=1; i<=10; i++) {
cout << c << " ";
if (c!=0) {
c = a + b;
}
else {
c = 1;
}
a = b;
b = c;
}
}
