<Qucs Schematic 0.0.17>
<Properties>
  <View=0,-120,1414,831,1,0,0>
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
  <.TR TR1 1 40 -30 0 63 0 0 "lin" 1 "0" 1 "250 ms" 1 "100" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <C C1 1 450 110 17 -26 0 1 "100 nF" 1 "" 0 "neutral" 0>
  <Lib LM140_1 1 520 140 -40 31 0 2 "Regulators" 0 "LM140-5V" 0>
  <R R1 1 230 240 -26 15 0 0 "10k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <R R2 1 320 340 15 -26 0 1 "10k Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "US" 0>
  <Vdc V4 1 400 400 -26 18 0 0 "3.3 V" 1>
  <Lib AmpliOp741 1 530 380 25 20 0 0 "OpAmps" 0 "uA741" 0>
</Components>
<Wires>
  <230 550 320 550 "" 0 0 0 "">
  <200 550 230 550 "" 0 0 0 "">
  <200 380 200 550 "" 0 0 0 "">
  <520 30 520 80 "" 0 0 0 "">
  <520 30 940 30 "" 0 0 0 "">
  <940 30 940 550 "" 0 0 0 "">
  <200 100 200 240 "Ubat" 230 190 124 "">
  <450 80 520 80 "" 0 0 0 "">
  <450 140 460 140 "" 0 0 0 "">
  <460 140 460 170 "" 0 0 0 "">
  <200 100 570 100 "" 0 0 0 "">
  <570 100 570 140 "" 0 0 0 "">
  <460 140 470 140 "" 0 0 0 "">
  <520 80 520 110 "" 0 0 0 "">
  <320 550 370 550 "" 0 0 0 "">
  <200 240 200 320 "" 0 0 0 "">
  <260 240 320 240 "" 0 0 0 "">
  <320 240 460 240 "" 0 0 0 "">
  <320 240 320 310 "" 0 0 0 "">
  <320 370 320 550 "" 0 0 0 "">
  <370 550 540 550 "" 0 0 0 "">
  <370 400 370 550 "" 0 0 0 "">
  <460 170 540 170 "" 0 0 0 "">
  <540 170 540 340 "Ureg" 550 220 50 "">
  <460 240 460 360 "In" 490 290 80 "">
  <460 360 490 360 "" 0 0 0 "">
  <590 380 800 380 "Out" 780 350 163 "">
  <430 400 490 400 "Uref" 470 430 23 "">
  <540 550 940 550 "" 0 0 0 "">
  <540 420 540 550 "" 0 0 0 "">
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
  <Rectangle 330 370 130 100 #000000 2 1 #ffffff 1 1>
  <Text 340 400 12 #000000 0 "+3.3v arduino\n(parfait)">
</Paintings>
