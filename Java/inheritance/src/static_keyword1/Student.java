package static_keyword1;

public class Student {

    static int count = 0;

    Student() {
        count++;
    }

    void display() {
        System.out.println("Total Students :" + count);
    }
}
