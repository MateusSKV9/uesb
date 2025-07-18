package jogo_de_trap;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class StartPanel extends JPanel {
    private JFrame frame;

    public StartPanel(JFrame frame) {
        this.frame = frame;
        this.setLayout(null);

        ImageIcon resizedIcon = new ImageIcon(
                new ImageIcon(getClass().getResource("/assets/btnStart.png"))
                        .getImage().getScaledInstance(180, 70, Image.SCALE_SMOOTH));

        JButton startButton = new JButton(resizedIcon);

        startButton.setOpaque(false);
        startButton.setContentAreaFilled(false);
        startButton.setBorderPainted(false);
        startButton.setFocusPainted(false);

        startButton.setBounds(300, 450, 180, 70);

        startButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                iniciarJogo();
            }
        });
        this.add(startButton);
    }

    private void iniciarJogo() {
        frame.getContentPane().removeAll();
        GamePanel gamePanel = new GamePanel();
        frame.add(gamePanel);
        frame.revalidate();
        frame.repaint();

        gamePanel.requestFocusInWindow();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        ImageIcon icon = new ImageIcon(getClass().getResource("/assets/StartBG.jpg"));
        Image bg = icon.getImage();

        int imgWidth = bg.getWidth(null);
        int imgHeight = bg.getHeight(null);

        int panelWidth = this.getWidth();

        // fiz pa fixar o topo da img no topo do painel
        double scaleFactor = (double) panelWidth / imgWidth;
        int scaleAltura = (int) (imgHeight * scaleFactor) - 110;

        g.drawImage(bg, 0, 0, panelWidth, scaleAltura, null);
    }
}
