# 4. Faktoriaali tegurid (`fact`)

*1 sekund*<br />
*40 punkti*

Iga positiivse täisarvu *n* jaoks defineerime *s*(*n*) kui vähima positiivse täisarvu *m*,
mille faktoriaal<sup>1</sup> jagub arvuga *n*.

Näiteks:

*s*(1) = 1,

*s*(2) = 2, (sest 1! (=1) ei jagu 2-ga, kuid 2! (=2) jagub)

*s*(4) = 4, (3! (=6) ei jagu 4-ga, kuid 4! (=24) jagub)

*s*(6) = 3, (3! (=6) jagub 6-ga)

*s*(9) = 6, (6! (=720) jagub 9-ga)

*s*(10) = 5, jne

Leida antud täisarvude *A* ja *B* jaoks summa

*s*(*A*) + *s*(*A* + 1) + . . . + *s*(*B*).

**Sisend.** Tekstifaili `factsis.txt` ainsal real on antud kaks tühikuga eraldatud täisarvu
*A* ja *B* (1 &le; *A* &le; *B* &le; 1000000).

**Väljund.** Tekstifaili `factval.txt` ainsal real tuleb väljastada otsitav summa.

**Näide.**

`factsis.txt`

>     5 10

`factval.txt`

>     30

Vastus on: *s*(5) + *s*(6) + *s*(7) + *s*(8) + *s*(9) + *s*(10) = 5 + 3 + 7 + 4 + 6 + 5 = 30.

---
1. Positiivse täisarvu *m* faktoriaal (tähistatakse *m*!) on kõigi täisarvude 1,...,*m* korrutis:

   *m*! := 1 · 2 · 3 · ... · *m*.
