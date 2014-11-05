package sample;

import java.util.Map;
import java.util.HashMap;

public class RemoveDuplicates {

	static String remove_duplicate_char(String word) {
		StringBuilder result = new StringBuilder();
		
		Map<Character,Boolean> char_map = new HashMap<Character, Boolean>();
		char[] word_char = word.toCharArray();
		for(Character c:word_char) {
			if(!char_map.containsKey(c)){
				char_map.put(c, true);
				result.append(c);
			}
		}
		return result.toString();
	}
	
	public static void main(String[] args) {
		
		System.out.println(remove_duplicate_char("mississippi"));
	}
}
