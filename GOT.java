import java.io.*;
import java.util.*;

public class GOT{

	public static String ordenar(String frase){
		String res = "";
		char[] ordenada = frase.toCharArray();
		Arrays.sort(ordenada);
		res = new String(ordenada);
		System.out.println(res);
		return res;
	}
	public static boolean palindromo(String cadena){

		boolean isPal = false;
		int start = 0;
		int end = cadena.length() - 1;

		while((start < end) && (!isPal) ){

			if(cadena.charAt(start) == cadena.charAt(end)){
				start++;
				end--;
			}else{

				isPal = true;

			}

			

		}
		
		return isPal;
		
	}
	public static void main(String args[]){

		Scanner sc = new Scanner(System.in);

		String line = "hola";
		String frase = "";
		int tam = line.length();
		
		for(int i = line.length() - 1; i >= 0; i--){
			
			frase = frase + String.valueOf(line.charAt(i));
			
		}

		System.out.println(frase);

		String ans = "";

		System.out.println(palindromo(line));
		
			String frase1 = ordenar("hola");
			String frase2 = ordenar("halo");

			if(frase1.equals(frase2)){
				ans = "YES";
			}else{
				ans = "NO";
			}
		

		System.out.print(ans);
		System.out.println();
		
	}

}