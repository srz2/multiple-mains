#include <iostream>
using namespace std;

void doProgram1();
void doProgram2();
void doProgram3();

int main(int argc, char ** argv)
{
  //Not needed, just wanted to show all arguments
  cout << "You provided " << argc - 1 << " arguments" << endl;;
  for(int c = 0; c < argc; c++)
  {
    cout << "\targv[" << c << "] = " << argv[c] << endl;
  }

  if(argc != 2)
  {
    cout << "**Expecting one argument**" << endl;
    return 1;
  }

  string arg1 = string(argv[1]);    //Convert argument to string
  if(arg1 == "1")
  {
    doProgram1();
  }
  else if(arg1 == "2")
  {
    doProgram2();
  }
  else
  {
    doProgram3();
  }
}


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

