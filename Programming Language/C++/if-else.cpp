#include<iostream>
#include <cmath>
using namespace std;

// even or odd
void Even_or_Odd (){
   int n; 
   cout<<"Enter a number : ";
  cin>>n;
  if(n%2==0)
  cout<<"Even Number"<<endl;
  else
  cout<<"Odd Number"<<endl;
}

//max of two
void maxTwo(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is greater than "<<b<<endl;
    else
    cout<<b<<" is greater than "<<a<<endl;
}

// positive or negative
void checkSign(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<0)
    cout<<"you entered a negative number"<<endl;
    else
    cout<<"you entered a positive number"<<endl;

}

//Roll no.
void rollnumber(){
    int n;
    cout<<"Enter your roll number : ";
    cin>>n;
    if(n<0)
    cout<<"Invalid roll number"<<endl;
    else
    cout<<"Valid roll number"<<endl;
}

// divisibility
void checkDivisible(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    if(b==0)
    cout<<"Inavlid denominator"<<endl;
    else
    cout<<"Your answer is : "<<a/b<<endl;
}

//hourWorking (9-18)
void WorkingHour(){
    int h;
    cout<<"Enter hour : ";
    cin>>h;
    if(h>=9 && h<=18)
    cout<<"You are working"<<endl;
    else
    cout<<"You are resting"<<endl;
}

//Young Or not
void CheckYoung(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=12 && age<=50)
    cout<<"You are young"<<endl;
    else
    cout<<"You are not young"<<endl;
}

//Eligible for offer or not
void checkOffer(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<12 || age>50)
    cout<<"You are eligible"<<endl;
    else
    cout<<"You are not eligible"<<endl;
}

//Max of three numbers
void maxThree(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a<<" is greatest"<<endl;
    else if(c>b)
    cout<<c<<" is greatest"<<endl;
    else 
    cout<<b<<" is greatest"<<endl;
}

//nature of roots
void roots_nature(){
    int a,b,c;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<"Enter c :";
    cin>>c;
    int d = b*b - 4*a*c;
    cout<<"Equation : "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    if(d==0){
        cout<<"Roots are real and equal : "<<-b/(2*a)<<endl;
    }
    else if(d>0)
    {
        cout<<"Roots are real and unequal : "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a)<<endl;
    }
    else
    {
        cout<<"Roots are imaginary"<<endl;
    }

}


//GRADES
void grade(){
  int m1,m2,m3;
  cout<<"Enter marks : ";
  cin>>m1>>m2>>m3;
  float avg = (m1+m2+m3)/3.0f;
  if(avg>=60) cout<<"A grade"<<endl;
  else if(avg>=35 && avg<60) cout<<"B grade"<<endl;
  else cout<<"C grade"<<endl;
}

void Bill(){
    cout<<"Enter quantity : ";
    int q;
    cin>>q;
    cout<<"Enter price : ";
    int p;
    cin>>p;

    int amount = q*p;
    if(amount>=5000)
    cout<<"You got a discount of 10%, your final price is "<<0.9*amount<<endl;
    else
    cout<<"Sorry! No discount, your final price is "<<amount<<endl;
}

void day(){
    int day;
    cout<<"Enter day number : ";
    cin>>day;
    if(day==1)
    cout<<"Sunday"<<endl;
    else if(day==2)
    cout<<"Monday"<<endl;
    else if(day==3)
    cout<<"Tuesday"<<endl;
    else if(day==4)
    cout<<"Wednesday"<<endl;
    else if(day==5)
    cout<<"Thursday"<<endl;
    else if(day==6)
    cout<<"Friday"<<endl;
    else if(day==7)
    cout<<"Saturday"<<endl;
    else 
    cout<<"Invalid day"<<endl;
}

void month(){
    int month;
    cout<<"Enter month number : ";
    cin>>month;
    if(month==1)
    cout<<"January"<<endl;
    else if(month==2)
    cout<<"February"<<endl;
    else if(month==3)
    cout<<"March"<<endl;
    else if(month==4)
    cout<<"April"<<endl;
    else if(month==5)
    cout<<"May"<<endl;
    else if(month==6)
    cout<<"June"<<endl;
    else if(month==7)
    cout<<"July"<<endl;
    else if(month==8)
    cout<<"August"<<endl;
    else if(month==9)
    cout<<"September"<<endl;
    else if(month==10)
    cout<<"October"<<endl;
    else if(month==11)
    cout<<"November"<<endl;
    else if(month==12)
    cout<<"December"<<endl;
    else
    cout<<"Invalid month"<<endl;
}

void digit(){
        int digit;
    cout<<"Enter digit : ";
    cin>>digit;
    if(digit==1)
    cout<<"one"<<endl;
    else if(digit==2)
    cout<<"two"<<endl;
    else if(digit==3)
    cout<<"three"<<endl;
    else if(digit==4)
    cout<<"four"<<endl;
    else if(digit==5)
    cout<<"five"<<endl;
    else if(digit==6)
    cout<<"six"<<endl;
    else if(digit==7)
    cout<<"seven"<<endl;
    else if(digit==8)
    cout<<"eight"<<endl;
    else if(digit==9)
    cout<<"nine"<<endl;
    else
    cout<<"Invalid digit"<<endl;
}

int main(){

 day();
 month();
 digit(); 
}