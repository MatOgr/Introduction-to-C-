# Programowanie obiektowe w bioinformatyce

W bioinformatyce bardzo często wykorzystuje się **programowanie obiektowe**.

Obiekty mogą reprezentować elementy biologiczne, np.:

- gen
- sekwencję DNA
- białko
- chromosom
- organizm

### Przykład

Definicja klasy reprezentującej sekwencję DNA:
```cpp
class DNASequence {
    string id;
    string sequence;
};
```

Dzięki temu można łatwo tworzyć funkcje operujące na tych danych, np.:

- obliczanie długości
- obliczanie zawartości GC
- wyszukiwanie motywów

Przykład stworzenia instancji / obiektu `DNASequence`:
```cpp
DNASequence sequence("seq1", "ATGCTTGACAC");
```

---

# Przeciążanie operatorów

C++ pozwala na **przeciążanie operatorów**, co oznacza, że można zdefiniować własne zachowanie operatorów dla klas.

### Przykład:

Operator `+` może oznaczać **łączenie sekwencji DNA**.

```cpp
DNASequence s3 = s1 + s2;
```

W takim przypadku operator `+` tworzy nową sekwencję będącą połączeniem dwóch innych.

---

# Struktury danych

W analizie danych biologicznych bardzo często wykorzystuje się różne struktury danych.

## Tablice (`arrays`)

Tablice mogą przechowywać np.:

- listę genów
- listę białek
- fragmenty sekwencji

### Przykład:

```cpp
string genes[100];
```

---

## Struktury (`struct`)

Struktury pozwalają grupować powiązane dane.

### Przykład:

```cpp
struct Gene {
    string name;
    int length;
    string organism;
};
```

---

## Enumeracje (`enum`)

`enum` pozwala definiować zestaw możliwych wartości.

### Przykład:

```cpp
enum Nucleotide {
    A,
    C,
    G,
    T
};
```

---

# Wskaźniki i zarządzanie pamięcią

W analizie genomów często pracujemy na bardzo dużych zbiorach danych.

Dlatego ważne jest:

- efektywne zarządzanie pamięcią
- dynamiczne alokowanie danych

### Przykład:

Dynamiczna tablica:

```cpp
int* data = new int[1000];
```

W C++ należy pamiętać o uwolnieniu pamięci (ręcznie jak i pół-automatycznie lokowanej / rezerwowanej):

```cpp
delete[] data;
```

---

# Operacje na plikach

Dane biologiczne często przechowywane są w plikach, np.:

- FASTA
- FASTQ
- CSV
- pliki wyników analiz

W C++ można czytać i zapisywać pliki przy pomocy:

- `ifstream`
- `ofstream`

Przykład:

```cpp
ifstream file("sequence.txt");
```

Program może np.:

- wczytać sekwencję DNA z pliku
- zapisać wyniki analizy
- przetwarzać duże pliki z danymi biologicznymi

---

# Podsumowanie

W tym laboratorium poznasz podstawowe mechanizmy języka C++, które są często używane w analizie danych biologicznych:

- klasy i obiekty do reprezentacji danych biologicznych
- przeciążanie operatorów
- różne struktury danych
- wskaźniki i zarządzanie pamięcią
- operacje na plikach

Zrozumienie tych koncepcji pozwoli w przyszłości tworzyć bardziej zaawansowane narzędzia bioinformatyczne, takie jak:

- analizatory sekwencji
- programy do wyszukiwania motywów
- narzędzia do porównywania genomów
- programy do analizy danych eksperymentalnych
