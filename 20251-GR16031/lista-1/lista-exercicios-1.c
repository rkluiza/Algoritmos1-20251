// Lista 1
/*

1- Utilizando o OnlineGDB, pesquise e implemente um programa que escreva na tela “Olá Mundo!”
em 3 linguagens de programação diferentes. Qual é o comando de saída de dados nestas 3 linguagens?

                    Em python o comando de saída de dados é print();
                    Em C o comando de saída de dados é printf();
                    Em Java o comando de saída de dados é System.out.println();

--------------------------------------------------------------------------------------------------------------

2- Analise a seguinte descrição de um problema e identifique as partes comuns de um algoritmo
(Entrada, Processamento e Saída): Um programa deve calcular a idade de uma pessoa com base no ano de nascimento fornecido pelo
usuário. O programa exibe a idade calculada na tela. Perguntas:

a) Qual é a entrada de dados?
                    O ano de nascimento do usuário
b) Qual é o processamento realizado?
                    O cálculo da idade do usuário
c) Qual é a saída de dados?
                    A idade do usuário

-------------------------------------------------------------------------------------------------------------

3- A seguir, são apresentados três problemas diferentes. Para cada um deles, identifique:
• Entrada de dados (informações fornecidas pelo usuário)
• Saída de dados (informação que será exibida para o usuário)
• Possíveis variáveis que poderiam ser utilizadas para armazenar os dados e realizar o
processamento.

a) Uma empresa deseja criar um sistema que calcula o salário final de um funcionário. O sistema
precisa receber o valor do salário base e o percentual de bônus aplicado. O programa deve
calcular e exibir o valor final do salário com o bônus incluído.

                    Entrada: Salário base e percentual de bônus
                    Saída: Salário final
                    Variáveis: salario_base, percentual_bonus, salario_final

b) Um posto de gasolina precisa de um programa que calcule o valor a ser pago por um cliente. O
cliente informa quantos litros abasteceu e o preço por litro. O programa deve calcular e exibir
o valor total da compra.

                    Entrada: Quantidade de litros abastecidos e preço por litro
                    Saída: Valor total da compra do combustível
                    Variáveis: litros_abastecidos, preço_litro, valor_total

c) Um consultório médico deseja registrar informações básicas dos pacientes para futuras
consultas. O sistema precisa armazenar os seguintes dados de cada paciente, para
acompanhamento ao longo do tempo: sexo (M ou F), dia, mês e ano de nascimento, altura
(em metros) e peso (em kg)

                    Entrada: Sexo, dia, dia, mês e ano de nascimento, altura e peso
                    Saída: Dados do paciente para futuras consultas
                    Variáveis: sexo, dia_nascimento, mês_nascimento, ano_nascimento, altura, peso

-------------------------------------------------------------------------------------------------------------

4. [...] A seguir, temos três situações que envolvem cálculos matemáticos. Para cada uma delas:
    Escreva a expressão matemática correspondente utilizando os operadores da linguagem C (+, -, *, /).
    • Se necessário, utilize parênteses para garantir que as operações sejam realizadas na ordem correta.

a) O preço final de um produto é calculado somando o valor original com o imposto aplicado. O
imposto corresponde a 10% do valor original, e um desconto fixo de R$5,00 é aplicado após a
adição do imposto.

                      float preço_final = (float preço_original + (float preço_original * 0.10)) - 5    


b) Um professor deseja calcular a média ponderada de três notas (n1, n2 e n3). Cada nota possui
um peso específico, representado pelas variáveis p1, p2 e p3.A média ponderada é dada pela
fórmula:
                        float n1, n2, n3, p1, p2, p3;
                        float media_ponderada = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3)    


c) Um ciclista quer calcular a distância total percorrida durante um treino. Ele percorreu:

• 2 horas a uma velocidade de 12 km/h
• 3 horas a uma velocidade de 18 km/h
A distância de cada trecho é dada por:
distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒

                        float distancia_total = (2 * 12) + (3 * 18)


d) Um programa deve calcular o valor de um polinômio quadrático do tipo: 𝑦 = 𝑎𝑥^2 + 𝑏𝑥 + 𝑐
onde x é fornecido pelo usuário, e a, b e c são coeficientes predefinidos.
                    float a, b, c, x, y;
                    y = (a * x * x) + (b * x) + c 


*/


