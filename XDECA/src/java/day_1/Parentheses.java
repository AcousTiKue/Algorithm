/*
** 
** Theme : [XDeca] Algorithm Study 
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Goorm IDE, https://ide.goorm.io/, Linux, Java
** Change Log : First written '18.05.22.
** File Info : https://www.acmicpc.net/problem/9012
**     Input: Input will use standard input method. Integer T is given at the first row as a number of test cases. 
**     Parenthesis string is given as each test case starting from the second row. Each string size is more than 2, less than 50.
**     Output: If each given case is Valid Parenthesis String, YES will be printed. Otherwise, NO will be printed.
** 
** */

package submit.day_1;


public class Parentheses {
    
    
    // Data field
    // class Declaration
    private class ParenthesisString {
        
        private String Data = "";
        
        private int Left = 0;
        private int Right = 0;
        
        private boolean State = false; // Default
        
        {
            /* Nothing needs to be done ahead before calling constructor */
        }
        
        
        // Constructors
        public ParenthesisString() {
            // default
        }
        
        public ParenthesisString(String argString_) {
            
            this.Data = argString_;
        }
        
        
        // Engine
        private boolean isVPS() {
            
            if(Data.charAt(0) != '(')
                    return false;
            
            if(Data.charAt(Data.length() - 1) != ')')
                    return false;
            
            for(int i = 0; i < Data.length(); i++) {
                    
                if(Data.charAt(i) == '(')
                    Right++;
                
                else 
                    Left++;
            }
            
            if(Left == Right) return true;
            
            else return false;
        }
        
        
        
        
        // Interface
        // Getters & Setters
        public void setData(String argString_) {
            
            this.Data = argString_;
            
            State = isVPS();
        }
        
        public String getData() {
            
            return this.Data;
        }
        
        public boolean getState() {
            
            State = isVPS();
            
            return this.State;
        }
    }
       
    
    private int TestCase = 0;
    private ParenthesisString[] Cases = null;
    
    {   
         /* Nothing needs to be done ahead before calling constructor */
    }
    
    public Parentheses() {
        
    }
    
    public Parentheses(int argTestCase_) {
        
        Cases = new ParenthesisString[argTestCase_];
    }
    
    /* Setters */
    public void setCases(ParenthesisString[] argCases_) {
        
        for(int i = 0; i < TestCase; i++) {
            
            Cases[i] = argCases_[i];
        }
    }
    
    public boolean[] isEachVPS() {
        
        boolean[] Set_ =  new boolean[TestCase];
        
        for(int i = 0; i < TestCase; i++) 
            Set_[i] = Cases[i].getState();
        
        return Set_;
    }
}
