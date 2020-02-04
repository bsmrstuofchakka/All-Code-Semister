
package lab1;


public class Whale extends Fish{
    Whale(String b,String c,String r,String s){
        numberOfBones=b;
        resSys=c;
        fine=r;
        carnivorous=s;
    }
    void display2(){
        System.out.println("Numbber of Bones: "+numberOfBones);
        System.out.println("Number of fines: "+fine);
        System.out.println("Respiratoy System: "+resSys);
        System.out.println("Carnivorous or not?: "+carnivorous);
    }
}
