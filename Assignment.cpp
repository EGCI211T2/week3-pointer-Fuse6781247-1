#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n = argc - 1;

  cout<< "How many numbers that you need?";
  cin>> n;

pa= new int[n];

for (i=0; i<n; i++ ){
  *pa = atoi(argv[i+1]);
  pa++;
}

pa -= n; //rewind the p to the starting location
        // Using p within your program

cout<<"Original: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
   cout<<endl;


pb = pa;
pa -= 1;
pb = pa;
pa -= (n-1);
//pb = a&[SIZE - 1]

for (i=0; i<n/2; i++){
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa -= (n/2);

cout<<"Reversed: ";
for (i=0; i<n; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}

cout<<endl;

pa -= n;
delete[] pa;
return 0;
}
