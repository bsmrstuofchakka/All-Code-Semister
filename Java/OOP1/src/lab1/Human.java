
package lab1;

public class Human extends Mammal{
      Human(String b,String c,String r,String s){
        numberOfBones=b;
        resSys=c;
        warm=r;
        brain=s;
    }
    void display3(){
        System.out.println("Numbber of Bones: "+numberOfBones);
        System.out.println("Warm Blooded or not?: "+warm);
        System.out.println("Respiratoy System: "+resSys);
        System.out.println("brain or not?: "+brain);
    }
}
