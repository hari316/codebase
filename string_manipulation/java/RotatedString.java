package sample;

public class RotatedString {
	
	static int is_rotated(String str1, String str2) {
		if (str1.length() != str2.length()) {
			return -1;
		}
		if (str1.isEmpty() || str2.isEmpty()) {
			return -1;
		}
		str1 = str1 + str1;
		System.out.println(str1);
		if (!str1.contains(str2)) {
			return -1;
		}
		return 1;
	}
	
	public static void main(String[] args) {
		String a = "";
		String b = "";
		
		if (1 == is_rotated(a,b)) {
			System.out.println("Strings are equal.");
		}else {
			System.out.println("Strings are not equal.");
		}
	}

}
