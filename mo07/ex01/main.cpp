#include "iter.hpp"


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
// int main()
// {

    
//     int arr[] ={10,20,5,4};
//     char arr1[] ={'s','a','a','d'};
//     std::string strs[]={"saad","ivar","haamid"};

//     iter(arr, 4, printing<int>);
//     iter(arr1, 4, printing<char>);
//     iter(strs,3,printing<std::string>);
// }