import java.util.Random;

public class Programa2 {

    public static void main(String[] args) throws InterruptedException {

        int[] array = new int[2000000];
        Random random = new Random();

        // Preenche o array
        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(array.length) + 1;
        }

        long inicio = System.nanoTime();

        int tamanhoParte = array.length / 4;

        PrimeThread t1 = new PrimeThread(array, 0, tamanhoParte);
        PrimeThread t2 = new PrimeThread(array, tamanhoParte, tamanhoParte * 2);
        PrimeThread t3 = new PrimeThread(array, tamanhoParte * 2, tamanhoParte * 3);
        PrimeThread t4 = new PrimeThread(array, tamanhoParte * 3, array.length);

        t1.start();
        t2.start();
        t3.start();
        t4.start();

        // Espera todas as threads terminarem
        t1.join();
        t2.join();
        t3.join();
        t4.join();

        int qtd = t1.getQuantidade()
                + t2.getQuantidade()
                + t3.getQuantidade()
                + t4.getQuantidade();

        long fim = System.nanoTime();

        long duracao = fim - inicio;

        double tempoMs = duracao / 1_000_000.0;
        double tempoSegundos = duracao / 1_000_000_000.0;

        System.out.println("Quantidade de primos: " + qtd);
        System.out.printf("Tempo: %.3f ms%n", tempoMs);
        System.out.printf("Tempo: %.3f s%n", tempoSegundos);
    }
}