public class SinglyKLinkedList {
    class Node{
        int data;
        Node next;
        Node (int data){
            this.data=data;
            this.next=null;
        }

    }
    private Node head;
    public SinglyKLinkedList(){
        head=null;
    }
    public void insert(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=newnode;
        }else{
            Node currentNode=head;
            while(currentNode.next!=null){
                currentNode=currentNode.next;
            }
            currentNode.next=newnode;
        }
    }
    public void insertAtTop(int data){
        Node newnode=new Node(data);
        if(head==null){
            head=newnode;
            return;
        }
        else{
            newnode.next=head;
            head=newnode;
        }
    }
    public void insertAtEnd(int data){
        Node newnode=new Node(data);
        if(head==null){
            insertAtTop(data);
        }else{
            Node cur=head;
            while(cur.next!=null){
                cur=cur.next;
            }
            cur.next=newnode;
        }
    }
    public void insertAtIndex(int data,int index){
        Node newnode=new Node(data);
        if(index<0){
            System.out.println("cannot be inserted as inex is less than 0");
            return;
        }
        if(index==0){
            insertAtTop(data);
            return;
        }
        
            Node cur=head;
            int curInd=0;
            while(cur!=null && curInd<index-1){
                cur=cur.next;
                curInd++;
            }
            if(cur==null){
                System.out.println("index out of bound");
                return;
            }
                
                    newnode.next=cur.next;
                    cur.next=newnode;
                
            
        
    }
    public  void display(){
        Node current=head;
        while(current!=null){
            System.out.print(current.data+"->");
            current=current.next;
        }
        System.out.println("null");
    }
    public static void main(String[] args) {
        SinglyKLinkedList s1=new SinglyKLinkedList();
        s1.insert(5);
        s1.insert(15);
        s1.insert(10);
        s1.insertAtTop(22);
        s1.insertAtEnd(122);
        s1.insertAtIndex(1,1);
        s1.display();
    }
}
