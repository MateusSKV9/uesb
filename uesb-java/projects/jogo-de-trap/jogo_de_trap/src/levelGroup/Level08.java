package levelGroup;

import jogo_de_trap.Level;
import jogo_de_trap.Pistao;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;

public class Level08 extends Level {
    private Player player;

    private static int[][] mapa = {
            { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
            { 9, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8 },
            { 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112 },
            { 113, 0, 0, 0, 6, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 6, 0, 0 },
            { 113, 0, 0, 112, 3, 3, 3, 113, 0, 0, 6, 0, 0, 0, 0, 00 },
            { 113, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 3, 0, 0, 0, 112 },
            { 0, 0, 0, 4, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 112, 3, 3, 3, 0, 3, 0, 112 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 6, 11, 1, 1, 6, 11, 1, 11, 1, 11, 1, 11, 1, 11, 6, 6 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level08(Player player) {
        super(3);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "08. De olho no pixel!";
        this.setTitlePos(titleX, titleY - 10);
    }

    @Override
    protected void designTraps() {
        Pistao pt1 = (Pistao) mapaObjetos[11][0];
        pt1.forca = 1.45f;

        Pistao pt3 = (Pistao) mapaObjetos[11][14];
        pt3.forca = 3f;

        Pistao pt4 = (Pistao) mapaObjetos[11][15];
        pt4.forca = 3f;

        Pistao pt5 = (Pistao) mapaObjetos[3][6];
        pt5.forca = 0.1f;

        Pistao pt6 = (Pistao) mapaObjetos[11][4];
        pt6.forca = 1.05f;
    }

}
