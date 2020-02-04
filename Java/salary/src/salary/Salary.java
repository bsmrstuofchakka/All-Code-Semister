
package salary;


public class Salary {

    private double balance;
    
    public Salary(double amount){
       balance=amount;
       for(int i=1;i<=10;i++){
           balance=balance+balance*(10.00/100.00);
       }
    }
    public Salary(double amount, int increment){
        balance=amount;
        
        for(int i=1;i<=10;i++)
            balance=balance+balance*(increment/100.00);
    }
    
    public void getSalary(){
        System.out.println(balance);
    }
    
    public static void main(String[] args) {
        
        Salary ob=new Salary(500.00);
        ob.getSalary();
        
        Salary ob1=new Salary(500.00,5);
        ob1.getSalary();
        
    }
    
}
