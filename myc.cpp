#include <iostream>

class person
{
 public:
  person()
  {
  cout<<""<<endl;}
  ~person()
  {
   cout<<""<<endl; 
  }
  private:
  int m_age;
}

int main()
{
  person p;
system("pause");
  return 0;
}
