package jogo_de_trap;

import jogo_de_trap.Platform;
import jogo_de_trap.Player;
import jogo_de_trap.Objeto;

import java.awt.Rectangle;
import java.util.ArrayList;
import java.util.List;

public class ColisionManager {

    // Leitura do mapa
    public static List<Objeto> extrairObjetos(Objeto[][] mapa) {
        List<Objeto> objetos = new ArrayList<>();
        for (int i = 0; i < mapa.length; i++) {
            for (int j = 0; j < mapa[i].length; j++) {
                if (mapa[i][j] != null) {
                    objetos.add(mapa[i][j]);
                }
            }
        }
        return objetos;
    }

    public static void checarColisoes(Player player, Objeto[][] mapaObjetos, int direcaoGravidade) {
        if (direcaoGravidade != -1)
            return; // Só age se gravidade for -1

        List<Objeto> objetos = extrairObjetos(mapaObjetos);

        
        Rectangle topoDoPlayer = new Rectangle(player.x, player.y, player.width, player.height / 2);

        Rectangle baseDoPlayer = new Rectangle(player.x, player.y + player.height - 5, player.width, 5);

        // Verificar colisões
        for (Objeto obj : objetos) {
            if (topoDoPlayer.intersects(obj.getBounds())) {
                // Ajusta a posição do player pra ficar embaixo da plataforma
                player.y = obj.y + obj.height;
                player.velY = 0;
                player.onGround = true;
                // System.out.println("Colidiu com teto (gravidade invertida)");
            }

            if (topoDoPlayer.intersects(obj.getBounds())) {
                player.y = obj.y + obj.height;
                player.velY = 0;
                player.onGround = true;
            }

        }
    }
}
