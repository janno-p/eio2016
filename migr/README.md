# 6. WordNeti andmete migreerimine (`migr`)

*50 punkti*

WordNet<sup>1</sup> on sõnade ja nende omavaheliste seoste andmebaas, mida kasutatakse keelte
leksika uurimisel. Praegu on käsil üleminek uuele tarkvarale.

Selleks, et juba kogutud andmeid uue tarkvaraga kasutama hakata, tuleb andmed vanast süsteemist
eksportida, saadud ekspordifailid teisendada uue süsteemi impordifailideks ja need lõpuks uude
süsteemi importida.

Testimiskeskkonnas on antud üks näitefailide komplekt: `migrsis0.txt` on vana süsteemi (trepitud
tekstipõhise) ekspordifaili näide ja `migrval0.txt` sellele vastav uue süsteemi (JSON-põhine)
impordifail; `migrval0.fmt.txt` on sama impordifaili loetavamas kujunduses versoon.

JSON<sup>2</sup> andmevorminguna on elementide vahel olevate reavahetuste ja lisatühikute suhtes
tundetu, seega WordNeti impordifailina on `migrval0.txt` ja `migrval0.fmt.txt` samaväärsed. Lisaks
märgime, et JSON-failis olevas objektis atribuutide loetlemise järjekord ei ole ka oluline.

**Hindamine.** Selles ülesandes on (testimiskeskkona kaudu) antud 6 vana süsteemi ekspordifaili
`migrsis1.txt` kuni `migrsis6.txt` ja lahendusena on vaja esitada neile vastavad uue süsteemi
impordifailid `migrval1.txt` kuni `migrval6.txt`. Programmi esitamine pole vajalik ja seda ei
hinnata.

---
1. https://en.wikipedia.org/wiki/WordNet
2. https://en.wikipedia.org/wiki/JSON
