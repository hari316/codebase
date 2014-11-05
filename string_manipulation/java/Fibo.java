package sample;

import java.util.ArrayList;
import java.util.List;

public class Fibo {

	static int fibo_recursive(int num) {
		if(0 == num || 1 == num) {
			return num;
		}
		return fibo_recursive(num-1) + fibo_recursive(num-2);
	}
	
	static int fibo_iterative(int num) {
		int res = 0;
		
		if (0 == num || 1 == num) {
			res = num;
		}else {
			int num1 = 0;
			int num2 = 1;
			
			while(num>1) {
				res = num1 + num2;
				num1 = num2;
				num2 = res;
				num--;
			}
		}
		return res;
	}
	
	static List<String> all_permutation(String word) {
		List<String> result = new ArrayList<String>();
		
		if (1 == word.length()) {
			result.add(word);
		}else {
			for(int index=0; index < word.length(); index++){
				List<String> temp = all_permutation(word.substring(0,index) + word.substring(index+1,word.length()));
				for (String t: temp){
					result.add(word.charAt(index)+t);
				}
			}
		}
		
		return result;
	}
	
	public static void main(String[] args) {
		int num = 9;
		String name = "Hariharan";
		System.out.println(name.substring(0, 4));
		System.out.println(fibo_recursive(num));
		System.out.println(fibo_iterative(num));
		System.out.println(all_permutation("abc"));
	}
}
