#include<iostream>
using namespace std;

int main(){
  double basicSalary,allowances,deductions;
  cout<<"Enter your salary : ";
  cin>>basicSalary;
  cout<<"Enter your percentage of allowances : ";
  cin>>allowances;
  cout<<"Enter your percentage of deductions : ";
  cin>>deductions;

  double netSalary = basicSalary+(basicSalary*(allowances/100))-(basicSalary*(deductions/100));
  cout<<"Your net salary is " <<netSalary<<endl;
}