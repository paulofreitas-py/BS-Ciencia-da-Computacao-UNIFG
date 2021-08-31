program questao_2;
    var
        n1, n2, n3, media: real;
    begin
        writeln ('Informe a primeira nota: ');
        read(n1);
        writeln ('Informe a segunda nota: ');
        read(n2);
        writeln ('Informe a terceira nota: ');
        read(n3);
        media := (n1 + n2 + n3)/3;
        writeln('Media do aluno: ', media:0:1);
        If media>=7 then
            writeln('Aluno aprovado')
        Else
            writeln('Aluno reprovado');
    end.
