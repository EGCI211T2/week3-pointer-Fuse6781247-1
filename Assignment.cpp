#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]){
  int *pa, *pb, i, temp;
  int n;

  cout<< "How many numbers that you need? ";
  cin>> n;

  pa= new int[n];

  cout << "Enter the numbers: ";
  for (i=0; i<n; i++ ){
    cin >> *pa;
    pa++;
  }

  pa -= n; 

  cout<<"Original: ";
  for (i=0; i<n; i++ ,pa++){
     cout<<setw(3)<<*pa ;
  }
  cout<<endl;

  pb = pa - 1;
  pa -= n;

  for (i=0; i<n/2; i++){
     temp = *pa;  
     *pa = *pb;  
     *pb = temp;
     pa++;  pb--;
  }
  
  pa -= (n/2);

  cout<<"Reversed: ";
  for (i=0; i<n; i++ ,pa++){
     cout<<setw(3)<<*pa ;
  }

  cout<<endl;

  pa -= n;
  delete[] pa;
  return 0;
}