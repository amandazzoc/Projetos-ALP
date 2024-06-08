import java.util.Scanner;
public class Tabuada {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);

        System.out.println("Quer ver qual tabuada? (1 a 10)");
        int N = scan.nextInt();

        for(int i = 0; i <= 10; i++){
            int calculo = i * N;
            System.out.println(i + " x " + N + " = " + calculo);
        }
        scan.close();
    }
}
