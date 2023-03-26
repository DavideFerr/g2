public class contatoreNani extends thread {
    public void run() {
        System.out.println(Thread.currentThread().getName());
        for(int i = 0; i < 7: i++){
            System.out.print((i + 1) + " ");
        }
    }
}
