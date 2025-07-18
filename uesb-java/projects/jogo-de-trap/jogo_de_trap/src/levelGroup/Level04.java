package levelGroup;

import jogo_de_trap.Gravity;
import jogo_de_trap.Level;
import jogo_de_trap.Platform;
import jogo_de_trap.Pistao;

import jogo_de_trap.Player;
import jogo_de_trap.Gravity;

public class Level04 extends Level {

    private Player player;

    public Gravity g;

    private static int[][] mapa = {
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 9, 7, 7, 7, 8, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 11, 0, 0, 0, 0, 0, 0, 0, 5, 11, 11, 5, 11, 11, 11, 0 },
            { 1, 2, 3, 1, 1, 6, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level04(Player player) {
        super(1);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "04. Agora vai...";
        this.setTitlePos(titleX, titleY - 10);
    }

    @Override
    protected void designTraps() {
        Platform p1 = (Platform) mapaObjetos[0][0];
        Platform p2 = (Platform) mapaObjetos[0][1];

        Pistao pt1 = (Pistao) mapaObjetos[11][5];
        pt1.forca = 2f;
        Pistao pt2 = (Pistao) mapaObjetos[11][7];
        pt2.forca = 1.5f;
        Pistao pt3 = (Pistao) mapaObjetos[10][11];
        pt3.forca = 1.53f;
    }
}
