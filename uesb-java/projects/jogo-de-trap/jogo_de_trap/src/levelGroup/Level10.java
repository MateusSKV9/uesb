package levelGroup;

import jogo_de_trap.EspinhosP;
import jogo_de_trap.Level;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;

public class Level10 extends Level {

    Player player;

    private static int[][] mapa = {
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 11, 4 },
            { 4, 4, 4, 4, 0, 4, 4, 4, 4, 4, 0, 0, 4, 4, 4, 4 },
            { 0, 0, 0, 0, 0, 0, 11, 4, 4, 0, 0, 0, 0, 0, 112, 4 },
            { 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 4, 4, 0, 0, 4, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0, 0, 0, 4 },
            { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, 4, 4, 0, 4 },
            { 111, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 4, 11, 4 },
            { 0, 4, 4, 4, 4, 0, 0, 4, 4, 4, 4, 4, 111, 111, 4, 4 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 4 },
            { 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level10(Player player) {
        super(3);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "10. Simples assim ;)";
    }

    @Override
    protected void designTraps() {

        for (int linha = 0; linha < mapaObjetos.length - 1; linha++) {
            for (int coluna = 0; coluna < mapaObjetos[linha].length; coluna++) {
                if (mapaObjetos[linha][coluna] instanceof Platform) {
                    ((Platform) mapaObjetos[linha][coluna]).setVisible(false);
                }
            }
        }

        EspinhosP e1 = (EspinhosP) mapaObjetos[2][8];
        e1.setVisible(false);

        EspinhosP e2 = (EspinhosP) mapaObjetos[2][14];
        e2.setVisible(false);

        EspinhosP e3 = (EspinhosP) mapaObjetos[4][6];
        e3.setVisible(false);

        EspinhosP e4 = (EspinhosP) mapaObjetos[4][14];
        e4.setVisible(false);

        EspinhosP e5 = (EspinhosP) mapaObjetos[8][0];
        e5.setVisible(false);

        EspinhosP e6 = (EspinhosP) mapaObjetos[8][2];
        e6.setVisible(false);

        EspinhosP e7 = (EspinhosP) mapaObjetos[8][14];
        e7.setVisible(false);

        EspinhosP e8 = (EspinhosP) mapaObjetos[9][12];
        e8.setVisible(false);

        EspinhosP e9 = (EspinhosP) mapaObjetos[9][13];
        e9.setVisible(false);

        EspinhosP e10 = (EspinhosP) mapaObjetos[10][14];
        e10.setVisible(false);
    }

}
