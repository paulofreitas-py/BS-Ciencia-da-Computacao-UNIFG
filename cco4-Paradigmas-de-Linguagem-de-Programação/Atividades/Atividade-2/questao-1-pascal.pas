program questao_1;
    var
        x:integer;
    begin
        writeln ('Informe o numero: ');
        read(x);
        If x MOD 2=0 then
        writeln('numero par')
        Else
        writeln('numero impar');
        If (x>0) then
            writeln('Numero positivo')
        Else If (x<0) then
            writeln('Numero negativo')
        Else
            writeln('Numero zero');
    end.
