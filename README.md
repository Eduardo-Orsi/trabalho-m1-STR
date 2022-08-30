# Trabalho M1 - Sistemas em Tempo Real

Acadêmicos: Eduardo Orsi e Fábio

Professor: Felipe Viel

O programa implementado visa atender a problemárica descrita abaixo:

# Problemática

Uma fabricante de automóveis quer testar um novo sistema de monitoramento do comportamento
de várias áreas de um veículo no qual ela está projetando. O projeto é novo e permitirá controle e
noção do que está acontecendo em todo o veículo. A empresa, em um primeiro momento, dividiu o
carro em 4 subsistemas: (i) motor; (ii) frenagem; (iii) equipamentos de suporte a vida; e (iv) LVT (luz,
vidros e travas). No motor, deve-se monitorar e controlar a injeção eletrônica e temperatura interna.
Na frenagem, deve-se monitorar e controlar o ABS nas duas rodas dianteiras. Nos equipamentos
de suporte a vida, deve-se monitorar e controlar o airbag e cinto de segurança. Já no LVT, deve-se
monitorar e controlar a luz dos faróis dianteiros, sistema de vidros elétricos do motorista e
passageiro (só parte da frente) e trava das duas portas da frente. Todos os sistemas se conectam
a um computador de bordo central, que deve fornecer, reter e controlar ações destes sistemas.
Cada sistema conta com um sensor e um controlador (totalizando 12 sensores e 12 controladores).
Você deve assumir que todos os sensores e controladores estão na mesma distância (1 m) do
computador de bordo e que o tempo de envio de dados é de 1 Mbps, sendo que os dados podem
demorar até 10us para se propagar pelo fio (do nodo até o computador). Os deadlines relativos para
uma ação de controle (após detecção do sensor) são:

• Injeção eletrônica: 500 us após alteração no pedal

• Temperatura do motor: 20 ms após detecção de temperatura acima do limite

• ABS: 100 ms após acionamento no pedal

• Airbag: 100 ms após detecção de choque

• Cinto de segurança: 1 segundo após carro em movimento

• LVT: 1 segundo após interação do usuário

O computador de bordo deve também alimentar um display para o usuário com alertas de
informações (mensagens com caracteres). A atualização do display deverá sempre ser de 500 ms.
Como a empresa quer economizar no sistema no software e no computador de bordo, ela gostaria
que fosse feito um protótipo de sistema sem implementação de paralelismo, multiprocessamento
ou multithread. Ela gostaria de monitorar todos os sensores indicados acima e, após amostrar todos
os sensores, exibir em um display (ou tela) o estado dos sensores (que indicam o estado dos
subsistemas monitorados). A empresa exige que seja feita uma sub-rotina para cada sensor
monitorado e uma sub-rotina para atualização do display (ou tela). Considere também que o sensor
demora 1 us para fazer a aquisição da amostra corretamente e que o controlador demora 5 us para
agir.
