package jogo_de_trap;

import java.awt.*;
import java.util.ArrayList;

import levelGroup.Level03;

import java.awt.Rectangle;

public abstract class Level {
    private static final int TILE_SIZE = 50;
    private static final int LIN = 600 / TILE_SIZE; // 12
    private static final int COLS = 800 / TILE_SIZE; // 16
    protected Objeto[][] mapaObjetos = new Objeto[LIN][COLS];

    ArrayList<Platform> platforms = new ArrayList<>();
    ArrayList<Laser> lasers = new ArrayList<>();
    ArrayList<Pistao> pistoes = new ArrayList<>();
    ArrayList<Espinhos> espinhos = new ArrayList<>();
    ArrayList<EspinhosP> espinhosP = new ArrayList<>();
    ArrayList<FakeEspinho> fakeEspinho = new ArrayList<>();

    ////////////// TITULO
    protected String titulo = "";
    protected Color cortitle = Color.WHITE;
    protected int sizeTitle = 27;
    protected int titleX = 60;
    protected int titleY = 43;

    private boolean ativo = true;

    public Level(int number) {
        carregarMapa(getMapa());
    }

    private void carregarMapa(int[][] mapa) {
        for (int row = 0; row < LIN; row++) {
            for (int col = 0; col < COLS; col++) {
                int valor = mapa[row][col];
                int x = col * TILE_SIZE;
                int y = row * TILE_SIZE;

                Objeto obj = criarObjetoPorCodigo(valor, x, y);
                if (obj != null) {
                    mapaObjetos[row][col] = obj;

                    if (obj instanceof Platform) {
                        platforms.add((Platform) obj);
                    } else if (obj instanceof Laser) {
                        lasers.add((Laser) obj);
                    } else if (obj instanceof Pistao) {
                        pistoes.add((Pistao) obj);
                    } else if (obj instanceof Espinhos) {
                        espinhos.add((Espinhos) obj);
                    } else if (obj instanceof EspinhosP) {
                        espinhosP.add((EspinhosP) obj);
                    } else if (obj instanceof FakeEspinho) {
                        fakeEspinho.add((FakeEspinho) obj);
                    }
                }

            }
        }
    }

    public void draw(Graphics g) {
        for (Platform p : platforms)
            p.draw(g);

        for (Laser t : lasers)
            t.draw(g);

        for (Pistao pistao : pistoes)
            pistao.draw(g);

        for (Espinhos espinho : espinhos)
            espinho.draw(g);

        for (EspinhosP espinhosP : espinhosP)
            espinhosP.draw(g);

        for (FakeEspinho fakeEspinho : fakeEspinho)
            fakeEspinho.draw(g);
    }

    public boolean checkLaserCollision(Player player) {
        for (Laser l : lasers) {
            if (l.checkCollision(player))
                return true;
        }
        return false;
    }

    public void checkPistaoCollision(Player player) {
        Rectangle playerBounds = new Rectangle(player.x, player.y, player.width, player.height);

        for (Pistao pistao : pistoes) {
            Rectangle pistaoBounds = pistao.getBaseBounds();

            if (playerBounds.intersects(pistaoBounds)) {
                // Colisão por cima
                if (player.y + player.height - player.velY <= pistaoBounds.y) {
                    player.y = pistaoBounds.y - player.height;
                    player.velY = 0;
                    player.jumping = false;
                    player.onGround = true;
                } else if (player.y - player.velY >= pistaoBounds.y + pistaoBounds.height) {
                    // Colisão por baixo
                    player.y = pistaoBounds.y + pistaoBounds.height;
                    player.velY = 0;
                } else {
                    // Colisão lateral
                    if (player.x + player.width - player.velX <= pistaoBounds.x) {
                        player.x = pistaoBounds.x - player.width;
                    } else if (player.x - player.velX >= pistaoBounds.x + pistaoBounds.width) {
                        player.x = pistaoBounds.x + pistaoBounds.width;
                    }
                }
            }
        }
    }

    public boolean checkEspinhosCollision(Player player) {
        for (Espinhos l : espinhos) {
            if (l.checkCollision(player))
                return true;
        }
        return false;
    }

