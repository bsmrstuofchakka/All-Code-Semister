
package lab1;


public class Sparrow extends Bird{
    Sparrow(String b,String c,String r,String s){
        numberOfBones=b;
        resSys=c;
        color=r;
        sing=s;
    }
    void display1(){
        System.out.println("Numbber of Bones: "+numberOfBones);
        System.out.println("Color: "+color);
        System.out.println("Respiratoy System: "+resSys);
        System.out.println("Sing or not?: "+sing);
    }
}
