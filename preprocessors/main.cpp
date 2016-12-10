//Note you have to recompile each time you change the FLAG value

#include <iostream>
using namespace std;

void doProgram1();
void doProgram2();
void doProgram3();

#ifndef FLAG
#define FLAG 3
#endif

#if FLAG == 0
int main()
{
  doProgram1();
}
#elif FLAG == 1
int main()
{
  doProgram2();
}
#else
int main()
{
  doProgram3();
}
#endif


void doProgram1()
{
  cout << "Wow, I am running as program 1!" << endl;
}

void doProgram2()
{
  cout << "Program 2, here. Checking in!" << endl;
}

void doProgram3()
{
  cout << "Program 3, the forgotten child who catches them all" << endl;
}