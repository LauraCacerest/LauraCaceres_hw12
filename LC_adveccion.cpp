#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  //Declaracion de Variables
  double c=1;
  double dt=0.001, dx= 0.001;
  double x_min=-2,x_max=2;
  int nx=(x_max-x_min)/dx;
  int nt=700;
  int i,j;

  double *unew=new double[nx];
  double *upast=new double[nx];


  int p=nt/5
  double x=-2

  for (i=0,i<nx,i++){

    if (x>=0.5 or x<=0.5)
    {
      unew[i]=0;
    }
    else{
      upast[i]=0.5;
    }

    cout << unew[i] << endl;
  }
  //Se realiza la evolucion Temporal de la funcion

  for(j=1;j<=nt;j++)
  {
    //Definicion Condiciones de Frontera
    unew[0]=0;
    unew[nx-1]=0;

    for (i=1; i<nx;i++){
      unew[i]=upast[i]-c*dt*(upast[i]-upast[i-1])/dx;

    }
    for (i=0;i<nx;i++){
      upast[i]=unew[i];

    }
  }
     return 0;
}
