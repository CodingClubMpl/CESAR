# APPRENDRE LE CHIFFREMENT DE CESAR

Bonjour à toi jeune développeur, aujourd'hui tu vas apprendre les bases du chiffrement et de la cryptographie.

La cryptographie a toujours été un points clé dans notre monde moderne. Elle est utilisée pour sécuriser les données, les communications, les transactions, etc. Elle est utilisée par les gouvernements, les entreprises, les particuliers, etc.

La légende dit que Jules César utilisait un chiffrement de César pour communiquer avec ses généraux. C'est un chiffrement très simple, mais il est très efficace. C'est un chiffrement par substitution. C'est à dire que chaque lettre du message est remplacée par une autre lettre. Par exemple, si on décale toutes les lettres de 3, A sera remplacé par D, B deviendra E, etc. Voici un exemple avec un décalage de 3 :

## Explication

Voici comment fonctionne le chiffrement de César :

Prenons la phrase "Je suis un génie" et appliquons un décalage de 3. On obtient le message chiffré "Mh vlxv xr jhqhl". Voici comment le message a été chiffré :

- La lettre J est la 10ème lettre de l'alphabet. On ajoute 3 au 10, on obtient 13. La 13ème lettre de l'alphabet est M.

- La lettre e est la 5ème lettre de l'alphabet. On ajoute 3 au 5, on obtient 8. La 8ème lettre de l'alphabet est h.

- Etc.

## Comment décrypter un message ?

Le chiffrement de César étant une des première méthode de chiffrement, il est très facile de décrypter un message chiffré avec cette méthode. Il suffit de connaître le décalage qui a été utilisé pour chiffrer le message. Si le décalage est de 3, il suffit de décaler les lettres du message 3 fois vers la gauche pour retrouver le message en clair.

#### Comment fait on pour décrypter un message sans connaître le décalage ?

Il existe plusieurs méthodes pour décrypter un message sans connaître le décalage. La plus simple est d'essayer avec tous les décalages possibles. En effet, il y a 26 possibilités (de 0 à 25). On essaye donc avec tous les décalages possibles, et on analyse le message obtenu. Celui qui a le plus de sens est le message en clair.

## Comment est ce qu'on programme un chiffrement de César ?

Pour faire ce premier code de chiffrement, nous allons utiliser le langage python. Python est un langage de programmation très simple à apprendre. Il est utilisé dans de nombreux domaines, et est très apprécié des débutants.

## STEP 1 : Ecrire un programme qui chiffre une lettre

Il faut savoir qu'en informatique, on utilise des codes pour représenter les lettres. Par exemple, la lettre A est représentée par le code 65, la lettre B par le code 66, etc. On appelle ces codes des codes ASCII. Voici une table qui liste les codes ASCII des lettres majuscules :

#### UPPER

| Lettre | Code ASCII | Lettre | Code ASCII |
| :--- | :--- | :--- | :--- |
| A | 65 | N | 78 |
| B | 66 | O | 79 |
| C | 67 | P | 80 |
| D | 68 | Q | 81 |
| E | 69 | R | 82 |
| F | 70 | S | 83 |
| G | 71 | T | 84 |
| H | 72 | U | 85 |
| I | 73 | V | 86 |
| J | 74 | W | 87 |
| K | 75 | X | 88 |
| L | 76 | Y | 89 |
| M | 77 | Z | 90 |

#### LOWER

| Lettre | Code ASCII | Lettre | Code ASCII |
| :--- | :--- | :--- | :--- |
| a | 97 | n | 110 |
| b | 98 | o | 111 |
| c | 99 | p | 112 |
| d | 100 | q | 113 |
| e | 101 | r | 114 |
| f | 102 | s | 115 |
| g | 103 | t | 116 |
| h | 104 | u | 117 |
| i | 105 | v | 118 |
| j | 106 | w | 119 |
| k | 107 | x | 120 |
| l | 108 | y | 121 |
| m | 109 | z | 122 |

Chaque lettre est donc représenter par son code ASCII.
Il est théoriquement possible d'avoir un résultat supérieur à 90 ou 122. Dans ce cas, il faut revenir au début de l'alphabet. Par exemple, si on chiffre la lettre Z avec un décalage de 3, on obtient 90 + 3 = 93. Il faut donc revenir au début de l'alphabet, et donc obtenir 93 - 26 = 67. La lettre C est donc le résultat du chiffrement de Z avec un décalage de 3. Il faut faire la même chose pour les lettres minuscules.

En python, on peut obtenir le code ASCII d'une lettre avec la fonction ord(). Par exemple, ord("A") retourne 65. On peut aussi obtenir la lettre associée à un code ASCII avec la fonction chr(). Par exemple, chr(65) retourne "A".

Vous allez devoir donc devoir utiliser les fonctions:
- isupper() : permet de savoir si une lettre est en majuscule
- isalpha() : permet de savoir si un caractère est une lettre (si ce n'est pas le cas, on ne le chiffre pas pour simplifier)

#### Pour ceux qui ne savent pas faire de fonctions:

```py
def func_name(arg1, arg2, arg3):
    # Code
    return result
```

Si vous ne comprenez pas, vous pouvez demander de l'aide aux encadrants.

#### Hint

```py
# If is_lower:
next_ascii = (old_ascii - 97 + key) % 26 + 97
# If is_upper:
next_ascii = (old_ascii - 65 + key) % 26 + 65
```

## STEP 2 : Ecrire un programme qui chiffre une phrase

Grâce à la fonction que vous avez écrite, vous allez pouvoir écrire un programme qui chiffre une phrase. Pour cela, vous allez devoir parcourir chaque lettre de la phrase, et la remplacer par sa version chiffrée. Vous pouvez utiliser une boucle for pour parcourir chaque lettre de la phrase.

#### Comment faire une boucle ?

```py
# On parcourt les nombres de 0 à 9
for i in range(0, 10):
    print(i)

# On parcours chaque lettre de la phrase
for letter in phrase:
    print(letter)
```

## STEP 3 : Ecrire un programme qui déchiffre une phrase

Si vous avez réussi à écrire un programme qui chiffre une phrase, vous allez pouvoir écrire un programme qui déchiffre une phrase. Pour cela, il suffit de décaler les lettres de la phrase vers la gauche, au lieu de les décaler vers la droite.

Comme le chiffrement de césar n'a qu'un pannel limité de possibilités, il est possible de déchiffrer un message sans connaître le décalage. Pour cela, il suffit de tester tous les décalages possibles, et de regarder le message obtenu. Celui qui a le plus de sens est le message en clair.

Comme ceci:
    
    ```py
    # On parcourt les nombres de 0 à 25
    for i in range(0, 26):
        # On déchiffre le message avec le décalage i
        # On affiche le message déchiffré
    ```

## Bonus

Bravo ! Vous avez réussi à coder un chiffrement de César. Vous pouvez maintenant essayer de faire les bonus suivants:

- Faire un programme qui chiffre un message avec un décalage aléatoire
- Faire un visualiseur de chiffrement de César
- Faire d'autres méthodes de chiffrement
