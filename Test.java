package bitetech.ds;

public class Test {
    public static void main(String[] args) {
        int[] arr = new int[]{1,2};
        System.out.println(sum(arr));
//        Sequence sequence = new SequenceArrayImpl(10);
//        Person per = new Person("xiao");
//        sequence.add(per);
//        System.out.println(sequence.contains(new Person("xiao")));

//        Sequence sequence = new SequenceLinkedImpl();
//        sequence.add(1);
//        sequence.add(2);
//        sequence.add(3);
//        ((SequenceLinkedImpl) sequence).add(2,666);
//        sequence.add(null);
//        System.out.println(sequence.contains(2));
//        System.out.println(sequence.contains(null));
//        System.out.println(sequence.contains(20));
//        sequence.remove(2);
//        Object[] arr = sequence.toArray();
//        for(Object o : arr){
//            System.out.print(o+"、");
//        }
//        sequence.clear();
//        System.out.println(sequence.size());
//        Sequence sequence = new DoubleSequenceLinkImpl();
//        sequence.add(1);
//        sequence.add(2);
//        sequence.add(3);
//        sequence.add(4);
//        sequence.add(5);
//        sequence.remove(1);
//        sequence.remove(1);
//        Object[] arr = sequence.toArray();
//        for(Object o : arr){
//            System.out.print(o+"、");
//        }
//
   }
    public static int sum(int[] arr){
        return sum(0,arr);
    }
    private static int sum(int l,int[] arr){
        if(l == arr.length){
            return 0;
        }else{
            return arr[l] + sum(l + 1,arr);
        }
    }

}
