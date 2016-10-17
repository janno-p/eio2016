# 1. Medalid (`medalid`)

*1 sekund*<br />
*10 punkti*

Oleg on osalenud mitmes spordivõistluste sarjas. Igas sarjas on võistlused järjest nummerdatud,
näiteks "36. Kukametsa Tõukekelgumaraton".

Igal võistlusel antakse igale osalejale medal. Igale medalile on kirjutatud võistluse järjenumber
oma sarjas, aga muus osas on medalid identsed.

Oleg on osalenud paljudel võistlustel ning tal on suur kotitäais medaleid. Tuvastada vähim võimalik
erinevate sarjade arv, millelt ta need medalid saada võis.

On teada, et kui Oleg mingis sarjas osalema hakkab, käib ta järjest kõigil selle sarja võistlustel,
ühtki vahele jätmata. Seega, kui ta käib näiteks 36. ja 38. Kukametsa Tõukekelgumaratonil, osaleb ta
kindlasti ka 37. Kukametsa Tõukekelgumaratonil.

**Sisend.** Tekstifaili `medalidsis.txt` esimesel real on medalite arv *N* (1 &le; *N* &lt; 10<sup>6</sup>)
ja teisel real *N* tühikutega eraldatud täaisarvu *M<sub>i</sub>* (1 &le; *M<sub>i</sub>* &le; 1000):
medalitel olevad võistluste järjenumbrid.

**Väljund.** Tekstifaili `medalidval.txt` esimesele reale väljastada vähim võimalik võistlussarjade
arv *V* ning järgmisele *V* reale üks võimalik medalite jaotus sarjade vahel. Igale reale väljastada
ühes sarjas osalemiste arv ning sellelt saadud medalite numbrid kasvavas järjekorras.

**Näide.**

*medalidsis.txt*

>     10
>     46 47 48 45 2 46 48 3 1 49

*medalidval.txt*

>     4
>     3 1 2 3
>     5 45 46 47 48 49
>     1 46
>     1 48

**Hindamine.** Testides väärtusega 5 punkti on 1 &le; *N* &le; 100.
