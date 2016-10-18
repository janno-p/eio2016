# 3. Miljonimäng (`mil`)

*1 sek / 5 sek*<br />
*30 punkti*

Arvutitel on miljonimängust oma versioon. Mängu alguses on mängijal 1 euro ja talle esitatakse
20 küsimust. Kui küsimuse tekst sisaldab 4 tähe pikkust või pikemat palindroomi, korrutatakse
mängija skoor kahega ja liidetakse sellele pikima küsimuses sisalduva palindroomi pikkus.
Vastasel korral jääb skoor endiseks.

Palindroomiks nimetatakse sõnet, mis on vasakult paremale ja paremalt vasakule lugedes sama,
näiteks "anna". Mängus võib palindroom moodustuda ka mitmest sõnast, näiteks "... and name ..."
sisaldab palindroomi "andna". Palindroom võib moodustuda ka küsimuse lõpust ja algusest, näiteks
"Jane went walking with Jelena" sisaldab palindroomi "enajane" ja "Matti is I ttam" palindroomi
"ittammatti".

Palindroomide otsimisel suur- ja väiketähti ei eristata. Tühikuid ja realõppe ei arvestata, küll
aga kirjavahemärke.

Kirjutada programm, mis loeb küsimused ja väljastab mängija lõppskoori.

**Sisend.** Tekstifailis `milsis.txt` on täpselt 20 [ASCII](https://et.wikipedia.org/wiki/ASCII)
kodeeringus tekstilõiku. Lõigud on üksteisest eraldatud tühjade ridadega. Iga lõik võib koosneda
kuni 600 märgist.

**Väljund.** Tekstifaili `milval.txt` ainsale reale väljastada mängija skoor mängu lõpus.

**Näide.**

`milsis.txt`

>     anna
>
>     title and name of the author
>
>     Jane went walking with Jelena
>
>     Matti is I ttam
>
>     lorem ipsum
>
>     Matti is I’ttam.
>
>     Jane went
>     walking
>     with Jelena

`milval.txt`

>     393


Neli esimest küsimust vastavad eeltoodud näidetele. Seega saab mängija algsest 1 eurost esimese
küsimusega 2 · 1 + 4 = 6, siis 2 · 6 + 5 = 17, siis 2 · 17 + 7 = 41 ja siis 2 · 41 + 10 = 92.
Viienda küsimuse tekstis palindroomi ei ole, seega ka skoor ei muutu. Kuues küsimus sisaldab
palindroomi "ttam.matt", seega saab uueks skooriks 2 · 92 + 9 = 193. Seitsmes küsimus on
sama, mis kolmas, ainult tekst on jagatud mitmele reale, seega saab uueks skooriks 2 · 193 +
7 = 393. Järgmised küsimused (mis on ülesande tekstis trükkimiseks liiga pikad, aga nähtavad
testimisserverist saadavas elektroonilises näitefailis) paindroome ei sisalda, seega jääb mängija
lõppsummaks selles mängus 393.

**Hindamine.** Testides, mis annavad 10 punkti, on iga küsimus ühel real ja ükski palindroom
ei ole jagatud küsimuse alguse ja lõpu vahel. Testides, mis annavad järgmised 10 punkti, ei ole
ükski palindroom jagatud küsimuse alguse ja lõpu vahel. Testides, mis annavad viimased 10
punkti, lisapiiranguid ei ole.
