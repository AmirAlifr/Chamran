#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[]) {
for(int b = 0; b < 10; ++b)
cout << a[b] << " ";
}
int main() {
int a[10]= {3,4,1,0,5,7,8,6,9};
cout << "\nunsorted list: ";
show(a);
sort(a, a+10);
cout << "\n\nsorted list:: ";
show(a);
return 0;
}