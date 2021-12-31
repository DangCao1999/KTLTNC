import java.text.DateFormat;
import java.text.NumberFormat;
import java.util.Date;
import java.util.Locale;

public class UsingLocale {
    public static void main(String[] args) {
        double payment = 123456789.9876;
        Date date = new Date();
        Locale.setDefault(new Locale("vi", "VN"));
        NumberFormat nf = NumberFormat.getInstance();
        NumberFormat cf = NumberFormat.getCurrencyInstance();
        DateFormat df = DateFormat.getInstance();
        DateFormat df1 = DateFormat.getDateInstance();
        System.out.println(nf.format(payment));
        System.out.println(cf.format(payment));
        System.out.println(df.format(date));
        System.out.println(df1.format(date));

    }
}
