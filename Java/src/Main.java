
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Asignacion (instanciación)
        Asignacion obj = new Asignacion();
        // declaramos una variable de tipo entero num
        int num;
        // declaramos una variable de tipo string tex
        String tex;
        // pedimos el valor del numero al usuario
        num = Integer.parseInt(JOptionPane.showInputDialog("Digite valor que le asignara al numero"));
        // encapsulamos la variable num
        obj.setNumero(num);
        // pedimos el valor del texto al usuario
        tex = JOptionPane.showInputDialog("Digite valor que le asignara al texto");
        // encapsulamos la variable tex
        obj.setTexto(tex);

        // mostramos en pantalla las asignaciones que se hicieron
        JOptionPane.showMessageDialog(null, "Le ha asignado al numero: " + obj.getNumero());
        JOptionPane.showMessageDialog(null, "Le ha asignado al texto: " + obj.getTexto());
    }
}
