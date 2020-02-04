
package vectoroperation;


public class Vector2nd {
    public  int i,j,k;
    
    double magnitude(){
        
        double t = Math.sqrt(i*i+j*j+k*k);
        return t;
    }
    
    
    void normalise(int a,int b,int c){
        
        i=a;
        j=b;
        k=c;
        
        double d=magnitude();
        
        
        
    }
    
    
}
