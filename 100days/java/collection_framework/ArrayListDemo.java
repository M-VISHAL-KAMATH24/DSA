package collection_framework;
import java.util.*;
public class ArrayListDemo {
//add , get, remove,clear,addAll,contains,size
    public static void main(String args[]){
        ArrayList<Integer> list=new ArrayList<>();
        ArrayList<Integer> newlist=new ArrayList<>();

        newlist.add(51);
        newlist.add(52);
        newlist.add(53);
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.addAll(newlist);
        list.remove(1);
        list.remove(Integer.valueOf(52));
        list.remove(Integer.valueOf(51));
        System.out.println(list.get(1));
        list.set(0,455);
        System.out.println(list);
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
        if(list.contains(51)){
            System.out.println("it has 51");
        }else{
            System.out.println("no 51");
        }

    }
    
}
