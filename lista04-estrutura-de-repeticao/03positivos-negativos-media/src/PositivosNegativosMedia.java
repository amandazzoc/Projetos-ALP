import java.util.Scanner;
public class PositivosNegativosMedia {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        int positivos = 0;
        int negativos = 0;
        int totalNumeros = 0;
        double soma = 0;

        while(true){
            System.out.println("Digite um número negativo ou positivo (se quiser parar digite 0)");
            double numero = scan.nextDouble();

            if(numero == 0){
                break;
            }

            totalNumeros ++;
            soma += numero;
            
            if(numero > 0){
                positivos++;
            }else if(numero < 0){
                negativos++;
            }
        }
        
        double media = soma / totalNumeros;
        double percentualPositivo = ((double)positivos/totalNumeros) * 100;
        double percentualNegativo = ((double)negativos/totalNumeros) * 100;
        
        System.out.println("A quantidade total de números é de: "+ totalNumeros);
        System.out.println("A quantidade de números negativos é de: "+ negativos);
        System.out.println("A quantidade de números positivos é de: "+ positivos);
        System.out.println("A media dos números é de: "+ media);
        System.out.println("O percentual de números positivos em comparação ao total é de: " + percentualPositivo + "%");
        System.out.println("O percentual de números negativos em comparação ao total é de: " + percentualNegativo + "%");
        scan.close();
    }
}
