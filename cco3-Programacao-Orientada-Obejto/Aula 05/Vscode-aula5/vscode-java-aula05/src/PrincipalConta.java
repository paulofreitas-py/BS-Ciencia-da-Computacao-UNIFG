

public class PrincipalConta {
    
    public static void main(string[] args) {

        Conta minhaConta = new Conta();
        Cliente cliente = new Cliente();
        minhaConta.titular = cliente;  
        minhaConta.titular.nome = "Paulo";
        System.out.printl("Nome do titular" )

