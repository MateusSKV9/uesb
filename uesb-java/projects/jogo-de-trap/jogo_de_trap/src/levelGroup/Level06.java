package levelGroup;

import jogo_de_trap.Level;
import jogo_de_trap.Objeto;
import jogo_de_trap.Platform;
import jogo_de_trap.Pistao;

import java.awt.Color;
import java.util.ArrayList;

import jogo_de_trap.Espinhos;
import jogo_de_trap.EspinhosP;
import jogo_de_trap.Gravity;
import jogo_de_trap.Laser;
import jogo_de_trap.Player;

public class Level06 extends Level {

    Player player;
    Gravity g;
    private boolean ativo = true;

    private static int[][] mapa = {
            { 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4 },
            { 4, 9, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 0, 0, 11 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11 },
            { 1, 1, 1, 1, 1, 11, 11, 11, 11, 11, 11, 11, 1, 1, 5, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level06(Player player) {
        super(6);
        this.player = player;
        this.player.level = this;
        this.g = player.g;

        designTraps();
        monitorarPulo();

        this.titulo = "06. Eita, um bug?...";
    }

    @Override
    protected void designTraps() {

        Pistao pF = (Pistao) mapaObjetos[11][14];
        pF.forca = 2f;

        EspinhosP esp = (EspinhosP) mapaObjetos[10][15];
        esp.visible = false;

        EspinhosP esp2 = (EspinhosP) mapaObjetos[1][15];
        esp2.visible = false;

        ArrayList<Laser> lasers = new ArrayList<>();

        for (int i = 1; i <= 12; i++) {
            lasers.add((Laser) mapaObjetos[1][i]);
        }

        for (Laser l : lasers) {
            laserDesce(l, l.getY(), 500, 2);
        }

    } // -----------------------------

    private void laserDesce(Laser laser, int altuMin, int altMax, int vel) {
        new Thread(() -> {
            try {
                boolean subindo = true;
                while (true) {
                    if (subindo) {
                        laser.setY(laser.getY() - vel);
                        if (laser.getY() <= altuMin) {
                            subindo = false;
                            System.out.println(laser.getY());
                        }
                    } else {
                        laser.setY(laser.getY() + vel);
                        if (laser.getY() >= altMax) {
                            subindo = true;
                        }
                    }

                    Thread.sleep(20); // suavidade
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }).start();
    }// -----------------------------

    private void monitorarPulo() {
        new Thread(() -> {
            while (ativo) {
                if (player.wantToJump && player.onGround) {
                    if (g.getGravity() != 0) {
                        g.setGravity(0);
                        g.setPulo(-500);
                        setTitulo("06. Eita, um bug?... Não, é o jogo!");
                    }
                    player.velY = -15;
                    player.jumping = true;
                    player.onGround = false;
                    player.wantToJump = false;

                    // RESET DE ESTADO APÓS 2 SEGUNDOS
                    new Thread(() -> {
                        try {
                            Thread.sleep(3800);
                            g.setGravity(1);
                            player.onGround = true;
                            player.jumping = false;
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    }).start();
                }

                try {
                    Thread.sleep(20);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    @Override
    public void pararThread() {
        ativo = false;
    }
}
