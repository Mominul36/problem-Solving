import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = new String();
        if(n%2!=0)
        s="Weird";
        else 
        {
            if(n>=2 && n<=5)
            s="Not Weird";
            else if(n>=6 && n<=20)
            s= "Weird";
            else if(n>20)
            s="Not Weird";
        }
        System.out.println(s);
    }
}
