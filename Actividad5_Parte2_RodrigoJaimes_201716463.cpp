#include <iostream>
using namespace std;
//n es el número de columnas y m es el número de filas
//creación de la función suma
void suma(int n,int m,double A[][],double B[][],double D[][]){
  for(int j=0;j<m;j++)
    for(int i=0;i<n;i++)
      D[i][j]=A[i][j]+B[i][j];
} 
//creación de la función resta
void resta(int n,double A[][],double B[][],double C[][]){
  for (int i=0;i<n;i++)
    C[i]=A[i]-B[i];
  }
//creación de la función producto por un valor escalar
void producto_por_escalar(int n,double A[][],double k,double C[][]){
  for (int i=0;i<n;i++)
    C[i]=k*A[i];
  }
//creación de la función producto interno
void producto_interno(int n,double A[][],double B[][],double C[][]){
  double d=0;
  for (int i=0;i<n;i++)
    d+=A[i]*B[i];
  return d;
  }
}
//para imprimir lo que se calcula
void imprimir(double C[]){
   cout<<"(";
  for (int i=0;i<n;i++)
    cout<<C[i]<<",";
  cout<<")";
}
//creación de la función de ortogonalidad
void ortogonalidad(oint n,double A[][], double B[][],double C[][]){
  double d=producto_interno(n,A,B,d);
  if(d!=0){
    cout<<"Los vectores son ortoganles"<<endl;
  }
  else{
    cout<<"Los dos vectores no son ortogonales"<<endl;
  }
}

int main() {
  int n=2;
  int m=3;
  double A[n][m]={{1,2,3,},{4,5,6}};
  double B[n][m]={{6,5,4},{3,2,1}};
  
  std::cout << "Hello World!\n";
}