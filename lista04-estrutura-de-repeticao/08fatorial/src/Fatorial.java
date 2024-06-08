import java.util.Scanner;
public class Fatorial {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        System.out.println("Qual número você quer saber o fatorial?");
        int numero = scan.nextInt();

        int resultado = 1;
        String sequencia = numero + "! = ";

        for (int i = numero; i >= 1; i--) {
            resultado *= i;
            sequencia += i;
            if (i > 1) {
                sequencia += " X ";
            }
        }

        System.out.println(sequencia + " = " + resultado);

        scan.close();
    }
}
