import java.util.Scanner;
public class NumerosIntervalos {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        int d0a25 = 0;
        int d26a50 = 0;
        int d51a75 = 0;
        int d76a100 = 0;

        while(true){
            System.out.println("Digite um número positivo: ");
            double numero = scan.nextDouble();

            if(numero < 0){
                break;
            }

            if(numero >= 0 && numero <= 25){
                d0a25++;
            }else if(numero >= 26 && numero <= 50){
                d26a50++;
            }else if(numero >= 51 && numero <= 75){
                d51a75++;
            }else if(numero >= 76 && numero <= 100){
                d76a100++;
            }else{
                System.out.println("O número não está em nenhum dos intervalos");
            }
        }
        System.out.println("Números no intervalo entre 0-25: " + d0a25);
        System.out.println("Números no intervalo entre 26-50: " + d26a50);
        System.out.println("Números no intervalo entre 51-75: " + d51a75);
        System.out.println("Números no intervalo entre 76-100: " + d76a100);
        scan.close();
    }
}
