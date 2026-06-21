/**
 * Definition of Interval:
 * public class Interval {
 *     public int start, end;
 *     public Interval(int start, int end) {
 *         this.start = start;
 *         this.end = end;
 *     }
 * }
 */

class Solution {
    public int minMeetingRooms(List<Interval> intervals) {
        Collections.sort(intervals, (a, b)->Integer.compare(a.start, b.start));

        PriorityQueue<Integer> minheap= new PriorityQueue<>();
         for(Interval i: intervals){
            if(!minheap.isEmpty() && minheap.peek()<=i.start){
                minheap.poll();
            }
            minheap.offer(i.end);
         }
         return minheap.size();

    }
}
