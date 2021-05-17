public class Teste {

	public static void main(String[] args) {
		
		Contato contato = new Contato();
		contato.setNome("Diogenes Carvalho Matias");
		
		Endereco end = new Endereco();
		end.setNomeRua("Av Gal Manoel");
		end.setNumero("n/a");
		end.setComplemento("-");
		end.setCidade("Jaboatao");
		end.setEstado("Pernambuco");
		end.setCep("9999999");
		
		contato.setEndereco(end);
		
		
		Telefone celular = new Telefone();
		celular.setTipo("celular");
		celular.setDdd("11");
		celular.setNumero("99999-9999");
		
		Telefone telefoneResidencial = new Telefone();
		telefoneResidencial.setTipo("casa");
		telefoneResidencial.setDdd("11");
		telefoneResidencial.setNumero("88888-8888");
		
		Telefone[] telefones = new Telefone[2];
		telefones[0] = celular;
		telefones[1] = telefoneResidencial;
		
		contato.setTelefones(telefones);
		
	
		System.out.println(contato.getNome());
	
		
		if (contato != null && contato.getEndereco() != null){
			System.out.println(contato.getEndereco().getCidade());
		}
		
		
		if (contato != null && contato.getTelefones() != null){
			for (Telefone t : contato.getTelefones()){
				System.out.println(t.getTipo()+" "+t.getDdd() + " " + t.getNumero());
			}
		}
	}

}
