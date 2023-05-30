#include<string>
#include<iostream>

#include "animales.cpp"

class gato :Animales 
{
    private:
    int vidas ;
    bool maulla;
    bool is_domesticado ;
    
    public:
    Gato(int _vida, string familia):Animal(_familia){
        vidas=_vida;


    }
    //getter and setter 
    int getvidas()
    {
        
    }
}

