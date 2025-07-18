package levelGroup;

import jogo_de_trap.Level;
import jogo_de_trap.Pistao;
import jogo_de_trap.Platform;
import jogo_de_trap.Player;
import jogo_de_trap.Pistao;

import java.awt.event.ActionListener;
import javax.swing.Timer;
import java.awt.event.ActionEvent;

import jogo_de_trap.Espinhos;
import jogo_de_trap.EspinhosP;

public class Level05 extends Level {

    private Player player;

    private Level level;

    private static int[][] mapa = {

            { 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4 },
            { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0 },
            { 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1 },
            { 1, 0, 1, 1, 0, 0, 0, 11, 11, 11, 0, 0, 0, 0, 112, 1 },
            { 1, 9, 7, 8, 2, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 1 },
            { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 0, 0, 0, 0, 0, 11, 11, 11, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 1, 1, 1, 5, 5, 1, 1, 1, 1, 1, 6, 1, 1, 1, 5, 4 }

    };

    @Override
    protected int[][] getMapa() {
        return mapa;
    }

    public Level05(Player player) {
        super(2);
        this.player = player;
        this.player.level = this;
        designTraps();
        this.titulo = "05. Nem tudo se vê";
    }

    @Override
    protected void designTraps() {

        // TITULO: "05. NÃO É COMO VOCE ACHA"

        Pistao pistaoForte = (Pistao) mapaObjetos[11][14];
        pistaoForte.forca = 1.5f;

        Pistao pistCam = (Pistao) mapaObjetos[11][10];
        pistCam.forca = 1.5f;

        EspinhosP spInv1 = (EspinhosP) mapaObjetos[5][7];
        EspinhosP spInv2 = (EspinhosP) mapaObjetos[5][8];
        EspinhosP spInv3 = (EspinhosP) mapaObjetos[5][9];

        EspinhosP spInv4 = (EspinhosP) mapaObjetos[5][14];

        spInv1.setVisible(false);
        spInv2.setVisible(false);
        spInv3.setVisible(false);
        spInv4.setVisible(false);

    }

}
