#include <iostream>
using namespace std;
class heater
{
private:
  int temperature;
public:
    heater ()
  {
    temperature = 15;
  }
  void warmer ()
  {
    temperature += 5;
  }
  void cooler ()
  {
    temperature -= 5;
  }
  void print ()
  {
    cout << "Temperature = " << temperature << endl;
  }
  ~heater ()
  {
    cout << "Destructor has been called.\n";
  }
};

int
main ()
{
  heater t;
  int select;
  while (1)
    {
      cout << "Please select the adjusment option:\n" << "1.Room\n" <<
	"2.Warmer\n" << "3.Cooler\n" << "4.Exit\n";
      cin >> select;
      if (select > 0 && select < 5)
	{
	  switch (select)
	    {
	    case 1:
	      t.print ();
	      break;
	    case 2:
	      t.warmer ();
	      t.print ();
	      break;
	    case 3:
	      t.cooler ();
	      t.print ();
	      break;
	    case 4:
	      return 0;
	    }
	}
      else
	cout << "Incorrect option.\n";
    }
  return 0;
}
