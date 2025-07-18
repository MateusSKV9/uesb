package jogo_de_trap;

import java.awt.Graphics;
import java.awt.Rectangle;

public abstract class Objeto {
    protected int x, y, width, height;

    public Objeto(int x, int y, int width, int height) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    public abstract void draw(Graphics g);

    public Rectangle getBounds() {
        return new Rectangle(x, y, width, height);
    }
}
