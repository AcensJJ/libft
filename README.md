<p align="center">
    <img alt="42-lyon" src="https://user-images.githubusercontent.com/45235527/106354618-6ec65a00-62f3-11eb-8688-ba9e0f4e77de.jpg" />
</p>

# libft

<img alt="Note" src="https://user-images.githubusercontent.com/45235527/96751780-e4a25780-13cd-11eb-9d06-aa687ff25143.png" width="250" height="200" />
  
### <strong>Description</strong>

Ce premier projet en tant qu'étudiant de 42 va vous faire consolider vos acquis de piscine. Vous allez 
recoder un certain nombre de fonctions de la librairie C standard, ainsi que d'autres fonctions utilitaires 
que vous réutiliserez tout au long de votre cursus.

<p align="center">
  <img alt="make" src="https://user-images.githubusercontent.com/45235527/104592712-eac36f80-566e-11eb-8713-aae03bff77c3.gif" />
</p>

# Regles

```
make (re, clean, fclean, bonus)
```


# II.2 Part 1 - Fonctions de la libc

Vous devez recoder les fonctions suivantes. Ces fonctions ne nécessitent aucune fonction externe :

- `memset`
- `bzero`
- `memcpy`
- `memccpy`
- `memmove`
- `memchr`
- `memcmp`
- `strlen`
- `isalpha`
- `isdigit`
- `isalnum`
- `isascii`
- `isprint`
- `toupper`
- `tolower`
- `strchr`
- `strrchr`
- `strncmp`
- `strlcpy`
- `strlcat`
- `strnstr`
- `atoi`


Vous devez également recoder ces fonctions, en faisant appel à la fonction “malloc” :

- `calloc`
- `strdup`


# II.3 Part 2 - Fonctions supplémentaires

Dans cette seconde partie, vous devrez coder un certain nombre de fonctions absentes
de la libc ou présentes dans une forme différente. Certaines de ces fonctions peuvent
avoir de l’intéret pour faciliter l’écriture des fonctions de la première partie.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`


# Partie bonus

Si vous avez réussi parfaitement la partie obligatoire, cette section propose quelques
pistes pour aller plus loin. Un peu comme quand vous achetez un DLC pour un jeu vidéo.

Avoir des fonctions de manipulation de mémoire brute et de chaînes de caractères est
très pratique, mais vous vous rendrez vite compte qu’avoir des fonctions de manipulation
de liste est encore plus pratique.

Vous utiliserez la structure suivante pour représenter les maillons de votre liste. Cette
structure est à ajouter à votre fichier libft.h.

make bonus vous permettra d’ajouter les fonctions demandées dans votre librairie
libft.a

Vous ne devez pas rajouter _bonus à la fin des fichiers .c et des headers de cette
partie ne rajoutez _bonus que sur des fichiers supplémentaires que vous auriez fait pour
les bonus seulement.

```
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
```

La description des champs de la structure t_list est la suivante :
- `content` : La donnée contenue dans le maillon. Le void * permet de stocker une donnée de n’importe quel type.
- `next` : L’adresse du maillon suivant de la liste ou NULL si le maillon est le dernier

Les fonctions suivantes vous permettront de manipuler vos listes aisément.
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`
