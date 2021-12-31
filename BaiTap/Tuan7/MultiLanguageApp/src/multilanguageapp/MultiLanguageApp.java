/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package multilanguageapp;

import java.util.Locale;
import java.util.ResourceBundle;

/**
 *
 * @author PC
 */
public class MultiLanguageApp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Locale locale = new Locale("vi", "VN");
        ResourceBundle rb = ResourceBundle.getBundle("resources.strings", locale);
        System.out.println(rb.getString("hello"));
        System.out.println(rb.getString("message"));
    }
    
}
