class Node{
   int data;
   Node next;
   //constructor
   Node(int data){
       this.data=data;
       this.next=null;
   }
}
public class CycleDetection{
 public Node head;
 public CycleDetection(int data){
    head=null;
 }
 public static boolean detectcycle(Node head){
    if(head==null || head.next==null){
        return false;
    }
    Node slow=head;
    Node fast=head;
    while(fast!=null && fast.next!=null){
        slow=slow.next;
        fast=fast.next.next;

        if(slow==fast){
            return true;
        }
    }
    return false;
 }

 public static Node CycleStart(Node head){
    if(head==null || head.next==null){
        return null;
    }
    Node s=head;
    Node f=head;
    while(f!=null && f.next!=null){
        s=s.next;
        f=f.next.next;
        if(s==f){
            Node p1=head;
            Node p2=s;
            while(p1!=p2){
                p1=p1.next;
                p2=p2.next;
            }
            return p1;

        }
    }
    return null;
 }
    public static void main(String args[]){
        Node head=new Node(1);
        head.next=new Node(2);
        head.next.next=new Node(3);
        head.next.next.next=new Node(4);
        head.next.next.next.next=new Node(5);
        head.next.next.next.next= head.next.next;

        


         if(detectcycle(head)){
            System.out.println("has cycle");
         }else{
            System.out.println("no cycle");
         }
         Node res=CycleStart(head);
        System.out.println(res.data);

    }
}