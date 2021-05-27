package aplicação;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Servidor {
	
	byte[] pedido;
	byte[] pedidoFinal;
	byte[] saida;
	Socket socket;
	DataInputStream socketIn;
	DataOutputStream socketOut;
	FileInputStream arqLer;
	boolean parar = false, recomecar = false;
	int tamanhoArquivo;

	public Servidor() throws IOException, arquivoInexistenteException{
		
		this.pedido = new byte[1465];
		this.saida = new byte[1465];
		
		conexaoServidor();
	}

	public void conexaoServidor() throws IOException, arquivoInexistenteException{ 

		ServerSocket apresentacao = new ServerSocket(2002);
		
		this.socket = apresentacao.accept();
		this.socketIn = new DataInputStream(this.socket.getInputStream());
		int tamanho = this.socketIn.read(this.pedido);
		this.pedidoFinal = new byte[tamanho];
		
		editarPacote(tamanho);
		
		String requisicao = new String(this.pedidoFinal);
		
		if(verificar(requisicao) == true){
			
			this.arqLer = new FileInputStream("H:\\public_html\\" + requisicao);
			
			byte cabecalhoInicial[] = ("aceito\r\n" + this.tamanhoArquivo + "\r\n").getBytes();
			//byte arrayBytesTamanhoArquivo[] = new byte[4];
			//byte arrayCompleto[] = new byte[cabecalhoInicial.length + arrayBytesTamanhoArquivo.length];
			
			//intParaQuatroBytes(this.tamanhoArquivo, arrayBytesTamanhoArquivo, 0);
			
			//System.arraycopy(cabecalhoInicial, 0, arrayCompleto, 0, cabecalhoInicial.length);
			//System.arraycopy(arrayBytesTamanhoArquivo, 0, arrayCompleto, cabecalhoInicial.length, arrayBytesTamanhoArquivo.length);

			this.socketOut = new DataOutputStream(this.socket.getOutputStream());
			this.socketOut.write(cabecalhoInicial);
			//this.socketOut.write(arrayCompleto);
			
			while(this.tamanhoArquivo >= 1465) {
				
				this.arqLer.read(this.saida);
				this.socketOut.write("a\r\n".getBytes() + this.saida);
				this.tamanhoArquivo -= 1465;
				
				if(this.tamanhoArquivo < 1465) {
					
					this.arqLer.read(this.saida);
					this.socketOut.write(this.saida);
				}
			}
			
		}else{
			
			throw new arquivoInexistenteException();
		}
		
		//this.socket.close();
	}

/*	private void intParaQuatroBytes(int numero, byte[] array, int i) {
	
		for (int j = 0; j < 4; j++)
			
			array[i+j] = (byte)(numero >>> (24 - (j<<3)));
	}*/
	
	public void editarPacote(int tamanho) {
		
		for(int i = 0; i < tamanho; i++){
			
			this.pedidoFinal[i] = this.pedido[i];
		}
	}

	public boolean verificar(String arquivo){
		
		File arq = new File("H:\\public_html\\" + arquivo);
		this.tamanhoArquivo = (int) arq.length();
		
		return arq.exists();
	}
	
/*	public void pausa() {
		
		this.parar = true;
	}
	
	public void play() {
		
		this.parar = false;
	}
	
	public void stop() {
		
		this.parar = false;
		this.recomecar = true;
	}

	public void solicitarLista() {
		
		//solicitacao
	}*/
	
	public static void main(String argv[]) throws IOException, arquivoInexistenteException {
		
		new Servidor();
	}
}