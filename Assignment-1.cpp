#include<iostream>
using namespace std;

class books
{
public:
   int price;
   int numberofpages;
   string authorname;
   string titlename;

   void librarybooks()
   {
      cout << "Price: " << price << endl;
      cout << "NumberOfPages: " << numberofpages << endl;
      cout << "AuthorName: " << authorname << endl;
      cout << "Titlename: " << titlename << endl;
   }
};

int main()
{
   books b1;

   b1.price = 500;
   b1.numberofpages = 420;
   b1.authorname = "ruskin bond";
   b1.titlename = "harry potter";

   b1.librarybooks();

   return 0;
}
