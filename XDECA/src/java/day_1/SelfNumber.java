/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.05.18.
** File Info : 
** https://www.acmicpc.net/problem/4673
** Input: None
** Output: Print out self-numbers less than 10,000, in sql terms of 'order by asc'.
**	
** 
** */

/*
 * The problem of self-number was first written C++ last year, 
 * 	so code below is the one re-factored.
 * */

/* The submitted code was, 
 * 
 * 
	#include <cstdio>
	#define MAX 10000
	
	int main() {
		register unsigned X, A, B, C, D;
		unsigned T[MAX];
	
		for (register int i = 0; i < MAX; i++)
			T[i] = i;
	
		for (D = 0; D < 10; D++) {
			for (C = 0; C < 10; C++) {
				for (B = 0; B < 10; B++) {
					for (A = 0; A < 10; A++) {
						X = (1001 * A + 101 * B + 11 * C + 2 * D);
						
						if (X <= MAX)
							T[X] = 0;
					}
				}
			}
		}
	
		for (register int i = 0; i < MAX; i++) {
			if (T[i] != 0)
				printf("%d\n", T[i]);
		}
	
		return 0;
	}
 * */


package submit.day_1;

public class SelfNumber {
	
	/*
	 * Since there is no input, this class can be stand-alone.
	 * */
	int X, A, B, C, D;
	final int Max = 10000;
	
	int[] Array = new int[Max];
	
	{ /* Initializing blocks. */ 
		
	}
	
	
	/*
	 * Eclipse auto-generated constructor.
	 * 
	 * */
	public SelfNumber() {
		// TODO Auto-generated constructor stub.
		
		for (int i = 0; i < Max; i++)
			Array[i] = i;
		
		for (D = 0; D < 10; D++) {
			
			for (C = 0; C < 10; C++) {
				
				for (B = 0; B < 10; B++) {
					
					for (A = 0; A < 10; A++) {
						
						X = (1001 * A + 101 * B + 11 * C + 2 * D);
						
						if (X < Max)
							Array[X] = 0;
					}
				}
			}
		}
	}	
	
	
	/* User-defined */
	public final void getResult() {
		
		for (int i = 0; i < Max; i++) 
			
			if (Array[i] != 0)
				System.out.println(Array[i]);
		
	}
}
