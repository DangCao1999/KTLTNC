/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread.withoutcommunication;

/**
 *
 * @author PC
 */
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
    synchronized void getData()
    {
        System.out.println("Got data: "+d);
    }
    synchronized void putData(int d)
    {
        this.d=d;
        System.out.println("Put data: "+d);
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
