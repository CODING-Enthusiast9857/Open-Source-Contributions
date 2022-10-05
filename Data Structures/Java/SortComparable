import lombok.AllArgsConstructor;
import lombok.Data;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class SortComparable {

    public static void main(String[] args) {
        List<User> list = new ArrayList<>();
        list.add(new User("A", 12));
        list.add(new User("B", 8));
        list.add(new User("C", 1));
        list.add(new User("D", 15));
        list.add(new User("E", 20));

        System.out.println(list);
        Collections.sort(list);
        System.out.println(list);
    }

    @Data
    @AllArgsConstructor
    public static class User implements Comparable<User> {
        private String username;
        private int age;

        @Override
        public int compareTo(User o) {
            if (o == null || age == o.getAge())
                return 0;
            else
                return age < o.getAge() ? -1 : 1;
        }
    }
}
