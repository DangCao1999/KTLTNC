/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread;

import java.lang.System.Logger;

/**
 *
 * @author PC
 */

class MyThread2 implements Runnable{
    String name;
    public MyThread2(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        for(int i = 0; i <10; i++)
        {
            System.out.println(this.name);
            try {
                Thread.sleep(100);
            }catch (InterruptedException ex)
            {
//                Logger.getLogger(MyThread2.class.name);
            }
            }
        }
    }

public class Demo2_CreatingThread {
    public static void main(String[] args){
    Thread t1 = new Thread(new MyThread2("Thread1"));
    t1.start();
    }
}
