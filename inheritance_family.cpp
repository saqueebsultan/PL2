#include <iostream>

using namespace std;

class Parent
{
   public:
      Parent(){
          cout << "what up dad" << endl;}
     ~Parent(){
          cout << "shut up dad" << endl;}
};


class Child: public Parent
{
   public:
      Child(){
          cout << "what up son" << endl;}
      ~Child(){
          cout << "shut up son" << endl;}
};


class Grandchild: public Child
{
   public:
      Grandchild(){
          cout << "what up grandson" << endl;}
       ~Grandchild(){
          cout << "shut up grandson" << endl;}
};

int main()
{
   Child p;

   return 0;
}
