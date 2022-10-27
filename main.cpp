//Ben walked me through this one so our codes are going to be very similar
#include <iostream>
#include <iomanip>

using namespace std;

void printmatrix(int mymat[][2], int Num_rows, int Num_cols);
void adjfind(double mat[][2], double adj[][2]);
void printmatrixdouble(double mymat[][2], int Num_rows, int Num_cols);

int main() {
  double mat[2][2];
  double adj[2][2];
  double Inverse[2][2];

  double a,b,c,d;
  double deter; 

  for (int i = 0; i < 2; i++)
    for (int a = 0; a < 2; a++)
      cin >> mat[i][a]; 


  

  a = mat[0][0];
  b = mat[0][1];
  c = mat[1][0];
  d = mat[1][1];

  deter = (( a * d ) - ( b * c ));

  cout << "Matirx values are: " << endl;
  printmatrixdouble(mat, 2, 2);

  cout << "Determinant= " << deter << endl; 

  if (deter == 0){
    cout << "No inverse detected...";
    
    return 0;

    }

  cout << endl;

  adjfind(mat, adj);

  printmatrixdouble(adj, 2, 2); 

  //calculate inverse
  cout << "Inverse Matrix: " << endl;

  for (int r = 0; r < 2; r++){
    for (int c = 0; c < 2; c++){
      Inverse[r][c] = ((adj[r][c]) * (1/deter)); 
    }
  }

  printmatrixdouble(Inverse, 2, 2);
  
  
  
}

void printmatrix(int mymat[][2], int Num_rows, int Num_cols){
  for (int r = 0; r < Num_rows; r++){
    for (int c = 0; c < Num_cols; c++){
      cout << setw(6) << mymat[r][c];
    }
  cout << endl;
  }
}

void adjfind(double mat[][2], double adj[][2]){
  
  adj[0][0] = mat[1][1];
  adj[0][1] = mat[0][1] * -1;
  adj[1][0] = mat[1][0] * -1;
  adj[1][1] = mat[0][0];

  cout << "The Adjoint Matrix is:" << endl;
}

void printmatrixdouble(double mymat[][2], int Num_rows, int Num_cols){
  for (int r = 0; r < Num_rows; r++){
    for (int c = 0; c < Num_cols; c++){
      cout << setw(6) << mymat[r][c];
    }
  cout << endl;
  }
}

