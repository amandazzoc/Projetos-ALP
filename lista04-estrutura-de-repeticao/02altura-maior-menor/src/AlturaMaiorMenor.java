import java.util.Scanner;
public class AlturaMaiorMenor {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        double maior = 0;
        double menor = 100;
        double altura = 0;
        
        for(int i = 1; i <= 15; i++){
            System.out.println("Digite a altura da pessoa " + i);
            altura = scan.nextDouble();

            if(altura < menor){
                menor = altura;
            }
            if(altura > maior){
                maior = altura;
            }
        }
        System.out.println("A maior altura é: " + maior);
        System.out.println("A menor altura é: " + menor);
        scan.close();
    }
}
