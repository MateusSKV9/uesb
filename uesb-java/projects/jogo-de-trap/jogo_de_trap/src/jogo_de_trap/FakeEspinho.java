package jogo_de_trap;

import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.awt.Rectangle;
import javax.imageio.ImageIO;

public class FakeEspinho extends Objeto {

    private BufferedImage sprite;
    private boolean active = true;
    private boolean debug = false;
    public boolean visible = true;
    int tipo;

    public FakeEspinho(int x, int y, int width, int height, int tipo) {
        super(x, y, width, height);

        String path = switch (tipo) {
            case 999 -> "/assets/espinhoSprite/espinho4.png";
            case 991 -> "/assets/espinhoSprite/espinho-top.png";
            case 992 -> "/assets/espinhoSprite/espinho-right.png";
            case 993 -> "/assets/espinhoSprite/espinho-left.png";

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

    public Rectangle getBounds() {
        return new Rectangle(x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        if (visible) {
            if (sprite != null) {
                g.drawImage(sprite, x, y, width, height, null);
            } else if (debug) {
                g.setColor(Color.RED);
                g.fillRect(x, y, width, height);
            }
        }
    }

}
