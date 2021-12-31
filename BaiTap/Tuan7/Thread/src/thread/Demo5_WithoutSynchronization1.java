/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread;

/**
 *
 * @author PC
 */
public class Demo5_WithoutSynchronization1 {
    public static void main(String [] args){
    MyThread5 t1 = new MyThread5();
    MyThread5 t2 = new MyThread5();
    t1.start();
    t2.start();
    }
}

class SharedData5
{
    //Phương thức access được đồng bộ hóa: tại một thời điểm chỉ có 1 thread truy cập vào
    synchronized void access()
    {
        System.out.println("Accessing 1");
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            System.out.println("Error");
        }
        System.out.println("Accessing 2");
    }
}

class MyThread5 extends Thread
{
    static SharedData5 data = new SharedData5();
    
    @Override
    public void run()
    {
        data.access();
    }
}
