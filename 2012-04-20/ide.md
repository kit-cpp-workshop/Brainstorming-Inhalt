# IDE


## Wahl der IDE

* Eclipse (http://www.eclipse.org/) vorführen
* Wer will, kann sich natürlich auch in andere IDEs einarbeiten, ist dann aber auf sich selbst gestellt.
* Visual Studio gibt es kostenlos über MSDNAA, alternativ Visual Studio Express
* Direkt auf der Shell arbeiten oder Makefiles (evtl. kurze Einführung im Kapitel über Compiler/Linker)


## Theorie

### IDE - Was ist das?

* Sammlung und Integration von Werkzeugen
* graphische Aufbereitung (z.B. von gdb oder gcc-Fehlermeldungen)
* Guter code-Editor
* Organisation / Strukturierung der project files (sources, resources, ..)
* Wichtig für Eclipse: piping der cmd line kurz erklären (Eclipse stellt die shell in nem eigenen child window dar - hingegen nutzt VS die native Windoof-cmd-line)


## Praxis

* Einrichten der IDE (insb. unter Windows mittels PATH)
* Demonstration des Debuggers: step, breakpoint, continue, watches / variables, evtl. memory, registers, disassembly
* einfache trace-Techniken: breakpoint, cout, cerr (dann auch gleich ein wenig zu den stream-insert-operatoren `<<`?)