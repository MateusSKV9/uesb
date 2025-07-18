package jogo_de_trap;

import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;

public class Som {
    private Clip clip;

    public void tocar(String path, float volumeDb) {
        try {
            AudioInputStream audioInputStream = AudioSystem.getAudioInputStream(new File(path));
            clip = AudioSystem.getClip();
            clip.open(audioInputStream);

            // Volume
            FloatControl volume = (FloatControl) clip.getControl(FloatControl.Type.MASTER_GAIN);
            volume.setValue(volumeDb);

            clip.loop(Clip.LOOP_CONTINUOUSLY); // Loop 
            clip.start();
        } catch (UnsupportedAudioFileException | IOException | LineUnavailableException e) {
            e.printStackTrace();
        }
    }

    public void parar() {
        if (clip != null && clip.isRunning()) {
            clip.stop();
            clip.close();
        }
    }
}
