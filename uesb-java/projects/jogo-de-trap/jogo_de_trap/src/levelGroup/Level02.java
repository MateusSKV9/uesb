package levelGroup;

import jogo_de_trap.Level;
import jogo_de_trap.Pistao;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;

public class Level02 extends Level {
    private Player player;

    private static int[][] mapa = {
            { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
            { 0, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 111, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 4 },
            { 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 6, 0, 4 },
            { 0, 0, 3, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 3, 0, 0, 6, 4 },
            { 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 112 },
            { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 111, 0, 112 },
            { 0, 0, 0, 0, 2, 0, 0, 0, 3, 3, 6, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 11, 1, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 3, 11, 11, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level02(Player player) {
        super(3);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "02. Ah, você tava aí, safado?";
        this.setTitlePos(titleX, titleY - 5);
    }

    @Override
    protected void designTraps() {
        Pistao pt1 = (Pistao) mapaObjetos[9][10];
        pt1.forca = 1.9f;

        Pistao pt2 = (Pistao) mapaObjetos[6][14];
        pt2.forca = 0.9f;
    }

}
