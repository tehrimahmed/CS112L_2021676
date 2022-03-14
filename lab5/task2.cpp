#include <iostream>
using namespace std;
class parity
{
private:
  int *arr;
  int size;
public:
    parity ()
  {
    size = 0;
  }
  void put (int num)
  {
    size++;
    int *temp = new int[size];
    for (int i = 0; i < size - 1; i++)
      {
	temp[i] = arr[i];
      }
    delete[]arr;
    temp[size - 1] = num;
    arr = temp;
    delete[]temp;
  }
  void print ()
  {
    for (int i = 0; i < size; i++)
      {
	cout << arr[i] << endl;
      }
  }
  void deletenum ()
  {
    if (size > 0)
      {
	size--;
	int *temp = new int[size];
	for (int i = 0; i < size; i++)
	  temp[i] = arr[i];
	delete[]arr;
	arr = temp;
	delete[]temp;
      }
    else
      cout << "No elements in the array.\n";
  }
  bool test ()
  {
    if (size % 2 == 0)
      return true;
    else
      return false;
  }
  ~parity ()
  {
    delete[]arr;
  }
};

int
main ()
{
  parity par;
  int num, opt;
  while (1)
    {
      cout << "Select an option from our menu:\n" << "1.Put Num\n" <<
	"2.Delete Num\n" << "3.Print arr\n" << "4.Test\n" << "5.Exit\n";
      cin >> opt;
      switch (opt)
	{
	case 1:
	  cout << "Please enter a number: \n";
	  cin >> num;
	  par.put (num);
	  break;
	case 2:
	  par.deletenum ();
	  break;
	case 3:
	  par.print ();
	  break;
	case 4:
	  par.test ();
	  break;
	case 5:
	  return 0;
	  break;
	default:
	  cout << "Wrong option selected.\n";
	}
    }
  return 0;
}
