class Moto{
    private:
    string modelo;
    int stock;
    public:
    Moto(){}
    Moto(string, int);//entero 
    void mostrar_moto(); // Descomentada
    string getmodelo();
    int getstock();
};

// Implementación de la función mostrar_moto()
void Moto::mostrar_moto(){
    cout << "Modelo: " << modelo << endl;
    cout << "Stock: " << stock << endl;
}
