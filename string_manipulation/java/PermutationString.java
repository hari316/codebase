package sample;
import java.util.ArrayList;
import java.util.List;

public class PermutationString {

	static List<String> all_permutation(String word) {
		List<String> result = new ArrayList<String>();
		if(1 == word.length()) {
			result.add(word);
		}else{
			int str_len = word.length(); 
			for(int index=0; index < str_len; index++) {
				List<String> sub_str = all_permutation(word.substring(0,index)+word.substring(index+1,str_len));
				for(String str:sub_str) {
					result.add(word.charAt(index)+str);
				}
			}
		}
		
		return result;
	}
	
	public static void main(String[] args){
		System.out.println(all_permutation("abc"));
	}
}
