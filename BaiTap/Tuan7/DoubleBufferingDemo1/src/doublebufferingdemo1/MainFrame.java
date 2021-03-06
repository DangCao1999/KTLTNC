/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package doublebufferingdemo1;

import java.awt.Container;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.lang.System.Logger;
import java.lang.System.Logger.Level;
import java.util.ArrayList;
import javax.swing.ImageIcon;
import javax.swing.JComponent;

/**
 *
 * @author PC
 */
public class MainFrame extends javax.swing.JFrame implements Runnable {

    Container cp;
    Image img, bg;
    ArrayList<Circle> list = new ArrayList<>();

    /**
     * Creates new form MainFrame
     */
    public MainFrame() {
        initComponents();
        img=new ImageIcon(getClass().getResource("/images/hoadao.jpg")).getImage();
        final JComponent com=new JComponent(){

            @Override
            protected void paintComponent(Graphics g) {
                //Tao bg trong bo nho
                bg=this.createImage(this.getWidth(),this.getHeight());
                //Lay doi tuong Graphics cua bg
                Graphics bgg=bg.getGraphics();
                //Ve len bg trong bo nho
                bgg.drawImage(img, 0, 0, this.getWidth(), this.getHeight(), this);
                //list.forEach(c->c.move(bgg));
                for(Circle c:list)
                {
                    c.move(bgg);
                }
                //Ve bg len com
                g.drawImage(bg, 0, 0, this);
            }        
        };
        
        this.setContentPane(com);
        
        new Thread(this).start();
        
        this.addMouseListener(new MouseAdapter(){

            @Override
            public void mouseClicked(MouseEvent e) {
//                if(!list.removeIf(c->c.isInside(e.getX(),e.getY())))
//                    list.add(new Circle(com,e.getX(),e.getY()));
                for(Circle c:list)
                {
                    if(c.isInside(e.getX(),e.getY()))
                    {
                        list.remove(c);
                        return;
                    }                        
                }
                list.add(new Circle(com,e.getX(),e.getY()));
            }            
        });
    } {
        initComponents();
        img = new ImageIcon(getClass().getResource("/images/hoadao.jpg")).getImage();
        final JComponent com = new JComponent() {

            @Override
            protected void paintComponent(Graphics g) {
                //Tao bg trong bo nho
                bg = this.createImage(this.getWidth(), this.getHeight());
                //Lay doi tuong Graphics cua bg
                Graphics bgg = bg.getGraphics();
                //Ve len bg trong bo nho
                bgg.drawImage(img, 0, 0, this.getWidth(), this.getHeight(), this);
                //list.forEach(c->c.move(bgg));
                for (Circle c : list) {
                    c.move(bgg);
                }
                //Ve bg len com
                g.drawImage(bg, 0, 0, this);
            }
        };

        this.setContentPane(com);

        new Thread(this).start();

        com.addMouseListener(new MouseAdapter() {

            @Override
            public void mouseClicked(MouseEvent e) {
//                if(!list.removeIf(c->c.isInside(e.getX(),e.getY())))
//                    list.add(new Circle(com,e.getX(),e.getY()));
                for (Circle c : list) {
                    if (c.isInside(e.getX(), e.getY())) {
                        list.remove(c);
                        return;
                    }
                }
                list.add(new Circle(com, e.getX(), e.getY()));
            }
        });
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(MainFrame.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                while (true) {
                    this.repaint();
                    try {
                        Thread.sleep(100);
                    } catch (InterruptedException ex) {
                        //Logger.getLogger(MainFrame.class.getName()).log(Level.SEVERE, null, ex);
                    }
                }
            }

//            private void repaint() {
//                throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
//            }

            private void repaint() {
                throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
    }

    @Override
    public void run() {

        while (true) {
            this.repaint();
            try {
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                //Logger.getLogger(MainFrame.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }//To change body of generated methods, choose Tools | Templates.
}

    // Variables declaration - do not modify//GEN-BEGIN:variables
    // End of variables declaration//GEN-END:variables

