/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.05.18.
** File Info : 
** https://www.acmicpc.net/problem/2448
** Input: N is given at the first row. N should be an integer of 3*2^k form, where k <= 10.
** Output: Print out stars of N rows.
** 
 * */

/*
 * This file is unfinished!!
 * */
 

package submit.day_1;

public final class PrintStar_11 {

	/* Data fields */
	private int Rows; // Rows of 'N' 
	

	/* 
	 * Constructor
	 * */
	
	public PrintStar_11() {
		// TODO Auto-generated constructor stub
	}
	
	public PrintStar_11(int argRows_) {
		
		this.Rows = argRows_;
	}
	
	
	private void printUnitTriangleAt(int argX_, int argY_) {
		
		/*
		 * This function provides the unit triangle, described below.
		 * */
		
		for(int i = 0; i < argY_; i++) // Move Y Axis.
			System.out.println("");
		
		for(int i = 0; i < argX_; i++)
			System.out.print(" ");
		
		System.out.println("  *  ");
		
		
		for(int i = 0; i < argX_; i++)
			System.out.print(" ");
		
		System.out.println(" * * ");
		
		
		for(int i = 0; i < argX_; i++)
			System.out.print(" ");		
		
		System.out.println("*****");
	}
	
	
	
	/*
	 * User-defined
	 * 
	 * */

}
