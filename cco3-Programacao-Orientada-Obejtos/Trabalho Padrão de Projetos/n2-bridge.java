//? Interface 
public interface Aparelho {
    //? Metodos que iram ser usados pelas classes que implementam essa interface
    void ligar();
    void desligar();
    void aumentarVolume();
    void diminuirVolume();
}

//? Aparelho é uma interface usada para qualquer tipo de interface
public class Radio implements Aparelho {
    //? Oabstrações da classe Radio 
    private boolean ligado = false;
    private int volume = 10;
    private int canal = 13;

    //? Métodos usados para ligar e desligar o Radio
    @Orverride
    public void ligar() { ligado = true; }

    @Orverride
    public void desligar() { ligado = false; }

    //? Métodos para aumenta e dimnuir o volume
    @Orverride
    public void aumentarVolume () { volume = volume + 1; }
    
    @Orverride
    public void diminuirVolume () { volume = volume - 1; }
}


public interface Controle {
    void ligar();
    void desligar();
    void aumentarVolume();
    void diminuirVolume();
}


public class ControleBasico implements Controle {
    protected Aparelho aparelho;

    public ControleBasico(Aparelho aparelho) {
        this.aparelho = aparelho;
    }

    //? Metodos do controle remoto chamam os metodos da classe do Radio
    @Orverride
    public void ligar() {
        aparelho.ligar();
    }
    @Orverride
    public void desligar() {
        aparelho.desligar();
    }

    @Orverride
    public void aumentarVolume() {
        aparelho.aumentarVolume();
    }
    @Orverride
    public void diminuirVolume() {
        aparelho.diminuirVolume();
    }
}