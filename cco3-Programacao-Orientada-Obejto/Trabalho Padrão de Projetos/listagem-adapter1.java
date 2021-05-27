
// Listagem 1: Exemplo de implementação do Padrão Adapter
public class TomadaDeDoisPinos {
 public void ligarNaTomadaDeDoisPinos() {
  System.out.println("Ligado na Tomada de Dois Pinos");
 }
}
public class TomadaDeTresPinos {
 public void ligarNaTomadaDeTresPinos() {
  System.out.println("Ligado na Tomada de Tres Pinos");
 }
}
public class AdapterTomada extends TomadaDeDoisPinos {
 private TomadaDeTresPinos tomadaDeTresPinos;
 public AdapterTomada(TomadaDeTresPinos tomadaDeTresPinos) {
  this.tomadaDeTresPinos = tomadaDeTresPinos;
 }
 public void ligarNaTomadaDeDoisPinos() {
  tomadaDeTresPinos.ligarNaTomadaDeTresPinos();
 }
}