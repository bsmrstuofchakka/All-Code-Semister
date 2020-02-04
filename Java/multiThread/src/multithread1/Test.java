
package multithread1;


public class Test {
    public static void main(String[] args){
        for(int i=1;i<=10;i++){
            ThreadDemo1 obj1 = new ThreadDemo1(i);
            obj1.start();
            
        }
    }
}
