import java.util.*;

class MyThread extends Thread{
    @Override
    public void run(){
        for(int i=0;i<5;i++){
            System.out.println(Thread.currentThread().getName()+" -> "+i);

            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }

}
public class MultiThreading {
    public static void main(String args[]){
        MyThread t1=new MyThread();
        MyThread t2=new MyThread();
        t1.setName("thread A");
        t2.setName("thread B");
        t1.start();
        t2.start();



    }
    
}
