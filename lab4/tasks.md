# Wprowadzenie do C++ – Laboratorium 4
## Tematy: Klasy, Przeciążanie Operatorów, Rzutowanie Typów, `auto`, Złożone Typy Danych

Zadania w tym laboratorium mają na celu przećwiczenie podstawowych koncepcji języka C++ w kontekście problemów spotykanych w bioinformatyce i analizie danych biologicznych.

W szczególności będziemy pracować z:
- klasami i obiektami
- przeciążaniem operatorów
- rzutowaniem typów
- automatyczną deklaracją typów (`auto`)
- złożonymi typami danych (`arrays`, `char[]`, `string`)
- `struct`, `union`, `enum`
- wskaźnikami (`pointers`)

## Polecenia dotyczące Git

W ramach tego laboratorium stosuj następujący przepływ pracy z repozytorium:

1. **Jedno zadanie = jeden commit**  
   Każde zadanie (np. Zadanie 1, 2, …) wprowadzaj jako **osobną, logicznie spójną zmianę** i zapisuj ją w **osobnym commicie**. Nie łącz w jednym commicie rozwiązań kilku zadań ani nie odkładaj wielu zadań na jeden duży commit.

2. **Jedna część = jeden branch, potem merge do gałęzi głównej**  
   Dla każdej **części** laboratorium (np. Część 1 – Klasy, Część 2 – Przeciążanie operatorów, …):
   - utwórz **nowy branch** od aktualnej gałęzi głównej (`main` lub `master`, zgodnie z repozytorium),
   - na tym branchu wykonaj **wszystkie zadania** z danej części (nadal: **jedno zadanie = jeden commit**),
   - po ukończeniu części **scal zmiany** z powrotem do gałęzi głównej (merge lub pull request, w zależności od ustalonego workflow),
   - przed rozpoczęciem kolejnej części upewnij się, że pracujesz od **aktualnej** gałęzi głównej (np. `git checkout main && git pull`).

Przykładowe nazwy branchy: `lab4/czesc-1-klasy`, `lab4/czesc-2-operatorzy`, `lab4/czesc-3-rzutowanie` itd.

3. **Konwencja komunikatów commitów**  
   Każdy commit powinien mieć **krótki, jednozdaniowy** opis po polsku lub angielsku (spójnie w całym laboratorium), z którego wynika **numer zadania** i **co zostało zrobione**.

   Przykłady:

   - `lab4: zadanie 1 – klasa Gene`
   - `lab4: zadanie 5 – operator + dla DNASequence`
   - `lab4 cz.3: zadanie 9 – static_cast`

   Unikaj ogólników w stylu „poprawki” lub „lab4” bez kontekstu. Jeśli potrzebujesz doprecyzowania, dodaj drugą linię w treści commita (pusty wiersz po pierwszej linii, potem szczegóły).

---

# Część 1 – Klasy

## Zadanie 1 – Klasa `Gene`
Utwórz klasę `Gene`, która przechowuje:

- nazwę genu (`string`)
- długość sekwencji (`int`)
- organizm (`string`)

Wymagania:
- zdefiniuj konstruktor
- zaimplementuj metodę `printInfo()`, która wypisze informacje o genie

Utwórz co najmniej **3 obiekty** i wyświetl ich dane.

---

## Zadanie 2 – Klasa `DNASequence`
Utwórz klasę `DNASequence`, która przechowuje:

- identyfikator sekwencji (`string`)
- sekwencję DNA (`string`)

Zaimplementuj metody:

- `length()` – zwraca długość sekwencji
- `countNucleotide(char n)` – zlicza wystąpienia nukleotydu (`A`, `C`, `G`, `T`)

Wyświetl wyniki dla kilku przykładowych sekwencji.

---

## Zadanie 3 – Klasa `Protein`
Utwórz klasę `Protein`, która zawiera:

- nazwę białka (`string`)
- długość białka (`int`)
- masę cząsteczkową (`double`)

Zaimplementuj metodę `printInfo()` wyświetlającą informacje o białku.

---

## Zadanie 4 – Zapisywanie danych do pliku
Rozszerz klasę `DNASequence`, tak aby:

- mogła zapisać sekwencję do pliku
- mogła wczytać sekwencję z pliku

Użyj prostego formatu tekstowego.

---

# Część 2 – Przeciążanie operatorów

## Zadanie 5 – Operator `+` dla sekwencji DNA
Rozszerz klasę `DNASequence`.

Przeciąż operator `+`, tak aby możliwe było **łączenie dwóch sekwencji DNA**.

Przykład:

```cpp
DNASequence s1("seq1","ATCG");
DNASequence s2("seq2","GGTA");

DNASequence s3 = s1 + s2;
```

Nowa sekwencja powinna zawierać połączone nukleotydy.

---

## Zadanie 6 – Operator `==`
Dodaj przeciążenie operatora `==`, który sprawdzi czy dwie sekwencje DNA są identyczne.

---

## Zadanie 7 – Operator `<<`
Utwórz klasę `Gene` lub `Protein` i przeciąż operator `<<`, aby można było wypisywać obiekt bezpośrednio przy użyciu `cout`.

