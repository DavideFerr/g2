class contatoreNani2 extends Thread {
    public contatoreNani2(String nome){
        super();
        setName(nome);
    }
    public void run(){
     for(int i = 0; i < 7; i++){
     System.out.printl((i+1)+" "+getNam());    
        }  
    }
}
