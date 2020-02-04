
package arrayLab;


public class Student {
    public String name;
    public int age;
    

    public Student() {
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getFname() {
        return name;
    }

    public void setFname(String fname) {
        this.name = fname;
    }

    public Student(String name,  int age) {
        this.name = name;

        this.age = age;
    }

    @Override
    public String toString() {
        return name  + age;
    }
}

    
    
    

