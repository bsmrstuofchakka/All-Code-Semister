
package oop1;


public class Test {
      public static void main(String[] args){
          Teachar obj1 =  new Teachar();
          
          obj1.gender="male";
          obj1.name="karim";
          obj1.phn=1111111992;
          
          System.out.println(obj1.name);
          System.out.println(obj1.gender);
          System.out.println(obj1.phn);
          
          Teachar obj2 = new Teachar();
        
          obj2.name = "Murad";
          obj2.gender="Male";
          obj2.phn = 19290000;
          
          System.out.println(obj2.name);
          System.out.println(obj2.gender);
          System.out.println(obj2.phn);
             
      }        
}
