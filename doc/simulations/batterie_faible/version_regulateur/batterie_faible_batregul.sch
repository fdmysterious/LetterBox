<Qucs Schematic 0.0.17>
<Properties>
  <View=0,-60,1350,831,1,0,0>
  <Grid=10,10,1>
  <DataSet=batterie_faible_batregul.dat>
  <DataDisplay=batterie_faible_batregul.dpl>
  <OpenDisplay=1>
  <Script=batterie_faible_batregul.m>
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
  <GND * 1 230 550 0 0 0 0>
  <Port Pin2 1 800 380 4 -27 0 2 "1" 0 "analog" 0>
  <Vac V3 1 200 350 18 -26 0 1 "9 V" 1 "1 Hz" 0 "0" 0 "0" 0>
  <Lib AmpliOp741 1 430 380 25 20 0 0 "OpAmps" 0 "uA741" 0>
  <.TR TR1 1 40 -30 0 63 0 0 "lin" 1 "0" 1 "250 ms" 1 "100" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <C C1 1 450 110 17 -26 0 1 "100 nF" 1 "" 0 "neutral" 0>
  <Lib LM140_1 1 520 140 -40 31 0 2 "Regulators" 0 "LM140-5V" 0>
  <R R1 1 280 240 -26 -45 0 2 "10k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 340 270 -85 -26 0 3 "20k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
</Components>
<Wires>
  <230 550 340 550 "" 0 0 0 "">
  <490 380 800 380 "Out" 550 330 30 "">
  <440 420 440 550 "" 0 0 0 "">
  <200 550 230 550 "" 0 0 0 "">
  <200 380 200 550 "" 0 0 0 "">
  <520 30 520 80 "" 0 0 0 "">
  <520 30 940 30 "" 0 0 0 "">
  <940 30 940 550 "" 0 0 0 "">
  <440 550 940 550 "" 0 0 0 "">
  <200 100 200 240 "Ubat" 230 190 124 "">
  <450 80 520 80 "" 0 0 0 "">
  <450 140 460 140 "" 0 0 0 "">
  <460 140 460 170 "" 0 0 0 "">
  <460 170 520 170 "" 0 0 0 "">
  <200 100 570 100 "" 0 0 0 "">
  <570 100 570 140 "" 0 0 0 "">
  <460 140 470 140 "" 0 0 0 "">
  <520 80 520 110 "" 0 0 0 "">
  <520 170 520 240 "Ureg" 550 220 50 "">
  <440 240 520 240 "" 0 0 0 "">
  <440 240 440 340 "" 0 0 0 "">
  <360 340 440 340 "" 0 0 0 "">
  <360 340 360 400 "" 0 0 0 "">
  <360 400 390 400 "" 0 0 0 "">
  <340 550 440 550 "" 0 0 0 "">
  <340 300 340 550 "" 0 0 0 "">
  <310 240 340 240 "" 0 0 0 "">
  <390 240 390 360 "In" 420 260 49 "">
  <200 240 200 320 "" 0 0 0 "">
  <200 240 250 240 "" 0 0 0 "">
  <340 240 390 240 "" 0 0 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
  <Rectangle 770 330 130 100 #000000 2 1 #ffffff 1 1>
  <Text 780 360 12 #000000 0 "Pin 2 arduino">
  <Text 190 600 20 #000000 0 "Détection de la batterie faible\n(version avec tension régulée)">
  <Rectangle 160 300 130 100 #000000 2 1 #ffffff 1 1>
  <Text 170 330 12 #000000 0 "Batterie">
  <Rectangle 420 40 200 160 #000000 2 1 #ffffff 1 1>
  <Text 470 100 12 #000000 0 "+5v arduino\n(regulé)">
</Paintings>
