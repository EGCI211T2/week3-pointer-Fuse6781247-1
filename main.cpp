/*  
#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
pa = &a[0]; //pa =a;
cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa = &a[0];  
pb = &a[SIZE-1];
for (i=0; i<SIZE/2; i++) //
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa=&a[0];
pb-=SIZE/2;
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;


return 0;
}
*/


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
