import java.util.Random;

public class Programa {

    public static void main(String[] args) {

        long inicio = System.nanoTime();

        int qtd = 0;
        int[] array = new int[2000000];
        Random random = new Random();

        // Preenche o array com números aleatórios
        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(array.length) + 1;
        }

        Programa program = new Programa();

        // Conta quantos números são primos
        for (int i = 0; i < array.length; i++) {
            if (program.isPrime(array[i])) {
                qtd++;
            }
        }

        long fim = System.nanoTime();

        long duracao = fim - inicio;

        double tempoMs = duracao / 1_000_000.0;
        double tempoSegundos = duracao / 1_000_000_000.0;

        long segundos = duracao / 1_000_000_000;
        long milissegundos = (duracao % 1_000_000_000) / 1_000_000;

        System.out.println("Quantidade de primos: " + qtd);
        System.out.printf("Tempo: %.3f ms%n", tempoMs);
        System.out.printf("Tempo: %.3f s%n", tempoSegundos);
        System.out.println("Tempo formatado: " + segundos + " s " + milissegundos + " ms");
    }

    public boolean isPrime(int n) {

        if (n <= 1)
            return false;

        if (n == 2)
            return true;

        if (n % 2 == 0)
            return false;

        int limite = (int) Math.sqrt(n);

        for (int i = 3; i <= limite; i += 2) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
}