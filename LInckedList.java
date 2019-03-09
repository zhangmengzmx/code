package wwww;

public class LInckedList {
    private int size;
    private Node head;
    private class Node{
        private Object data;
        private Node next;
        public Node(Object data){
            this.data=data;
        }
    }
    public void addFirst(Object data){
        Node newNode = new Node(data);

    }
}
