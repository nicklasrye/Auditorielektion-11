# Auditorieopgaver i Lektion 11

## Live coding: Potensfunktion
Live coding foregår i [src/live.c](src/live.c)

---
## Auditorieopgave A
Kan løses i [src/powerof.c](src/powerof.c)

> I skriver en potensfunktion ud fra den smarte rekursive definition:
> 
> $$\text{tal}^\mathit{potens} = \begin{cases}\ 1 & \text{hvis } \mathit{potens} = 0 \\\ \big(\text{tal}^{\mathit{potens} / 2}\big)^2 & \text{hvis } \mathit{potens} > 0 \text{ og lige} \\\ \text{tal} \cdot \text{tal}^{\mathit{potens} - 1} & \text{hvis } \mathit{potens} > 0 \text{ og ulige} \end{cases}$$

---
## Live coding: Den Polske Lommeregner
Live coding fortsætter i [src/live.c](src/live.c). Det færdige kode ligner det i [src/calculator.c](src/calculator.c). 
(I [src/polish_calculator.c](src/polish_calculator.c) er implementeret en version der læser fra en streng i stedet for `scanf`.)

---
## Auditorieopgave B
Kan løses i [src/rec_array.c](src/rec_array.c)

> Skriv et rekursivt program som:
> 
> Givet et array af integers udregner summen af alle tallene.

> HINTs:
> - Funktionen skal returnere en `int`.
> - Base casen "det tomme (sub)array" skal returnere 0.
