import java.util.Scanner;
public class ParesImparesMedia {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);


        int totalNumeros = 0;
        int pares = 0;
        int impares = 0;

        double soma = 0;
        double somaPares = 0;
        double somaImpares = 0;

        
        while(true){
            System.out.println("Digite um número positivo: ");
            double numero = scan.nextDouble();

            if(numero == 0){
                break;
            }

            totalNumeros++;
            soma += numero;

            if(numero % 2 == 0){
                pares++;
                somaPares += numero;
            }else{
                impares++;
                somaImpares += numero;
            }
        }
        double media = soma / totalNumeros;
        double mediaImpares = somaImpares / impares;
        double mediaPares = somaPares / pares;

        System.out.println("A quantidade total de números é: " + totalNumeros);
        System.out.println("A quantidade de números pares é: " + pares);
        System.out.println("A quantidade de números impares é: " + impares);
        System.out.println("A média total dos números é: " + media);
        System.out.println("A média dos números pares é: " + mediaPares);
        System.out.println("A média dos números impares é: " + mediaImpares);

        scan.close();
    }
}