Przykład:

```cpp
cout << gene;
```

---

# Część 3 – Rzutowanie typów

> [!IMPORTANT]
> Utwórz nowy program (plik).

## Zadanie 8 – Podstawowe rzutowanie
Utwórz program pokazujący:

- rzutowanie `double` → `int`
- rzutowanie `int` → `double`

Wyświetl wartości **przed i po konwersji**.

---

## Zadanie 9 – `static_cast`
Utwórz zmienne typu:

- `float`
- `int`
- `double`

Wykorzystaj `static_cast` do konwersji między nimi i wyświetl wyniki.

---

## Zadanie 10 – Konwersja temperatury
Utwórz klasę `Temperature`, która przechowuje temperaturę w stopniach Celsjusza.

Zaimplementuj funkcję konwertującą temperaturę na stopnie Fahrenheita.

Opcjonalnie: zaimplementuj operator konwersji umożliwiający rzutowanie obiektu na `double`.

---

# Część 4 – Automatyczna deklaracja typu

## Zadanie 11 – Użycie `auto`
Napisz program wykorzystujący `auto` do deklaracji zmiennych:

- liczba całkowita
- liczba zmiennoprzecinkowa
- `string`
- wynik wyrażenia matematycznego

Wyświetl wartości.

---

## Zadanie 12 – `auto` w pętli
Utwórz tablicę liczb całkowitych.

Użyj pętli z `auto`, aby przejść przez wszystkie elementy i je wyświetlić.

---

# Część 5 – `struct`

## Zadanie 13 – `struct Gene`
Utwórz strukturę `Gene` zawierającą:

- nazwę genu
- długość sekwencji
- organizm

Utwórz tablicę zawierającą **5 genów** i wypisz ich dane.

---

## Zadanie 14 – `struct Protein`
Utwórz strukturę `Protein` z polami:

- nazwa
- długość
- masa

Wypisz wszystkie białka o długości większej niż 300 aminokwasów.

---

# Część 6 – `enum`

## Zadanie 15 – Typ nukleotydu

> [!IMPORTANT]
> Utwórz nowy program (plik).

Utwórz `enum Nucleotide` z wartościami:

- `A`
- `C`
- `G`
- `T`

Napisz program, który odczyta znak od użytkownika i określi typ nukleotydu.

---

## Zadanie 16 – Typ aminokwasu
Utwórz `enum AminoAcidType` z kilkoma przykładowymi kategoriami:

- `HYDROPHOBIC`
- `POLAR`
- `POSITIVE`
- `NEGATIVE`

Przypisz typ do wybranych aminokwasów.

---

# Część 7 – `union`

## Zadanie 17 – Prosty `union`
Utwórz `union Data`, który może przechowywać:

- `int`
- `float`
- `char`

Przypisz wartości i sprawdź co się dzieje, gdy zmieniasz typ przechowywanej wartości.

---

## Zadanie 18 – Dane z sensora
Utwórz `union SensorValue`, który może przechowywać:

- temperaturę (`float`)
- ciśnienie (`int`)

Następnie utwórz strukturę zawierającą:

- identyfikator sensora
- wartość sensora (`union`)

---

# Część 8 – Wskaźniki

## Zadanie 19 – Podstawy wskaźników
Utwórz zmienną `int` oraz wskaźnik wskazujący na tę zmienną.

Wyświetl:

- wartość zmiennej
- adres zmiennej
- wartość poprzez wskaźnik

---

## Zadanie 20 – Arytmetyka wskaźników
Utwórz tablicę liczb całkowitych.

Użyj wskaźnika, aby przejść przez tablicę przy pomocy arytmetyki wskaźników.

---

## Zadanie 21 – Dynamiczna alokacja pamięci
Utwórz tablicę dynamiczną przy użyciu `new`.

Wypełnij ją liczbami i wypisz zawartość.

Na końcu zwolnij pamięć przy pomocy `delete`.

---

## Zadanie 22 – Wskaźnik do struktury
Utwórz `struct Protein`.

Następnie utwórz wskaźnik do tej struktury i uzyskaj dostęp do pól przy pomocy operatora `->`.

---

# Część 9 – Zadania łączące

## Zadanie 23 – Klasa z dynamiczną pamięcią
Utwórz klasę `DynamicArray`, która:

- dynamicznie alokuje pamięć
- przechowuje liczby całkowite
- posiada funkcje dodawania elementów i wyświetlania zawartości

---

## Zadanie 24 – Klasa `Fraction`
Utwórz klasę `Fraction` zawierającą:

- licznik
- mianownik

Przeciąż operatory:

- `+`
- `-`
- `*`
- `/`

---

## Zadanie 25 – Prosta baza danych sekwencji
Napisz program przechowujący listę sekwencji DNA.

Program powinien umożliwiać:

- dodawanie sekwencji
- wyświetlanie sekwencji
- zapis do pliku
- odczyt z pliku

Wykorzystaj:

- `struct` lub klasę
- tablice lub dynamiczną pamięć
- operacje plikowe
