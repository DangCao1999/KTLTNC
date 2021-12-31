/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thread;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author PC
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author PHT
 */
public class Demo7_ParallelCalculator {

//bt1
//    public static void main(String[] args) throws InterruptedException {
//        Thread1 t1 = new Thread1(10);
//        Thread1 t2 = new Thread1(100);
//        Thread1 t3 = new Thread1(200);
//        t1.start();
//        t2.start();
//        t3.start();
//        t1.join();
//        t2.join();
//        t3.join();
//        System.out.println("Result: " + (t1.result + t2.result + t3.result));
//    }
//bt2
    public static void main(String[] args) throws InterruptedException {
        Thread1 t1 = new Thread1(10);
        Thread1 t2 = new Thread1(100);
        
        Thread2 t3 = new Thread2(10);
        Thread2 t4 = new Thread2(15);
        
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        
        t1.join();
        t2.join();
        t3.join();
        t4.join();
        
        System.out.println("Result: " + (t1.result + t2.result + t3.result - t4.result));
        //System.out.println("Result: " + (t4.result));
    }
}

class Thread1 extends Thread {

    int N;
    int result;

    Thread1(int N) {
        this.N = N;
    }

    public void run() {
        result = 0;
        for (int i = 1; i <= N; i++) {
            result += i;
            try {
                Thread.sleep(10);
            } catch (InterruptedException ex) {
                Logger.getLogger(Thread1.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}

class Thread2 extends Thread {

    int N;
    double result;

    Thread2(int N) {
        this.N = N;
    }

    public void run() {
        result = 1;
        for (int i = 1; i <= N; i++) {
            result *= i;
            try {
                Thread.sleep(10);
            } catch (InterruptedException ex) {
                Logger.getLogger(Thread1.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
