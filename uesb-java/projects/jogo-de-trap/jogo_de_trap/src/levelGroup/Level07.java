package levelGroup;

import jogo_de_trap.EspinhosP;
import jogo_de_trap.Level;
import jogo_de_trap.Pistao;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;

public class Level07 extends Level {

    private EspinhosP espInv1;
    private EspinhosP espInv2;
    private EspinhosP espInv3;
    private Player player;

    private static int[][] mapa = {
            { 111, 111, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 7, 7, 7, 8 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 4, 3, 3, 3, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 3, 3, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 3, 4, 3, 0, 0, 0, 0, 0, 0, 4 },
            { 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 3, 3, 6, 0, 4 },
            { 111, 0, 0, 3, 0, 0, 0, 0, 0, 3, 0, 0, 111, 111, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 11, 0, 0, 0, 3, 4 },
            { 0, 3, 0, 0, 0, 3, 3, 4, 3, 3, 3, 0, 0, 0, 0, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 4, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 11, 4 },
            { 1, 1, 1, 1, 1, 11, 1, 1, 1, 11, 1, 1, 6, 11, 1, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level07(Player player) {
        super(3);
        this.player = player;
        this.player.level = this;
        designTraps();// TODO Auto-generated constructor stub
        this.titulo = "7. Tente de novo!";

    }

    @Override
    protected void designTraps() {

        Pistao p1 = (Pistao) mapaObjetos[5][0];
        p1.forca = 1.0f;
        Pistao p2 = (Pistao) mapaObjetos[11][12];
        p2.forca = 1.47f;
        Pistao p3 = (Pistao) mapaObjetos[5][13];
        p3.forca = 1.45f;

        espInv1 = (EspinhosP) mapaObjetos[10][14];
        espInv2 = (EspinhosP) mapaObjetos[7][10];
        espInv3 = (EspinhosP) mapaObjetos[3][7];

        espInv1.setVisible(false);
        espInv2.setVisible(false);
        espInv3.setVisible(false);

        espInv1.setVisible(false);
        espInv2.setVisible(false);
        espInv3.setVisible(false);

    }

}
