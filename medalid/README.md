# 1. Medalid (`medalid`)

*1 sekund*<br />
*10 punkti*

Oleg on osalenud mitmes spordivõistluste sarjas. Igas sarjas on võistlused järjest nummerdatud,
näiteks "36. Kükametsa Tõukekelgumaraton".

Igal võistlusel antakse igale osalejale medal. Igale medalile on kirjutatud võistluse järjenumber
oma sarjas, aga muus osas on medalid identsed.

Oleg on osalenud paljudel võistlustel ning tal on suur kotitäis medaleid. Tuvastada vähim võimalik
erinevate sarjade arv, millelt ta need medalid saada võis.

On teada, et kui Oleg mingis sarjas osalema hakkab, käib ta järjest kõigil selle sarja võistlustel,
ühtki vahele jätmata. Seega, kui ta käib näiteks 36. ja 38. Kükametsa Tõukekelgumaratonil, osaleb ta
kindlasti ka 37. Kükametsa Tõukekelgumaratonil.

**Sisend.** Tekstifaili `medalidsis.txt` esimesel real on medalite arv *N* (1 &le; *N* &lt; 10<sup>6</sup>)
ja teisel real *N* tühikutega eraldatud täisarvu *M<sub>i</sub>* (1 &le; *M<sub>i</sub>* &le; 1000):
medalitel olevad võistluste järjenumbrid.

**Väljund.** Tekstifaili `medalidval.txt` esimesele reale väljastada vähim võimalik võistlussarjade
arv *V* ning järgmisele *V* reale üks võimalik medalite jaotus sarjade vahel. Igale reale väljastada
ühes sarjas osalemiste arv ning sellelt saadud medalite numbrid kasvavas järjekorras.

**Näide.**

`medalidsis.txt`

>     10
>     46 47 48 45 2 46 48 3 1 49

`medalidval.txt`

>     4
>     3 1 2 3
>     5 45 46 47 48 49
>     1 46
>     1 48

**Hindamine.** Testides väärtusega 5 punkti on 1 &le; *N* &le; 100.
