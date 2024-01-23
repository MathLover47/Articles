#include <iostream>
using namespace std;
int main()
{
cout << "do while loop and for loop in goto statement" << endl;
int i = 0;
loop: cout << i << ", "; // do while loop
i++;
if (i < 10)
goto loop;
i = 0;
cout << endl;
do{cout << i << ", "; // do while loop
i++;
} while (i < 10);
cout << "\n\n\n";
loop2: if (i > 0){
cout << i << " *, ";
i--;
goto loop2;}
cout << endl;
for (int i=10;i > 0; i--)
cout << i << " *, ";
return 0;
}