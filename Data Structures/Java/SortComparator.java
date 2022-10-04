import lombok.AllArgsConstructor;
import lombok.Data;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

public class SortComparator {

    public static void main(String[] args) {
        List<User> list = new ArrayList<>();
        list.add(new User("A", 12, 100));
        list.add(new User("B", 8, 90));
        list.add(new User("C", 1, 30));
        list.add(new User("D", 15, 85));
        list.add(new User("E", 20, 10));

        System.out.println(list);

        list.sort(new AgeComparator());
        System.out.println(list);

        list.sort(new MarksComparator());
        System.out.println(list);
    }

    @Data
    @AllArgsConstructor
    public static class User {
        private String username;
        private int age;
        private int marks;
    }

    public static class AgeComparator implements Comparator<User> {

        @Override
        public int compare(User o1, User o2) {
            if (o1 == null || o2 == null || o1.getAge() == o2.getAge())
                return 0;
            else
                return o1.getAge() < o2.getAge() ? -1 : 1;
        }
    }

    public static class MarksComparator implements Comparator<User> {

        @Override
        public int compare(User o1, User o2) {
            if (o1 == null || o2 == null || o1.getMarks() == o2.getMarks())
                return 0;
            else
                return o1.getMarks() < o2.getMarks() ? -1 : 1;
        }
    }
}
