package sample;

public class RemoveVowels {
	
	static String remove_vowels(String str) {
			StringBuilder res = new StringBuilder();
			char[] str_char = str.toLowerCase().toCharArray();
			for (char c : str_char) {
				switch (c) {
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
						break;
					default:
						res.append(c);
				}
			}
			return res.toString();
	}
	
	public static void main(String[] args) {
		
		System.out.println(remove_vowels("Hariharan"));
	}

}
