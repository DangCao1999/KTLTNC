import java.text.DateFormat;
import java.text.NumberFormat;
import java.util.Date;
import java.util.Locale;

public class UsingLocale2 {
    public static void main(String[] args) {
        double payment = 123456789.9876;
        Date date = new Date();
        Locale locale = new Locale("vi", "VN");
        NumberFormat nf = NumberFormat.getInstance(locale);
        NumberFormat cf = NumberFormat.getCurrencyInstance(locale);
        DateFormat df = DateFormat.getDateInstance(DateFormat.SHORT, locale);
        DateFormat df1 = DateFormat.getDateInstance(DateFormat.LONG,locale);
        System.out.println(nf.format(payment));
        System.out.println(cf.format(payment));
        System.out.println(df.format(date));
        System.out.println(df1.format(date));

    }
}
