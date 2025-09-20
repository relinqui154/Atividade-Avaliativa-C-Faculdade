# Sistema de Vendas de Água

Este é um sistema simples de vendas de diferentes tipos de água com opções de pagamento. O código foi escrito em C e permite ao usuário escolher entre vários tipos de água e selecionar a forma de pagamento com base no total da compra.

## Funcionalidades

O programa oferece as seguintes opções:

1. **Escolha do tipo de água**:
   - Água: R$ 2,00
   - Água de Poço: R$ 1,00
   - Água com Gás: R$ 4,00
   - Água Benta: R$ 999999,00
   - Água Saborizada: R$ 6,00
   - Água de Coco: R$ 8,00

2. **Finalização da compra**:
   - O usuário pode finalizar a compra ou continuar escolhendo mais itens.

3. **Escolha da forma de pagamento**:
   - **Dinheiro ou Pix**: 15% de desconto no total.
   - **À vista no cartão de crédito**: 10% de desconto no total.
   - **Parcelamento em 2 vezes**: Sem juros, o valor é dividido em duas parcelas.
   - **Parcelamento em 3 vezes ou mais**: 10% de juros sobre o valor total.

4. **Interação amigável**:
   - O programa continua pedindo entradas até que o usuário forneça um valor válido.
   - O sistema oferece ao usuário a possibilidade de confirmar a compra e o pagamento.

## Como rodar

1. **Compilar o código**:

   Para compilar o código, utilize um compilador de C como o `gcc`:

   
2. **Executar o programa**:

Após compilar, execute o programa:


3. **Interação com o programa**:

O programa solicitará que o usuário escolha a opção de compra e, em seguida, selecione a forma de pagamento. As instruções são exibidas no terminal.

## Estrutura do código

O código é estruturado em dois principais loops `while` para controlar a interação com o usuário:

1. **Primeiro loop**: Controla o fluxo de escolha entre iniciar a venda ou sair.
2. **Segundo loop**: Permite que o usuário adicione diferentes tipos de água ao carrinho e finalize a compra.

### Principais variáveis:
- `agua`, `agua_do_poco`, `agua_gas`, `agua_benta`, `agua_sabor`, `agua_coco`: Variáveis que armazenam o preço de cada tipo de água.
- `somatoria`: Armazena o total da compra.
- `escolha`: Controla as opções do menu de escolhas.
- `verifica` e `verifica2`: Flags que controlam o fluxo dos loops de interação com o usuário.

### Funções de pagamento:
- Descontos de 10% ou 15% são aplicados dependendo da forma de pagamento.
- O parcelamento pode ser feito em 2 ou mais vezes, com juros para parcelamentos superiores a 2 vezes.






