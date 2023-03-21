	Para implementarmos a versão multiprocessada do cálculo fatorial,
dividimos o cálculo em duas metades, em que ao usar a função fork(), o processo pai calcula
uma metade do cálculo e o processo filho calcula a outra metade, para no final ambas as variáveis
serem multiplicadas e se tornarem o resultado do fatorial.
	Foi constatado que na versão serial o tempo de execução foi mais lento que a versão
multiprocessada.