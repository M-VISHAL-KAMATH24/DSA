public class LinkedList {
    
    class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    //constructor
    private Node head;
    public LinkedList(){
        head=null;
    }
    public void insertAtfront(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=newnode;
            return;
        }
        newnode.next=head;
        head=newnode;
    }
    public void insertAtend(int data){
        if(head==null){
            insertAtfront(data);
            return;
        }
        Node newnode=new Node(data);
        Node cur=head;
        while(cur.next!=null){
            cur=cur.next;
        }
        cur.next=newnode;
    }
    public void insertAtIndex(int data,int index){
        if(index<0){
            System.out.println("index out of bound");
            return;
        }
        Node newnode=new Node(data);
        Node cur=head;
        int curIndex=0;
        while(cur.next!=null && curIndex<index-1){
            cur=cur.next;
            curIndex++;
        }
        newnode.next=cur.next;
        cur.next=newnode;
    }
    //deletion in linked list
    public void deleteAtFront(){
        if(head==null){
            System.out.println("the list is empty cannot delte anything");
            return;
        }
        head=head.next;
    }
    public void deleteAtEnd(){
        if(head==null){
            System.out.println("LInked list is empty");
            return;
        }
        Node cur=head.next;
        Node prev=head;
        while(cur.next!=null){
            cur=cur.next;
            prev=prev.next;
        }
        prev.next=null;
    }
    public void deleteAtIndex(int index){
        if(head==null){
            System.out.println("list is empty");
            return;
        }
        if(index<0){
            System.out.println("index out of bounds");
            return;
        }
        if(index==0){
            head=head.next;
            return;
        }
        Node cur=head;
       for(int i=0;cur.next!=null && i<index-1;i++){
        cur=cur.next;
       }
       if(cur==null ||cur.next==null){
        System.out.println("index out of bounds");
        return;
       }
       cur.next=cur.next.next;
    }
    public void delete(int value){
        if(head==null){
            System.out.println("list is empty macha");
            return;
        }
        if(head.data==value){
            head=head.next;
        }
        Node temp=head;
        while(temp.next!=null && temp.next.data!=value){
            temp=temp.next;

        }
        if(temp.next==null||temp==null){
            System.out.println("unable to delete cause the data is not found");
            return;
        }
        temp.next=temp.next.next;
    }
    public void display(){
        Node cur=head;
        while(cur!=null){
            System.out.print(cur.data+" ->");
            cur=cur.next;
        }
        System.out.println("null");
    }
    public static void main(String args[]){
        LinkedList list1=new LinkedList();
        list1.insertAtfront(10);
        list1.insertAtend(55);
        list1.insertAtIndex(25, 01);
        list1.insertAtIndex(28, 03);
        list1.deleteAtFront();
        list1.deleteAtEnd();
        list1.deleteAtIndex(0);
        list1.insertAtfront(97);
        list1.insertAtfront(98);
        list1.insertAtfront(199);
        list1.insertAtfront(166);
        list1.delete(98);
        list1.delete(166);
        list1.display();

    }

}
