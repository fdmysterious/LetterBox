<Qucs Schematic 0.0.17>
<Properties>
  <View=0,-60,1350,831,1,0,0>
  <Grid=10,10,1>
  <DataSet=batterie_faible_parfaite.dat>
  <DataDisplay=batterie_faible_parfaite.dpl>
  <OpenDisplay=1>
  <Script=batterie_faible_parfaite.m>
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
  <Vdc V4 1 520 140 -60 -26 0 3 "5 V" 1>
  <.TR TR1 1 40 -30 0 63 0 0 "lin" 1 "0" 1 "250 ms" 1 "100" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
</Components>
<Wires>
  <230 550 440 550 "" 0 0 0 "">
  <490 380 800 380 "Out" 550 350 30 "">
  <390 260 390 360 "" 0 0 0 "">
  <440 420 440 550 "" 0 0 0 "">
  <200 550 230 550 "" 0 0 0 "">
  <200 380 200 550 "" 0 0 0 "">
  <200 260 390 260 "In" 300 280 87 "">
  <200 260 200 320 "" 0 0 0 "">
  <440 320 440 340 "" 0 0 0 "">
  <360 320 440 320 "" 0 0 0 "">
  <360 320 360 400 "" 0 0 0 "">
  <360 400 390 400 "" 0 0 0 "">
  <520 30 520 110 "" 0 0 0 "">
  <520 30 940 30 "" 0 0 0 "">
  <940 30 940 550 "" 0 0 0 "">
  <440 550 940 550 "" 0 0 0 "">
  <440 320 520 320 "" 0 0 0 "">
  <520 170 520 320 "Ureg" 550 190 54 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
  <Rectangle 770 330 130 100 #000000 2 1 #ffffff 1 1>
  <Text 780 360 12 #000000 0 "Pin 2 arduino">
  <Text 190 600 20 #000000 0 "Détection de la batterie faible\n(version "parfaite")">
  <Rectangle 160 300 130 100 #000000 2 1 #ffffff 1 1>
  <Text 170 330 12 #000000 0 "Batterie">
  <Rectangle 450 80 130 100 #000000 2 1 #ffffff 1 1>
  <Text 460 110 12 #000000 0 "+5v arduino">
</Paintings>
