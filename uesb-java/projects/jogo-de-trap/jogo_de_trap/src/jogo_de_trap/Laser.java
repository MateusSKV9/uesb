package jogo_de_trap;

import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.awt.Rectangle;

import javax.imageio.ImageIO;

public class Laser extends Objeto {
    boolean active = true;
    boolean debug = false; // altera para true se quiser ver as armadilhas
    public boolean visible = true;

    private BufferedImage sprite;

    public Laser(int x, int y, int width, int height, int tipo) {
        super(x, y, width, height);

        String path = switch (tipo) {
            case 7 -> "/assets/laserSprites/laser1.png";
            case 8 -> "/assets/laserSprites/laserBase1Dir.png";
            case 9 -> "/assets/laserSprites/laserBase1Esq.png";
            case 72 -> "/assets/laserSprites/laser2.png";
            case 82 -> "/assets/laserSprites/laserBase2Dir.png";
            case 92 -> "/assets/laserSprites/laserBase2Esq.png";

            case 35 -> "/assets/laserSprites/laserBase1Top.png";
            case 36 -> "/assets/laserSprites/laser1Vertical.png";
            case 37 -> "/assets/laserSprites/laserBase1Bottom.png";
            default -> throw new IllegalArgumentException("Tipo" + tipo + "é inválido");
        };

        if (path != null) {
            try {
                sprite = ImageIO.read(getClass().getResourceAsStream(path));
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }

    public boolean checkCollision(Player player) {
        Rectangle playerBounds = new Rectangle(player.x, player.y, player.width, player.height);
        return getBounds().intersects(playerBounds);
    }

    public Rectangle getBounds() {
        return new Rectangle(x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        if (visible || debug && sprite != null) {
            g.drawImage(sprite, x, y, width, height, null);
        }
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setVisible(boolean visible) {
        this.visible = visible;
    }

    public boolean isVisible() {
        return visible;
    }
}
