
package arrayLab;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;


public class Test {
    public static void main(String[] args) {
        
         List<Student> s = new ArrayList<>();
        s.add(new Student("abc", 18));
        s.add(new Student("syz", 16));
        s.add(new Student("pqr", 20));
        s.add(new Student("axp", 24));
        s.add(new Student("byq", 17));

        Collections.sort(s, new Comparator<Student>() {

            @Override
            public int compare(Student t, Student t1) {
                return t.getAge() - t1.getAge();
            }
        });
        System.out.println(s);

        
    }
}
