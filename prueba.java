import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class prueba {
    
   
    
    public static void main(String[] args) {
  Scanner myScan = new Scanner(System.in);
    String inputString = myScan.nextLine();
    Set<Character> set = new HashSet<Character>();
    for (char c : inputString.toCharArray()) {
        if (set.contains(c)) {
            set.remove(c);
            //System.out.println(c);
        }
        else {
            set.add(c);
            System.out.println(c);
        }
    }

    String ans = "YES";
    if (set.size() > 1) {
        ans = "NO";
    }

    // Assign ans a value of YES or NO, depending on whether or not inputString satisfies the required condition
    System.out.println(ans);
    myScan.close();
        
    }
}
