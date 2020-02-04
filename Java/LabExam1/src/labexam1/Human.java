
package labexam1;


public class Human extends Mammal {
    String blood;
    
    String brain;
    
    public Human(int n,String bl,String l,String br){
        this.bone = n;
        this.blood = bl;
        this.respitory = l;
        this.brain= br;
    }
    void display(){
        System.out.println("The Number of bonesis :"+bone);
        System.out.println("BLOODED"+blood);
        System.out.println("RESPITORY SYSTEM IS PRESENT:"+respitory);
        System.out.println("IT CAN USE BRAIN:"+brain);
    }
    
}
