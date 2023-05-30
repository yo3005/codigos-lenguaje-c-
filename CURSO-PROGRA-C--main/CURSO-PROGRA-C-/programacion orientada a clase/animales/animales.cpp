#include<iostream>
#include<string>
using namespace std;


class Animal {
    protected:
    string orejas;
    string cola;
    string ojos;
    int nro_patas;
    bool dientes;
    string familia;
    public:
    Animal(string _familia  ){
        familia= _familia;
        //geter and seterr
        string getfamilia(){
            return familia;
        }
        void setfamilia(string _familia){
            familia= _familia;

        }
    }
}
