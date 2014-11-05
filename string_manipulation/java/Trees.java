package sample;

import java.util.Stack;

public class Trees {
	
	static class Node {
		
		private int data;
		private Node left;
		private Node right;
		
		Node(int data) {
			this.data = data;
			this.left = null;
			this.right = null;
		}
		
	}
	
	static class BST {
		
		private Node root = null;
		
		BST(int data) {
			this.root = new Node(data);
		}
		
		void insert(Node root, Node node) {
			if(null==root || null==node) {
				return;
			}else {
				if(root.data > node.data) {
					if(null == root.left) {
						root.left = node;
					}else{
						insert(root.left, node);
					}
				}else{
					if(null == root.right){
						root.right = node;
					}else{
						insert(root.right, node);
					}
				}
			}
			
		}
		
	}
	
	
	static void print_tree(Node root) {
		if(null == root){
			return;
		}else{
			print_tree(root.left);
			System.out.println(root.data);
			print_tree(root.right);
		}
	}
	
	static Node find_common_ancestor(Node root, Node n1, Node n2) {
		
		if(null == root) {
			return null;
		}else{
			if(root.data==n1.data || root.data==n2.data) {
				return root;
			}
			Node left = find_common_ancestor(root.left, n1, n2);
			Node right = find_common_ancestor(root.right, n1, n2);
			
			if ((null!=left) && (null!=right)){
				return root;
			}
			if(null == left){
				return right;
			}else{
				return left;
			}
		}
	}
	
	static boolean is_BST(Node root, int min, int max) {
		if(null == root){
			return true;
		}else{
			if(root.data < min || root.data > max) {
				return false;
			}else{
				return (is_BST(root.left, min, root.data) && is_BST(root.right, root.data, max));
			}
		}
	}
	
	public static void main(String[] args) {
		
		BST tree = new BST(10);
		Node root = tree.root;
		tree.insert(root, new Node(4));
		tree.insert(root, new Node(8));
		tree.insert(root, new Node(9));
		tree.insert(root, new Node(12));
		Node n1 = new Node(11);
		tree.insert(root, n1);
		tree.insert(root, new Node(14));
		Node n2 = new Node(16);
		tree.insert(root, n2);
		print_tree(root);
		
		Node res = find_common_ancestor(root, n1, n2);
		if(null != res){
			System.out.println("Common Ancestor Node: "+res.data);
		}
		
		boolean val = is_BST(root, Integer.MIN_VALUE, Integer.MAX_VALUE);		
		System.out.println("Given tree is Binary Search Tree "+val);
		
	}
	
	

}
