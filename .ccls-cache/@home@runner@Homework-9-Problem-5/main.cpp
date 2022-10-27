//Ben walked me through this one so our codes are going to be very similar
#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  int mat[2][2];
  int adj[2][2];
  double Inverse[2][2];

  int a,b,c,d;
  int deter; 

  for (int i = 0; i < 2; i++)
    for (int a = 0; a < 2; a++)
      cin >> mat[i][a]; 

  a = mat[0][0];
  b = mat[0][1];
  c = mat[1][0];
  d = mat[1][1];

  deter = (( a * d ) - ( b * c ));

  cout << a << b << c << d;
}