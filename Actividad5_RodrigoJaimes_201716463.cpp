#include <iostream>
using namespace std;
//creación de la función suma
void suma(int n,double A[],double B[],double C[]){
  for (int i=0;i<n;i++)
    C[i]=A[i]+B[i];
  }
//creación de la función resta
void resta(int n,double A[],double B[],double C[]){
  for (int i=0;i<n;i++)
    C[i]=A[i]-B[i];
  }
//creación de la función producto por un valor escalar
void producto_por_escalar(int n,double A[],double k,double C[]){
  for (int i=0;i<n;i++)
    C[i]=k*A[i];
  }
//creación de la función producto interno
void producto_interno(int n,double A[],double B[],double C[]){
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
void ortogonalidad(oint n,double A[], double B[],double C[]){
  double d=producto_interno(n,A,B,d);
  if(d!=0){
    cout<<"Los vectores son ortoganles"<<endl;
  }
  else{
    cout<<"Los dos vectores no son ortogonales"<<endl;
  }
}
int main() {
  int n=3; // se le asigna el tamaño al array
  double k=2.5; //escalar
 //arrays de entrada
  double A[n]={1,2,3};
  double B[n]={3,4,5.};
  //donde se guardarán los resultados
  double C[n]={0,0,0};
  double d=0;
  //llamar a las funciones
  suma(n,A,B,C);
  imprimir(C);
  resta(n,A,B,C);
  imprimir(C);
  cout<<"Producto de A*B"<<endl;producto_interno(n,A,B)<<endl;
  ortogonalidad(n,A,B,d);
  cout<<""<<d<<endl;
  return 0;
}