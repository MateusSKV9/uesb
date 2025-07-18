package jogo_de_trap;

import java.awt.*;
import javax.swing.ImageIcon;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.awt.Rectangle;

public class Espinhos extends Objeto {

    private Image[] sprites;
    private int Index = 0;
    private int ContFrame = 0;
    private int Temporizador = 30;

    private boolean debug = false;
    public boolean visible = true;

    public Espinhos(int x, int y, int width, int height) {
        super(x, y, width, height);

        sprites = new Image[] {
                new ImageIcon(getClass().getResource("/assets/espinhoSprite/espinho1.png")).getImage(),
                new ImageIcon(getClass().getResource("/assets/espinhoSprite/espinho2.png")).getImage(),
                new ImageIcon(getClass().getResource("/assets/espinhoSprite/espinho3.png")).getImage(),
                new ImageIcon(getClass().getResource("/assets/espinhoSprite/espinho4.png")).getImage()
        };
    }

    public void update() {
        ContFrame++;
        if (ContFrame >= Temporizador) {
            Index = (Index + 1) % sprites.length;
            ContFrame = 0;
        }
    }

    public boolean checkCollision(Player player) {

        if (Index == 3 || Index == 2 || Index == 1) {
            Rectangle playerBounds = new Rectangle(player.x, player.y, player.width, player.height);
            return getBounds().intersects(playerBounds);
        }
        return false;
    }

    public Rectangle getBounds() {
        return new Rectangle(x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        if (visible && sprites != null && sprites[Index] != null) {
            g.drawImage(sprites[Index], x, y, width, height, null);
        }
    }

    public void setDebug(boolean debug) {
        this.debug = debug;
    }

    public void setVisible(boolean visible) {
        this.visible = visible;
    }
}