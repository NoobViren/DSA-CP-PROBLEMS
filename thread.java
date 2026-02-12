public class thread{
    public static void main(String[] args){
        Hi o1 = new Hi();
        Hello o2 = new Hello();
        new Thread(o1).start();
        new Thread(o2).start();
    }
}
class Hi extends Thread{
    public void run(){
        for(int i = 1;i<=5;i++){
            System.out.println("hi");
            Thread.sleep(2000);
        }
    }
}
class Hello extends Thread{
    public void run(){
        for(int i = 1;i<=5;i++){
            System.out.println("Hello");
        }
    }
}