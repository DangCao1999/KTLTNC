/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread;

/**
 *
 * @author PC
 */
public class Demo6_WithoutSynchronization2 {

    public static void main(String[] args) {
        MyThread4 t1 = new MyThread4();
        MyThread4 t2 = new MyThread4();
        t1.start();
        t2.start();
    }
}

class SharedData {

    void access() {
        System.out.println("Accessing 1");
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            System.out.println("Error");
        }
        System.out.println("Accessing 2");
    }
}

class MyThread4 extends Thread {

    static SharedData data = new SharedData();

    @Override
    public void run() {
        //Tại một thời điểm chỉ có một thread được phép truy cập vào data
        synchronized (data) {
            data.access();
        }

    }
}
