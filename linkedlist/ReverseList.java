class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
public class ReverseList {
    
    public Node head;
    public ReverseList(int data){
        head=null;
    }
    public static Node ReversalList(Node head){
        Node prev=null;
        Node cur=head;
        while(cur!=null){
            Node next=cur.next;
            cur.next=prev;
            prev=cur;
            cur=next;

        }
        return prev;
    }
    public static void display(Node head){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ->");
            temp=temp.next;
        }
        System.out.println("null");
    }
    public static void main(String args[]){
        System.out.println("hello");
        Node list1=new Node(5);
        list1.next=new Node(10);
        list1.next.next=new Node(20);
        list1.next.next.next=new Node(30);
        list1.next.next.next.next=new Node(40);
        display(list1);
        list1=ReversalList(list1);
        display(list1);
        
    }
}
