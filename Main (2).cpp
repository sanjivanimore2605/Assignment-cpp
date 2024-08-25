#include <iostream>
#include <string>
using namespace std;
class car{
  public:
  string brand;
  string model;
  int year;
};
int main()
{
  //create an object of car 
  car carobj1;
  carobj1.brand="Tata Motars";
  carobj1.model="Tigor";
  carobj1.year=2017;
  //create an object car 
  car carobj2;
  carobj2.brand="Mahindra";
  carobj2.model="scorpio";
  carobj2.year=2002;
  //create an object car 
  car carobj3;
  carobj3.brand="Maruti suzuki";
  carobj3.model="Baleno";
  carobj3.year=2015;
  //print attribute values
  cout<<carobj1.brand<<"Tata Motars"<<endl;
  cout<<carobj1.model<<"Tigor"<<endl;
  cout<<carobj1.year<<endl;
  
  cout<<carobj2.brand<<"Mahindra"<<endl;
  cout<<carobj2.model<<"scorpio"<<endl;
  cout<<carobj2.year<<endl;
  
  cout<<carobj3.brand<<"Maruti suzuki"<<endl;
  cout<<carobj3.model<<"Baleno"<<endl;
  cout<<carobj3.year<<endl;
  
  return 0;
}