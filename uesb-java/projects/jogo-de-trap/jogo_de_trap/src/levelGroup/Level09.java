package levelGroup;

import jogo_de_trap.Gravity;
import jogo_de_trap.Laser;
import jogo_de_trap.Level;
import jogo_de_trap.Pistao;
import jogo_de_trap.EspinhosP;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;

public class Level09 extends Level {

    Player player;
    Gravity g;

    public final int vel = 3;

    private boolean ativo = true;

    private static int[][] mapa = {
            { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
            { 0, 0, 0, 991, 991, 991, 111, 111, 111, 111, 111, 111, 111, 111, 111, 4 },
            { 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 4, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 11 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 111 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0 },
            { 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 11, 0, 0, 0, 11 },
            { 5, 2, 3, 1, 0, 1, 6, 0, 0, 2, 6, 3, 0, 5, 0, 1 },
            { 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 11, 11, 999, 999 },
            { 1, 1, 2, 3, 3, 1, 1, 3, 6, 1, 1, 3, 1, 1, 1, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level09(Player player) {
        super(9);
        this.player = player;
        this.player.level = this;
        this.g = player.g;

        designTraps();

        this.titulo = "09. Não acredite nos seus olhos";
    }

    @Override
    protected void designTraps() {

        Laser l1 = (Laser) mapaObjetos[3][14];
        Laser l2 = (Laser) mapaObjetos[4][14];
        Laser l3 = (Laser) mapaObjetos[5][14];
        Laser l4 = (Laser) mapaObjetos[6][14];
        Laser l5 = (Laser) mapaObjetos[7][14];
        laserAnda(l1, 0, l1.getX(), vel);
        laserAnda(l2, 0, l2.getX(), vel);
        laserAnda(l3, 0, l3.getX(), vel);
        laserAnda(l4, 0, l4.getX(), vel);
        laserAnda(l5, 0, l5.getX(), vel);

        EspinhosP sp1 = (EspinhosP) mapaObjetos[2][3];
        sp1.visible = false;

        for (int col = 6; col <= 14; col++) {
            if (mapaObjetos[1][col] instanceof EspinhosP) {
                ((EspinhosP) mapaObjetos[1][col]).visible = false;
            }
        }

        EspinhosP spPosPistao = (EspinhosP) mapaObjetos[8][11];
        spPosPistao.visible = false;

        Pistao pistaoPista = (Pistao) mapaObjetos[9][0];
        pistaoPista.forca = 2;

        Pistao pistaoChato = (Pistao) mapaObjetos[9][6];
        pistaoChato.forca = 2;

        Pistao pistaoForte = (Pistao) mapaObjetos[11][8];
        pistaoForte.forca = 3;

        Pistao pistaoMedio = (Pistao) mapaObjetos[9][10];
        pistaoMedio.forca = 1.25f;

        Pistao pistaoFin = (Pistao) mapaObjetos[9][13];

        EspinhosP espFinal1 = (EspinhosP) mapaObjetos[3][15];
        espFinal1.visible = false;
        EspinhosP espFinal2 = (EspinhosP) mapaObjetos[5][15];
        espFinal2.visible = false;
    }

    private void laserAnda(Laser laser, int posMin, int posMax, int vel) {
        new Thread(() -> {
            try {
                boolean indo = true;
                while (true) {
                    if (indo) {
                        laser.setX(laser.getX() + vel);
                        if (laser.getX() >= posMax) {
                            indo = false;
                        }
                    } else {
                        laser.setX(laser.getX() - vel);
                        if (laser.getX() <= posMin) {
                            indo = true;
                        }
                    }

                    Thread.sleep(20); // suavidade do movimento
                }
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }).start();
    }

    @Override
    public void pararThread() {
        ativo = false;
    }

}
