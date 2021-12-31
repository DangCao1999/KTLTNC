/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lesson51;

import java.util.Locale;
import java.util.ResourceBundle;

/**
 *
 * @author PHT
 */
public class UsingResourceBundle {

    public static void main(String[] args) {
        //Locale locale = Locale.getDefault();
        Locale locale = new Locale("vi", "VN");
        ResourceBundle rb = ResourceBundle.getBundle("resources.strings", locale);
        System.out.println(rb.getString("hello"));
        System.out.println(rb.getString("message"));
    }
}
