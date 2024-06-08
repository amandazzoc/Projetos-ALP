public class App {
    public static void main(String[] args) throws Exception {
        int soma = 0;

        // Iterar sobre os números de 1 a 500
        for (int i = 1; i <= 500; i+=2) {
            // Verificar se o número é ímpar e múltiplo de três
            if ( i % 3 == 0) {
                // Adicionar o número à soma
                soma += i;
            }
        }

        // Imprimir o valor da soma
        System.out.println("A soma de todos os números ímpares múltiplos de três de 1 a 500 é: " + soma);
    }
}
