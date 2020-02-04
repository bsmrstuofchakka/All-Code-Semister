
package labexam1;


public class Sparrow extends Bird {
    String color;
    
    
    String sing;
    public Sparrow(int n,String c,String l,String s){
        this.bone = n;
        this.color = c;
        this.respitory = l;
        this.sing= s;
    }
    @Override
    void display(){
        System.out.println("The Number of bonesis :"+bone);
        System.out.println("THE COLOR IS:"+color);
        System.out.println("RESPITORY SYSTEM IS:"+respitory);
        System.out.println("IT CAN SIng:"+sing);
    }
    
}
