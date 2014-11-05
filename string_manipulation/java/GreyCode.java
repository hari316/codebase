package sample;

public class GreyCode {

	static boolean is_grey_code(int num1, int num2) {
		//num1 = num1>=0?num1:-num1;
		//num2 = num2>=0?num2:-num2;
		
		if(num1 == num2) {
			return false;
		}

		//System.out.println(Integer.toBinaryString(num1));
		//System.out.println(Integer.toBinaryString(num2));
		
		int res = num1^num2;
		//System.out.println(Integer.toBinaryString(res));
		if (0 == (res & (res-1))) {
			return true;
		}
		return false;
	}
	
	public static void main(String[] args) {
		int num1 = -3;
		int num2 = -4;
		System.out.println(Integer.toBinaryString(num1));
		System.out.println(Integer.toBinaryString(num2));
		
		if(is_grey_code(num1,num2)) {
			System.out.printf("Numbers(%d,%d) differ by exaclty 1 bit.",num1, num2);
		}else {
			System.out.println("Numbers differ by more than 1 bit.");
		}
	}
}
