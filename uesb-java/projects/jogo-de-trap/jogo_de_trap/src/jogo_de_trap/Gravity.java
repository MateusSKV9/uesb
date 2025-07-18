package jogo_de_trap;

public class Gravity {

    public double valor = 1.0; // gravidade normal
    public double forcaPulo = -15;

    public Gravity(double vInit) {
        this.valor = vInit; // valor inicial da gravidade
    }

    public void setGravity(double g) {
        this.valor = g;
    }

    public void setPulo(double p) {
        this.forcaPulo = p;
    }

    public double getGravity() {
        return this.valor;
    }

    public double getForcaPulo() {
        return this.forcaPulo;
    }

    public int getDirection() {
        return valor >= 0 ? 1 : -1;
    }
}
