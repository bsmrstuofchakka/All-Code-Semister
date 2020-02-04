
package inheritance;

public class Teachar extends Person{
    private String qualification;
    
    
    public String getQualification(){
        return qualification;
    }
    public void setQualification(String qualification){
        this.qualification=qualification;
    }
   
    
    void displayInformation2(){
        displayInformation();
        System.out.println("Teachar's Qualification:"+qualification);
        
    }
    
    
    
}
