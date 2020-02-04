
package labexam1;


public class Whale extends Fish {
    int fins;
    
    String carn;
    
    public Whale(int n,int f,String l,String c){
        this.bone = n;
        this.fins = f;
        this.respitory = l;
        this.carn= c;
    }
    void display(){
        System.out.println("The Number of bones is :100");
        System.out.println("THE NUMBER OF FINS IS 10");
        System.out.println("RESPITORY SYSTEM IS PRESENT");
        System.out.println("NOT CARNIVOROUS");
    }
    
}
