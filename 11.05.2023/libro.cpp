
#include<string>
using namespace std;
 class Libro{
    protected:
 string codigo_libro;
 string titulo;
 string categoria;
 string autor;
  public :
  Libro(string _codigo_libro="", string _titulo="" , string _categoria="", string _autor=""){
    codigo_libro=_codigo_libro;
    titulo=_titulo;
    categoria=_categoria;
    autor=_autor;
  }
  string getData(){
    return codigo_libro + " " + titulo + "  " + categoria + "  " + autor ;
    
  }

 };