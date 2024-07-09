#include <string>

class libros {
    //atributos
    private:
    string titulo;
    string autor;
    string genero;
    int numEjemplaresDispo;
    int numEjemplaresTotales;

    //metodos
    public:

    void mostrarInfoLibro();
    void actualizarEjemplaresDispo();
    void verificarPrestamo();


}