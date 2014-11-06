package sample;

import java.util.LinkedList;


public class AllSetSum {

	
	static void populate_subset(int[] datalist,int index, LinkedList<Integer> seq, int sum) {
		if(0 == sum){
			System.out.println(seq);
			return;
		}
		int len = datalist.length;
		while((index<len) && datalist[index]>sum){
			index++;
		}
		while(index<len && datalist[index] <= sum){
			seq.add(datalist[index]);
			populate_subset(datalist, index+1, seq, sum-datalist[index]);
			seq.poll();
			index++;
		}
	}
	
	public static void main(String[] args) {
		
		int[] data = {1,2,3,4,5,6,7,8,9,10};
		LinkedList<Integer> seq = new LinkedList<Integer>();
		int sum = 10;
		populate_subset(data, 0, seq, sum);
		
	}
}
