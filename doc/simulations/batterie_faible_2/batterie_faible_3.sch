<Qucs Schematic 0.0.17>
<Properties>
  <View=0,-60,900,831,1,0,0>
  <Grid=10,10,1>
  <DataSet=batterie_faible_3.dat>
  <DataDisplay=batterie_faible_3.dpl>
  <OpenDisplay=1>
  <Script=batterie_faible_3.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
  <.PortSym 40 20 1 0>
</Symbol>
<Components>
  <Port P1 1 780 360 4 -42 0 2 "1" 1 "analog" 0>
  <Lib OP1 1 580 360 25 20 0 0 "OpAmps" 0 "uA741" 0>
  <GND * 1 60 470 0 0 0 0>
  <.TR TR1 1 60 10 0 63 0 0 "lin" 1 "0" 1 "500 ms" 1 "100" 1 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <R R2 1 440 440 15 -26 0 1 "5k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R1 1 440 290 15 -26 0 1 "10k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Vdc V1 1 60 290 18 -26 0 1 "9 V" 1>
  <Lib LM140_1 1 350 220 -40 -46 0 0 "Regulators" 0 "LM140-5V" 0>
</Components>
<Wires>
  <590 400 590 470 "" 0 0 0 "">
  <640 360 780 360 "out" 770 330 94 "">
  <60 470 350 470 "" 0 0 0 "">
  <590 220 590 320 "" 0 0 0 "">
  <350 470 440 470 "" 0 0 0 "">
  <60 220 250 220 "" 0 0 0 "">
  <440 220 590 220 "" 0 0 0 "">
  <440 220 440 260 "" 0 0 0 "">
  <440 470 590 470 "" 0 0 0 "">
  <440 320 440 380 "" 0 0 0 "">
  <440 380 540 380 "Uref" 500 350 31 "">
  <440 380 440 410 "" 0 0 0 "">
  <250 340 540 340 "Uin" 350 310 66 "">
  <250 220 250 340 "" 0 0 0 "">
  <60 220 60 260 "" 0 0 0 "">
  <60 320 60 470 "" 0 0 0 "">
  <250 220 300 220 "" 0 0 0 "">
  <400 220 440 220 "Vreg" 440 190 13 "">
  <350 250 350 470 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
