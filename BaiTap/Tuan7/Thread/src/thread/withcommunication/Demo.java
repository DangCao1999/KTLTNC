/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread.withcommunication;


/**
 *
 * @author PC
 */
import java.util.logging.Level;
import java.util.logging.Logger;

public class Demo {
    public static void main(String[] args)
    {
        Data data=new Data();
        Producer p=new Producer(data);
        Consumer c=new Consumer(data);
        p.start();
        c.start();
    }
}

class Data
{
    int d;
    boolean read = true;//true: du lieu da duoc doc (tieu thu)
    synchronized void getData()
    {
        //neu du lieu da duoc tieu thu
        if(read==true)
        {
            try {
                // chuyen thread nay vao trang thai doi
                wait();
            } catch (InterruptedException ex) {
                Logger.getLogger(Data.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        //tieu thu
        System.out.println("Got data: "+d);
        //danh dau du lieu da duoc tieu thu
        read=true;
        //danh thu Producer thuc day de san xuat du lieu moi
        notify();
    }
    synchronized void putData(int d)
    {
        //neu du lieu chua duoc tieu thu
        if(read==false)
        {
            try {
                wait();
            } catch (InterruptedException ex) {
                Logger.getLogger(Data.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        //Tao du lieu moi
        this.d=d;
        System.out.println("Put data: "+d);
        //danh dau da tao du lieu moi chua duoc tieu thu
        read=false;
        //danh thuc Consumer thuc day tieu thu du lieu
        notify();
    }
}

class Producer extends Thread
{
    Data data;
    public Producer(Data data)
    {
        this.data=data;
    }

    @Override
    public void run() {
        int d=0;
        while(true)
        {
            data.putData(d++);
        }
    }    
}

class Consumer extends Thread
{
    Data data;
    public Consumer(Data data)
    {
        this.data=data;
    }

    @Override
    public void run() {
        while(true)
        {
            data.getData();
        }
    }    
}