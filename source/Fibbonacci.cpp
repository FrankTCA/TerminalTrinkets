#include <iostream>

using namespace std;

int main() {
cout << "Enter the amount of numbers to print: ";
int amount;
cin >> amount;
int a = 1;
int b = 1;
cout << a << endl;
cout << b << endl;
amount--;
amount--;
while (amount > 0) {
a = a + b;
cout << a << endl;
amount--;
b = b + a;
cout << b << endl;
amount--;
}
return 0;
}
