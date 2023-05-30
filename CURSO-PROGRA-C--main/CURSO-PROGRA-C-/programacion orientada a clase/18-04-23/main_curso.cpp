#include <iostream>
#include <math.h>
#include "curso.cpp"
using namespace std;
int main(){
    curso curs_1("0001","programacion basica", 4);
    curso curs_2("0001","diseño de bd", 3);
    curso curs_3("0001","sofware I", 2);
    
    /*float not1, not2 , not3;
    //for(int i=0 ; i<3; i++){
        cout<<"ingrese las notas para el curso :"<<curs_1.getdescripcion();
        cin>>not1;
        cin>>not2;
        cin>>not3;
        curs_1.setNota1(not1);
        curs_1.setNota2(not2);
        curs_1.setNota3(not3);
   // }
    cout<<"el promedio es :"<< curs_1.promedio();
    //arreglos 
   // forma 1 llamar al constructor 
    curso cursos[3]= {curso("0001","programacion Basica", 4),curso("0001","diseño de bd", 3),curso("0001","sofware I", 2)};
     //forma 2 llamar al objeto */

     curso cursos[3]= {curs_1, curs_2, curs_3};
    float not1, not2, not3;
    for(int i=0; i<3; i++){
        cout<<"El curso es: " << cursos[i].getdescripcion() <<"\n";
        cout<<"ingrese las notas para el curso : " << cursos[i].getdescripcion();
        cin>>not1;
        cin>>not2;
        cin>>not3;
        cursos[i].setNota1(not1);
        cursos[i].setNota2(not3);
        cursos[i].setNota3(not3);
    }

    return 0;