    public boolean checkEspinhosPCollision(Player player) {

        for (EspinhosP l : espinhosP) {
            if (l.checkCollision(player)) {

                if (!l.isVisible()) {
                    l.setVisible(true);

                    // Mostra o espinho quando encostar nele
                    new Thread(() -> {
                        try {
                            Thread.sleep(300);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        l.setVisible(false);
                    }).start();
                }

                return true;
            }
        }
        return false;
    }

    public void checkPlatformCollision(Player player) {
        Rectangle playerBounds = new Rectangle(player.x, player.y, player.width, player.height);
        player.onGround = false;

        for (Platform p : platforms) {
            Rectangle platformBounds = p.getBounds();

            if (playerBounds.intersects(platformBounds)) {
                if (player.y + player.height - player.velY <= p.y) {
                    // colisão por cima
                    player.y = p.y - player.height;
                    player.velY = 0;
                    player.jumping = false;
                    player.onGround = true;
                } else if (player.y - player.velY >= p.y + p.height) {
                    // colisão por baixo
                    player.y = p.y + p.height;
                    player.velY = 0;
                }

                // Verificar colisão horizontal
                if (player.x + player.width >= p.x && player.x <= p.x + p.width) {
                    // Colisão pela esquerda
                    if (player.x + player.width - player.velX <= p.x) {
                        player.x = p.x - player.width;
                    }
                    // Colisão pela direita
                    else if (player.x - player.velX >= p.x + p.width) {
                        player.x = p.x + p.width;
                    }
                }
            }
        }
    }

    protected Objeto criarObjetoPorCodigo(int tipo, int x, int y) {

        switch (tipo) {
            case 1, 2, 3, 4:
                return new Platform(x, y, TILE_SIZE, TILE_SIZE, tipo);
            case 5: // pistao normal
                return new Pistao(x, y, TILE_SIZE, TILE_SIZE, 1, false);
            case 6: // pistao camuflado
                return new Pistao(x, y, TILE_SIZE, TILE_SIZE, 1, true);
            case 7: // feixe de laser
                return new Laser(x, y + 15, TILE_SIZE, 20, tipo);
            case 36: // feixe de laser
                return new Laser(x + 1, y + 15, TILE_SIZE, 60, tipo);
            case 8, 9: // base do laser
                return new Laser(x, y, TILE_SIZE, TILE_SIZE, tipo);
            case 35, 37: // base do laser
                return new Laser(x, y, TILE_SIZE, 75, tipo);
            case 10: // espinhos
                return new Espinhos(x, y + 30, TILE_SIZE, TILE_SIZE);
            case 11: // espinhosP
                return new EspinhosP(x, y + 30, TILE_SIZE, TILE_SIZE, tipo);
            case 111: // espinhosP
                return new EspinhosP(x, y - 10, TILE_SIZE, TILE_SIZE, tipo);
            case 112, 113: // espinhosP
                return new EspinhosP(x, y, TILE_SIZE, TILE_SIZE, tipo);
            case 999, 992, 993: // fakeEspinho
                return new FakeEspinho(x, y + 30, TILE_SIZE, TILE_SIZE, tipo);
            case 991: // fakeEspinho
                return new FakeEspinho(x, y - 10, TILE_SIZE, TILE_SIZE, tipo);
            default:
                return null;
        }

    }

    public void pararThread() {
        ativo = false;
    }

    public void updatePistaos(Player p) {
        for (Pistao pistao : pistoes) {
            pistao.update(p);
        }
    }

    public void updateEspinhos() {
        for (Espinhos espinho : espinhos) {
            espinho.update();
        }
    }

    protected abstract int[][] getMapa();

    protected abstract void designTraps();

    public Objeto[][] getMapaObjetos() {
        return mapaObjetos;
    }

    // TITULO
    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public void setCorTitle(Color cor) {
        this.cortitle = cor;
    }

    public void setSizeTitle(int tamanho) {
        this.sizeTitle = tamanho;
    }

    public void setTitlePos(int x, int y) {
        this.titleX = x;
        this.titleY = y;
    }

    public Color getCorTitle() {
        return cortitle;
    }

    public int getSizeTitle() {
        return sizeTitle;
    }

    public int getTitleX() {
        return titleX;
    }

    public int getTitleY() {
        return titleY;
    }

}
