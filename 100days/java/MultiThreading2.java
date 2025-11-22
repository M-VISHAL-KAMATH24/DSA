import java.util.*;

class Mytask implements Runnable{
    @Override
    public void run(){
        for(int i=0;i<=5;i++){
            System.out.println(Thread.currentThread().getName()+" -> "+i);
            try{
                    Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.err.println(e);
            }
        }
    }
}
public class MultiThreading2 {
    public static void main(String args[]){
        Mytask t1=new Mytask();
        Mytask t2=new Mytask();

Thread t3=new Thread(t1);
Thread t4=new Thread(t2);

t3.setName("vishal");
t4.setName("rayan");
t3.start();
t4.start();
    }
    
}
