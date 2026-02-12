import java.util.Scanner;
public class Matrix {
     private int rows;
     private int columns;
     private int[][] matrix;
     public Matrix() {
    	 rows = 0;
    	 columns = 0;
     }
     public Matrix(int r , int c) {
    	 this.rows = r;
    	 this.columns = c;
    	 int maxi = Math.max(r, c);
    	 matrix = new int[maxi][maxi];
    	
     }
     public int getter(int i, int j) {
    	 return matrix[i][j];
     }
     public void setter(int[][] a,int rowsize,int colsize) {//setter function is used for setting the whole object
    	 for(int i= 0;i<rows;i++) {
    		 for(int j = 0;j<columns;j++) {
    			matrix[i][j] = a[i][j];
    		 }
    	 }
     }
     public int findMax() {
    	 int m = -1000000;
    	 for(int i = 0;i<rows;i++) {
    		 for(int j = 0;j<columns;j++) {
    			 m = Math.max(m, matrix[i][j]);
    		 }
       }
    	 return m;
     }
     public void Transpose() {
    	 
    	 for(int i = 0;i<rows;i++) {
    		 for(int j = 0;j<columns;j++) {
    			 if(j<=i) continue;
    			 int temp = matrix[i][j];
    			 matrix[i][j] = matrix[j][i];
    			 matrix[j][i] = temp;
    			 
    		}
    				 
    	 }
    	
     }

   }

public class makeMatrix {
	public static void main(String args[]) {
		System.out.println("enter the rows and columns");
		Scanner input = new Scanner(System.in);
		int row = input.nextInt();
		int col = input.nextInt();
		
		int [][] a = new int[row][col];
		System.out.println("enter the elements");
		for(int i = 0;i<row;i++) {
			for(int j = 0;j<col;j++) {
				int elem = input.nextInt();
				a[i][j] = elem;
			}
		}
		Matrix ob1 = new Matrix();
		ob1.setter(a,row,col);
		int maxi = ob1.findMax();
		System.out.println("the maximum element in the matrix is " + maxi);
		
		ob1.Transpose();
		
		for(int i= 0;i<row;i++) {
			for(int j = 0;j<col;j++) {
				System.out.println(ob1.getter(i, j));
			}
            System.out.println("\n");
		}
		
		
	}
}




