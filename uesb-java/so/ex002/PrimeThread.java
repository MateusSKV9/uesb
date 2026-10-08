public class PrimeThread extends Thread {

  private int[] array;
  private int inicio;
  private int fim;
  private int quantidade;

  public PrimeThread(int[] array, int inicio, int fim) {
      this.array = array;
      this.inicio = inicio;
      this.fim = fim;
      this.quantidade = 0;
  }

  @Override
  public void run() {
      for (int i = inicio; i < fim; i++) {
          if (isPrime(array[i])) {
              quantidade++;
          }
      }
  }

  public int getQuantidade() {
      return quantidade;
  }

  private boolean isPrime(int n) {

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