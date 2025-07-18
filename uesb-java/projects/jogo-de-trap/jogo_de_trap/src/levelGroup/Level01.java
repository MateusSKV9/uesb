package levelGroup;

import jogo_de_trap.Gravity;
import jogo_de_trap.Level;
import jogo_de_trap.Platform;
import jogo_de_trap.Pistao;
import jogo_de_trap.Player;
import jogo_de_trap.Objeto;
import jogo_de_trap.EspinhosP;

public class Level01 extends Level {

    private Player player;

    private static int[][] mapa = {
            { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 111, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 3, 3, 3, 3, 0, 3, 1, 1, 1, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 4 },
            { 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 3, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 4 },
            { 5, 0, 0, 11, 0, 0, 11, 0, 11, 0, 0, 0, 0, 0, 5, 4 },
            { 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    public Level01(Player player) {
        super(1);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "01. Traps, TRAPS, E MAIS TRAPS!";
        this.setTitlePos(titleX, titleY - 15);
    }

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    @Override
    protected void designTraps() {

        Pistao pt1 = (Pistao) mapaObjetos[10][14];
        pt1.forca = 1.7f;
        Pistao pt3 = (Pistao) mapaObjetos[10][0];
        pt3.forca = 3.0f;

        // gravidade padrão
        player.g.setGravity(1.0);
        player.g.setPulo(-15);

        EspinhosP spInv1 = (EspinhosP) mapaObjetos[1][0];
        EspinhosP spInv2 = (EspinhosP) mapaObjetos[1][1];
        EspinhosP spInv3 = (EspinhosP) mapaObjetos[4][14];
        EspinhosP spInv5 = (EspinhosP) mapaObjetos[2][5];

        spInv1.setVisible(false);
        spInv2.setVisible(false);
        spInv3.setVisible(false);
        spInv5.setVisible(false);
    }
}
