/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package doublebufferingdemo1;

/**
 *
 * @author PC
 */
import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JComponent;

/**
 *
 * @author admin
 */
public class Circle {
    int x,y,r,dx,dy;
    Color color;
    JComponent com;
    
    public Circle(JComponent com,int x0,int y0)
    {
        this.com=com;
        this.x=x0-r;
        this.y=y0-r;
        
        r=20;
        dx=dy=6;
        color=new Color((float)Math.random(),(float)Math.random(),(float)Math.random());
    }
    public void move(Graphics g)
    {
        x+=dx;
        y+=dy;
        
        g.setColor(color);
        g.fillOval(x, y, 2*r, 2*r);
        
        //Dung canh trai cua com
        if(x<=0)
        {
            x=0;
            dx=-dx;
        }
        //Dung canh phai cua com
        if(x+2*r>=com.getWidth())
        {
            x=com.getWidth()-2*r;
            dx=-dx;
        }
        //Dung canh tren cua com
        if(y<=0)
        {
            y=0;
            dy=-dy;
        }
        //Dung canh duoi cua com
        if(y+2*r>=com.getHeight())
        {
            y=com.getHeight()-2*r;
            dy=-dy;
        }
    }
    
    public boolean isInside(int x,int y)
    {
        return x>=this.x && x<=this.x+2*r && y>=this.y && y<=this.y+2*r;
    }
}

