package sample;

public class Hello {
	
	static String string_compress(String str) {
		StringBuilder res = new StringBuilder();
		int len = str.length();
		char[] strArr = str.toCharArray();
		System.out.println(strArr);
		int count;
		for(int index=0;index<len;index++) {
			char c = strArr[index];
			count = 1;
			//System.out.println(c);
			for(int j = index+1;(j< len) && strArr[index]==strArr[j];j++){
				count++;
				index++;
			}
			//System.out.println(count);
			res.append(c+Integer.toString(count));
			
		}
		
		return res.toString();
	}
	
	public static void main(String[] args) {
		
		System.out.println(string_compress("aaabbc"));
		//System.out.println("xyz".);
	}

}
