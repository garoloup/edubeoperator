# Exceptions Standard C++ (`<stdexcept>`)

Les exceptions standard C++ sont définies dans l'en-tête `<stdexcept>` et héritent de `std::exception`. Elles sont divisées en deux catégories principales : `logic_error` (erreurs logiques) et `runtime_error` (erreurs d'exécution).

## Liste des Exceptions

### Catégorie : `logic_error` (Erreurs logiques)
Erreurs dues à une logique fautive dans le programme, détectables avant exécution. Elles indiquent des problèmes prévisibles, souvent dus à des arguments invalides ou des violations de préconditions. Elles peuvent généralement être évitées par une programmation correcte.

- **`domain_error`** : Lancée lorsqu'une opération mathématique ou logique est appliquée à une valeur hors de son domaine valide (ex. : racine carrée d'un nombre négatif).
- **`invalid_argument`** : Lancée lorsqu'un argument passé à une fonction est invalide (ex. : une chaîne vide là où une non-vide est attendue).
- **`length_error`** : Lancée lorsqu'une tentative est faite pour créer un objet dont la longueur dépasse la limite autorisée (ex. : redimensionner un conteneur au-delà de sa capacité maximale).
- **`out_of_range`** : Lancée lorsqu'un indice ou une valeur est hors de la plage valide (ex. : accéder à un élément d'un tableau avec un indice négatif ou trop grand).

### Catégorie : `runtime_error` (Erreurs d'exécution)
Erreurs détectables seulement à l'exécution. Elles surviennent pendant l'exécution et sont souvent dues à des conditions externes ou imprévisibles, comme des dépassements arithmétiques.

- **`overflow_error`** : Lancée en cas de dépassement arithmétique positif (ex. : addition causant un débordement d'entier).
- **`range_error`** : Lancée lorsqu'un résultat calculé est hors de la plage attendue pour le type (ex. : conversion de nombre causant une perte de précision).
- **`underflow_error`** : Lancée en cas de dépassement arithmétique négatif (ex. : soustraction causant un sous-dépassement d'entier).

## Différences Clés entre les Catégories
- **`logic_error`** : Erreurs "prévisibles" et "évitables" (ex. : mauvais arguments). Elles indiquent un bug dans le code appelant.
- **`runtime_error`** : Erreurs "imprévisibles" et liées à l'exécution (ex. : dépassements). Elles peuvent nécessiter une gestion dynamique (ex. : vérifications à runtime).

Les sous-classes précisent le type d'erreur pour une meilleure lisibilité et gestion.

> **Note** : Il existe aussi d'autres exceptions standard hors `<stdexcept>`, comme `bad_alloc` (mémoire insuffisante), `bad_cast` (cast dynamique échoué), mais elles sont moins liées aux erreurs logiques/arithmétiques.

## Moyen Mnémotechnique pour se Souvenir
Utilisez l'acronyme **"DILOR-ORU"** :
- **DILOR** pour `logic_error` : **D**omain, **I**nvalid, **L**ength, **O**ut_of_range.
- **ORU** pour `runtime_error` : **O**verflow, **R**ange, **U**nderflow.

**Rappelez-vous** : "Logic errors are Logical mistakes (DILOR), Runtime are Run-time surprises (ORU)."

Cela couvre la liste et les différences : logique = prévisible/bug, runtime = imprévisible/exécution.

