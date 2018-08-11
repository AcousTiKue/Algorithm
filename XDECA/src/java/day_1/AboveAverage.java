/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Windows 10 Professional, Eclipse-Oxygen, Java JDK 10.0.1
** Change Log : First written '18.05.18.
** File Info : 
** https://www.acmicpc.net/problem/4344
** Input: Test case 'C' is given at the first row.
** From the second row, the number of students is given as a first input, and the rest will be the each score.
** Output: Print the percentage of students who have scores above the average.
**				|
** 
** */

package submit.day_1;

public class AboveAverage {

	/*
	 * This class is declared within AboveAgerage class.
	 * 
	 * */
	private class Data { // This will be another method of representing array.
		
		/* Fields */
		private int StudentNumber = 0;
		private int[] Scores;
		
		private double Average = 0;
		
		private int StudentAboveAverage = 0;
		
		/*
		 * User-defined
		 * */
		private void calcAverage() {
			/* 
			 * This function will be used for setting Average field.
			 *  */
			
			for(int i = 0; i < StudentNumber; i++) {
				
				Average += Scores[i];
			}
			
			Average /= StudentNumber;
		}
		
		private void calcStudentAboveAverage() {
			
			for(int i = 0; i < StudentNumber; i++) {
				
				if(Scores[i] > Average)
					StudentAboveAverage++;
			}
		}
		
		
		//
		public int getStudentNumber() {
			
			return StudentNumber;
		}
		
		public double getAverage() {
			
			return Average;
		}

		
		/*
		 * Constructor
		 * */
		public Data() {
			
		}
		
		
		public Data(int argStudentNumber_, int[] argScores_) {
			
			this.StudentNumber = argStudentNumber_;
			this.Scores = argScores_;
			
			calcAverage(); // Setting member variable.
			
			calcStudentAboveAverage();
			
		}
		
		
		/*
		 * Getters & Setters, Eclipse auto-generated.
		 * 
		 * */
			// Unnecessary, not even declared.
		public int getStudentAboveAverage() {
			
			return this.StudentAboveAverage;
		}
	}
	
	/* 
	 * 
	 * From here starts class Data scope. */
	
	/* Data fields */
	private int TestCase = 0; // This is the container for the input 'C'.
	private Data[] DataArray = null; // Wrapper array.
	
	private int[] StudentAboveAverage = null;
	
	{ // From here starts class Data scope.
		// Initialization, doing nothing.
		
	}
	
	
	/* 
	 * Constructor
	 *  */
	public AboveAverage() {
		// TODO Auto-generated constructor stub
	}
	
	public AboveAverage(int argTestCase_) {
		
		this.TestCase = argTestCase_;
	}
	
	public AboveAverage(int argTestCase_, Data[] argDataArray_) {
		
		this.TestCase = argTestCase_;
		this.DataArray = argDataArray_;
		
		for(int i = 0 ; i < TestCase; i++) 			
			StudentAboveAverage[i] = argDataArray_[i].getStudentAboveAverage();
		
		
	}
	
	/* Getters & Setters */
	
	public int getTestCase() {
		
		return this.TestCase;
	}
	
	public int[] getStudentAboveAverage() {
		
		return this.StudentAboveAverage;
	}
}
