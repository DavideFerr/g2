public class ProvaNani1 {

    public static void main(String[] args) {
        ContaINani thr1 = new ContaINani();
        thr1.start();
        System.out.println(Thread.currentThread().getName());
    }
    
}
