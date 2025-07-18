package levelGroup;

import jogo_de_trap.Level;
import jogo_de_trap.Platform;
import jogo_de_trap.Pistao;

import java.util.ArrayList;

import jogo_de_trap.Espinhos;
import jogo_de_trap.EspinhosP;
import jogo_de_trap.Gravity;
import jogo_de_trap.Laser;
import jogo_de_trap.Player;

public class Level03 extends Level {

    Player player;
    Gravity g;

    private EspinhosP espInv1;
    private EspinhosP espInv2;

    private static int[][] mapa = {
            { 9, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 4 },
            { 0, 0, 0, 4, 0, 0, 0, 1, 113, 0, 0, 3, 0, 0, 0, 4 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 4 },
            { 0, 0, 5, 4, 11, 5, 11, 4, 5, 11, 0, 4, 11, 11, 5, 4 },
            { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level03(Player player) {
        super(3);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "03. Um pouco mais pra direita";
        this.setTitlePos(titleX, 70);
    }

    @Override
    protected void designTraps() {

        Pistao p1 = (Pistao) mapaObjetos[10][2];
        p1.forca = 1.35f;
        Pistao p2 = (Pistao) mapaObjetos[10][5];
        p2.forca = 1.47f;
        Pistao p3 = (Pistao) mapaObjetos[10][8];
        p3.forca = 1.45f;

        espInv1 = (EspinhosP) mapaObjetos[4][8];

        espInv2 = (EspinhosP) mapaObjetos[3][11];

        espInv1.setVisible(false);
        espInv2.setVisible(false);

        player.g.setPulo(-90);
    } // -----------------------------

}
