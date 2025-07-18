package jogo_de_trap;

import javax.imageio.ImageIO;
import java.awt.*;
import javax.swing.*;
import java.awt.Rectangle;
import java.awt.image.BufferedImage;

public class Pistao extends Objeto {
    public float forca; // 1, 2, 3

    boolean ativo = false;
    private boolean voltando = false;

    int frameAtual = 0;
    int contFrame = 0;
    int periodoFrames = 3; // tempo entre frames

    BufferedImage[] sprites;

    Player player;

    public Pistao(int x, int y, int width, int height, int forca, boolean camufla) {
        super(x, y, width, height);
        this.forca = forca;
        this.camufla = camufla;

        // Mostra frames de acordo com nivel de força
        int totalFrames = forca == 1 ? 3 : (forca == 2 ? 5 : 7);
        sprites = new BufferedImage[totalFrames];

        String tipoSup = camufla ? "pistaoCam" : "pistaoNormal";

        for (int i = 0; i < totalFrames; i++) {
            try {
                String path = "/assets/pistaoSprites/" + tipoSup + (i + 1) + ".png";
                var stream = getClass().getResourceAsStream(path);

                if (stream == null) {
                    System.out.println("Imagem não encontrada: " + path);
                } else {
                    sprites[i] = ImageIO.read(stream);
                    // System.out.println("Sucesso: " + path);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void update(Player p) {
        this.player = p;
        Rectangle playerBounds = new Rectangle(p.x, p.y, p.width, p.height);
        Rectangle pistaoBounds = new Rectangle(x, y, width, height);

        // se player está em cima, ativa o pistão
        boolean playerAcima = (p.y + p.height <= y + 5) && // pé do player encosta no topo do pistão
                (p.y + p.height >= y - 10) && // limite pra não atravessar
                (p.x + p.width > x && p.x < x + width); // sobreposição horizontal

        if (playerAcima) {
            if (!ativo && !voltando) {
                ativo = true;
            }
            propulsionar();
        }

        if (ativo) {
            contFrame++;
            if (contFrame >= periodoFrames) {
                if (frameAtual < sprites.length - 1) {
                    frameAtual++;
                } else {
                    ativo = false;
                    voltando = true;
                }
                contFrame = 0;
            }
        }

        // retraindo)
        if (voltando) {
            contFrame++;
            if (contFrame >= periodoFrames) {
                if (frameAtual > 0) {
                    frameAtual--;
                } else {
                    voltando = false; // volta
                }
                contFrame = 0;
            }
        }
    }

    private void propulsionar() {
        // se player está em cima, ativa o pistão
        if (player.y + player.height <= y + 10) {
            float impulso = 20;
            player.velY = (int) (-forca * impulso);
            player.jumping = true;
            player.onGround = false;
        }
    }

    @Override
    public void draw(Graphics g) {
        BufferedImage img = sprites[frameAtual];
        if (img == null)
            return;

        int alturaImg = img.getHeight();
        int larguraImg = img.getWidth();

        // Redimensiona SÓ a largura pra caber no TILE_SIZE (50), mantém altura real da
        // imagem
        // MUDAR DEPOIS PARA TITLE_SIZE
        int novaLargura = 50;
        int novaAltura = alturaImg * novaLargura / larguraImg; // preserva proporção original

        // Alinha a base da imagem com a base do tile
        int yVisual = y + 50 - novaAltura;

        g.drawImage(img, x, yVisual, novaLargura, novaAltura, null);
    }

    public Rectangle getBounds() {
        BufferedImage img = sprites[frameAtual];
        int alturaImg = img.getHeight();
        int yVisual = y + height - alturaImg;
        return new Rectangle(x, yVisual, width, alturaImg);
    }

    private boolean camufla;

    public boolean isCamufla() {
        return camufla;
    }

    private final int baseAltura = 30; // Ajusta com base na imagem

    public Rectangle getBaseBounds() {
        // Considera apenas a parte inferior (base azul)
        return new Rectangle(x, y + height - baseAltura, width, baseAltura);
    }

}