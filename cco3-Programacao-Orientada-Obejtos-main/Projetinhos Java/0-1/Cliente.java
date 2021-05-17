package aplicação;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class Cliente {

	int tamanhoArquivo, cont;
	BufferedReader socketIn1;
	DataInputStream socketIn2;
	DataOutputStream socketOut;
	FileOutputStream arqEsc; 
	byte[] recebido;
	
	public Cliente() throws UnknownHostException, IOException{
		
		this.recebido = new byte[1465];
		//this.tamanhoArquivo = 3423;
		this.cont = 0;
		conexao();
	}
	
	public void conexao() throws UnknownHostException, IOException{

		Socket sock = new Socket("localhost", 2002); 
		String inFromUser = new Scanner(System.in).next();//simula a requisicao
		byte[] requisicao = inFromUser.getBytes();
		
		this.socketOut = new DataOutputStream(sock.getOutputStream());
		this.socketOut.write(requisicao);

		this.socketIn1 = new BufferedReader(new InputStreamReader(sock.getInputStream()));
		this.socketIn2 = new DataInputStream(sock.getInputStream());
		
		this.arqEsc = new FileOutputStream("H:\\public_html\\testeEscrita.txt");
		
		do {
			
			int numeroIdentificacao = analisarPacote();
			
			if(numeroIdentificacao == 0){
				
				//n faz nada
				
			}else if(numeroIdentificacao == 1){
				
				this.socketIn2.read(this.recebido);
				this.arqEsc.write(this.recebido);
				this.tamanhoArquivo -= 1465;
				
				if(this.tamanhoArquivo < 1465){
					
					this.recebido = new byte[this.tamanhoArquivo];
					this.socketIn2.read(this.recebido);
					this.arqEsc.write(this.recebido);
				}
			
			}else{
				
				//implementar os outros formatos
			}	
			
		} while(this.tamanhoArquivo >= 1465);
	}
	
	public int analisarPacote() throws IOException {
		
		String string = this.socketIn1.readLine();
		System.out.println(string);
		
		if(string.equalsIgnoreCase("aceito")) {
			
			//byte arrayTamanho[] = new byte[4];
			this.tamanhoArquivo = Integer.parseInt(this.socketIn1.readLine());
			System.out.println(tamanhoArquivo);
			//this.tamanhoArquivo = quatroBytesParaInt(arrayTamanho, 0);
			
			return 0;
			
		} else if(string.equalsIgnoreCase("a"))
			
			return 1;			
		
		else
			
			//implementar otros tipos de cabeçalho
			return 1;
	}
	
	/*private void intParaQuatroBytes(int numero, byte[] array, int i) {
		for (int j = 0; j < 4; j++)
			array[i+j] = (byte)(numero >>> (24 - (j<<3)));
	}*/

/*	private int quatroBytesParaInt(byte[] array, int i) {
		
		return (array[i] << 24) | (0xFF0000 & (array[i+1] << 16)) | (0xFF00 & (array[i+2] << 8)) | (0xFF & array[i+3]);
	}*/
	
	public void play() throws IOException{
		
		this.socketOut.writeBytes("c/r/n");
	}
	
	public void pausa() throws IOException{
		
		this.socketOut.writeBytes("p/r/n");
	}
	
	public void stop() throws IOException{
		
		this.socketOut.writeBytes("i/r/n");
	}
	
	public void solicitarLista() throws IOException{
		
		this.socketOut.writeBytes("s/r/n");
	}
	
	public static void main(String[] args) throws UnknownHostException, IOException  {
		
		new Cliente();
	}		
}