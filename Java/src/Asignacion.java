public class Asignacion
{
    // se declaran los atributos privados
    private int numero;
    private String texto;
    
    public Asignacion()
    {
        // inicializo los valores por defecto a los atributos en el constructor
        numero = 0;
        texto = "";
    }

    // metodo para modificar el numero
    public void setNumero(int n)
    {
        numero = n;
    }

    // metodo para obtener el numero
    public int getNumero()
    {
        return numero;
    }

    // metodo para modificar el texto
    public void setTexto(String n)
    {
        texto = n;
    }

    // metodo para obtener el texto
    public String getTexto()
    {
        return texto;
    }
}