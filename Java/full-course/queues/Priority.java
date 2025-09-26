import java.util.*;

// Priority queues - same as regular queues but auto order elements based on a priority scheme
// highest priority served before lower priority

public class Priority{
    public static void main(String[] args) {
        PriorityQueue<String> sensors_ascending = new PriorityQueue<>();

        sensors_ascending.offer("Pressure");
        sensors_ascending.offer("Temperature");
        sensors_ascending.offer("Health");
        sensors_ascending.offer("Comms");
        
        // priority based on lexicographic ordering
        // [Comms, Health, Pressure, Temperature]
        System.out.println(sensors_ascending + "\n");

        // using a custom comparator
        PriorityQueue<String> sensors_P = new PriorityQueue<>(new SensorComparator());
        sensors_P.offer("Temperatures");
        sensors_P.offer("Auxillary");
        sensors_P.offer("Backup");
        sensors_P.offer("Safety_P");
        sensors_P.offer("Pressure_P");
        sensors_P.offer("Health_P");
        System.out.println(sensors_P);
        // sensors with a trailing _P signify high priority reads and must be pushed to the front of queue
        while (!sensors_P.isEmpty()) {
            System.out.println("READING: " + sensors_P.poll());
        }

    }
    static class SensorComparator implements Comparator<String>{
        @Override
        public int compare(String s1, String s2){
            boolean s1_P = s1.endsWith("_P");
            boolean s2_P = s2.endsWith("_P");

            if (s1_P && !s2_P) return -1;
            if (!s1_P && s2_P) return 1;
            return s1.compareTo(s2);
        }
    }

}