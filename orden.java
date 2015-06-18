import java.util.Scanner;

    public class Autos {
    private Scanner teclado;
    private String[] autos;

    public void leerDatos() {
         teclado=new Scanner(System.in);
         autos=new String[5];
         for(int i=0;i<autos.length;i++) {
             System.out.println("Ingrese la marca del auto:");
             autos[i]=teclado.next();
         }
     }

     public void ordenar() {
         for(int j=0;j<4;j++) {
             for(int i=0;i<4-j;i++) {
                 if (autos[i].compareTo(autos[i+1])>0) {
                     String aux;
                     aux=autos[i];
                     autos[i]=autos[i+1];
                     autos[i+1]=aux;
                 }
             }
         }
     }
  
     public void imprimirInfo() {
      System.out.println("AUTOS:");
      System.out.println("Modelo A - Z");
         for(int i=0;i<autos.length;i++) {
             System.out.println(autos[i]);
         }
     }

     public static void main(String[] ar) {
         Autos aut=new Autos();
         aut.leerDatos();
         aut.ordenar();
         aut.imprimirInfo();
     }

 }
