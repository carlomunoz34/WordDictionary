/**
* Dictionary.c
* TDA dictionary
*/
#include <stdio.h>
#include <stdlib.h>

#include "Bool.h"
#include "Dictionary.h"
#include "Text.h"
#include "Stack.h"

#define NACUTE_UPPER 165

typedef struct strNode* Node;

typedef enum { A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, NACUTE, UNDERSCORE } Letter;


struct strNode {
	Node a;
	Node b;
	Node c;
	Node d;
	Node e;
	Node f;
	Node g;
	Node h;
	Node i;
	Node j;
	Node k;
	Node l;
	Node m;
	Node n;
	Node nacute;
	Node o;
	Node p;
	Node q;
	Node r;
	Node s;
	Node t;
	Node u;
	Node v;
	Node w;
	Node x;
	Node y;
	Node z;
	Node underscore;
	Text key;
	Text word;
	Text def;
};

struct srtDictionaryHead {
	Node initial;
	unsigned int deep;
};

Dictionary dict_create() {
	Dictionary dict = (Dictionary)calloc(1, sizeof(struct srtDictionaryHead));
	return dict;
}

unsigned int dict_size(Dictionary d) {
	return d->deep;
}

void set_node_data(Node n, Text word, Text key, Text def) {
	n->key = text_clone(key);
	n->word = text_clone(word);
	n->def = text_clone(def);
}

void dict_set(Dictionary d, Text word, Text def) {
	//Si se agragó el elemento, la bandera será falso
	Bool flag = TRUE;
	int cursor_pos = 0;
	unsigned char cursor_value = 0;
	Node n = NULL;
	Text compare_word = text_ansi(word);
	compare_word = text_toUpperCase(word);

	text_println(compare_word);

	//Si es el primer nodo
	if (d->initial == NULL) {
		d->initial = (Node)calloc(1, sizeof(struct strNode));
		set_node_data(d->initial, word, compare_word, def);
		flag = FALSE;
	}

	n = d->initial;

	// TODO: Aquí puede tronar si recorrimos toda la palabra y no encontramos coincidencia
	while (flag) {
		cursor_value = text_charAt(word, cursor_pos);
		switch (cursor_value) {
		case 'A':
			if (n->a == NULL) {
				n->a = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->a, word, compare_word, def);
				flag = FALSE;
			}
			n = n->a;
			break;
		case 'B':
			if (n->b == NULL) {
				n->b = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->b, word, compare_word, def);
				flag = FALSE;
			}
			n = n->b;
			break;
		case 'C':
			if (n->c == NULL) {
				n->c = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->c, word, compare_word, def);
				flag = FALSE;
			}
			n = n->c;
			break;
		case 'D':
			if (n->d == NULL) {
				n->d = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->d, word, compare_word, def);
				flag = FALSE;
			}
			n = n->d;
			break;
		case 'E':
			if (n->e == NULL) {
				n->e = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->e, word, compare_word, def);
				flag = FALSE;
			}
			n = n->e;
			break;
		case 'F':
			if (n->f == NULL) {
				n->f = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->f, word, compare_word, def);
				flag = FALSE;
			}
			n = n->f;
			break;
		case 'G':
			if (n->g == NULL) {
				n->g = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->g, word, compare_word, def);
				flag = FALSE;
			}
			n = n->g;
			break;
		case 'H':
			if (n->h == NULL) {
				n->h = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->h, word, compare_word, def);
				flag = FALSE;
			}
			n = n->h;
			break;
		case 'I':
			if (n->i == NULL) {
				n->i = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->i, word, compare_word, def);
				flag = FALSE;
			}
			n = n->i;
			break;
		case 'J':
			if (n->j == NULL) {
				n->j = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->j, word, compare_word, def);
				flag = FALSE;
			}
			n = n->j;
			break;
		case 'K':
			if (n->k == NULL) {
				n->k = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->k, word, compare_word, def);
				flag = FALSE;
			}
			n = n->k;
			break;
		case 'L':
			if (n->n == NULL) {
				n->n = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->n, word, compare_word, def);
				flag = FALSE;
			}
			n = n->l;
			break;
		case 'M':
			if (n->m == NULL) {
				n->m = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->m, word, compare_word, def);
				flag = FALSE;
			}
			n = n->m;
			break;
		case 'N':
			if (n->n == NULL) {
				n->n = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->n, word, compare_word, def);
				flag = FALSE;
			}
			n = n->n;
			break;
		case (char)NACUTE_UPPER:
			if (n->nacute == NULL) {
				n->nacute = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->nacute, word, compare_word, def);
				flag = FALSE;
			}
			n = n->nacute;
			break;
		case 'O':
			if (n->o == NULL) {
				n->o = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->o, word, compare_word, def);
				flag = FALSE;
			}
			n = n->o;
			break;
		case 'P':
			if (n->p == NULL) {
				n->p = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->p, word, compare_word, def);
				flag = FALSE;
			}
			n = n->p;
			break;
		case 'Q':
			if (n->q == NULL) {
				n->q = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->q, word, compare_word, def);
				flag = FALSE;
			}
			n = n->q;
			break;
		case 'R':
			if (n->r == NULL) {
				n->r = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->r, word, compare_word, def);
				flag = FALSE;
			}
			n = n->r;
			break;
		case 'S':
			if (n->s == NULL) {
				n->s = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->s, word, compare_word, def);
				flag = FALSE;
			}
			n = n->s;
			break;
		case 'T':
			if (n->t == NULL) {
				n->t = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->t, word, compare_word, def);
				flag = FALSE;
			}
			n = n->t;
			break;
		case 'U':
			if (n->u == NULL) {
				n->u = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->u, word, compare_word, def);
				flag = FALSE;
			}
			n = n->u;
			break;
		case 'V':
			if (n->v == NULL) {
				n->v = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->v, word, compare_word, def);
				flag = FALSE;
			}
			n = n->v;
			break;
		case 'W':
			if (n->w == NULL) {
				n->w = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->w, word, compare_word, def);
				flag = FALSE;
			}
			n = n->w;
			break;
		case 'X':
			if (n->x == NULL) {
				n->x = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->x, word, compare_word, def);
				flag = FALSE;
			}
			n = n->x;
			break;
		case 'Y':
			if (n->y == NULL) {
				n->y = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->y, word, compare_word, def);
				flag = FALSE;
			}
			n = n->y;
			break;
		case 'Z':
			if (n->z == NULL) {
				n->z->underscore = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->z, word, compare_word, def);
				flag = FALSE;
			}
			n = n->z;
			break;
		case '_':
			if (n->underscore == NULL) {
				n->underscore = (Node)calloc(1, sizeof(struct strNode));
				set_node_data(n->underscore, word, compare_word, def);
				flag = FALSE;
			}
			n = n->underscore;
			break;
		}

		cursor_pos++;
	}
	if (!flag) {
		d->deep++;
	}
}

Text dict_get(Dictionary dict, Text word) {
	int cursor_pos = 0;
	unsigned char cursor_value = 0;
	Node n = dict->initial;
	Text compare_word = text_ansi(word);
	compare_word = text_toUpperCase(word);
	Text return_text = NULL;
	Bool flag = TRUE;

	if (n == NULL) {
		// Manejar que el nodo inicial es null
		flag = FALSE;
	} else if(!text_compare(n->key, compare_word)) {
        // La palabra está en el nodo raiz
        flag = FALSE;
    }

	while (flag && text_compare(n->key, compare_word)) {
		cursor_value = text_charAt(word, cursor_pos);
		switch (cursor_value) {
		case 'A':
			n = n->a;
			break;
		case 'B':
			n = n->b;
			break;
		case 'C':
			n = n->c;
			break;
		case 'D':
			n = n->d;
			break;
		case 'E':
			n = n->e;
			break;
		case 'F':
			n = n->f;
			break;
		case 'G':
			n = n->f;
			break;
		case 'H':
			n = n->h;
			break;
		case 'I':
			n = n->i;
			break;
		case 'J':
			n = n->j;
			break;
		case 'K':
			n = n->k;
			break;
		case 'L':
			n = n->l;
			break;
		case 'M':
			n = n->m;
			break;
		case 'N':
			n = n->n;
			break;
		case 'O':
			n = n->o;
			break;
		case 'P':
			n = n->p;
			break;
		case 'R':
			n = n->r;
			break;
		case 'S':
			n = n->s;
			break;
		case 'T':
			n = n->t;
			break;
		case 'U':
			n = n->u;
			break;
		case 'V':
			n = n->v;
			break;
		case 'W':
			n = n->w;
			break;
		case 'X':
			n = n->x;
			break;
		case 'Y':
			n = n->y;
			break;
		case 'Z':
			n = n->z;
			break;
		case '_':
			n = n->underscore;
			break;
			// TODO: Reemplazar Ñ con el código ascii
		case (char)NACUTE_UPPER:
			n = n->nacute;
			break;
		}
		// Vamos al caracter siquiente, al inicio del hacemos la comparación para salir del nodo
		if (n == NULL) {
			// Manejar que no exixtieron coinidencias
			flag = FALSE;
		}
		cursor_pos++;
	}
	if (!flag) {
		return_text = text_create("Palabra no encontrada");
	}
	else {
		return_text = n->def;
	}

	return return_text;
}

/*
char** dict_keys (Dictionary d)
{
    //Aquí se van a almacenar los apuntadores a las palabras
    char **alm = (char**)malloc(sizeof(char*) * d->deep);
    Node n = (Node)calloc(1, sizeof(struct strNode));
    n = d->initial;
    Stack s = stack_create();
    //Este arreglo va a contar la letra que vamos por nivel
    Letter *counter = (Letter*)malloc(sizeof(Letter));
    //Contador para el arreglo
    int i = 0;
    //Este va a llevar la cuenta del nivel que va
    unsigned int level = 1;
    //Bandera que dice si hubo un cambio en el nivel
    bool changed;
    Bool finish = FALSE;
    if(d->deep > 0)
    {
        stack_push(s, d);
        alm[i] = text_getChars(n->word);
        i++;
    }
    while(i < d->deep && !finish)
    {
        changed = false;
        switch (counter[level])
        {
            /*
            Se va a evaluar el contrador counter en el nivel del arbol que esté.
            Dependiendo de la letra en la que vaya, preguntara si es nulo; si sí es nulo,
            el auxiliar cambiara y se bajará un nivel, de lo contrario continuará con la
            siguiente letra
            /*
            case A:
                if (n->a != NULL) {
                    n = n->a;
                    changed = true;
                    break;
                }
                counter[level]++;
            case B:
                if (n->b != NULL) {
                    n = n->b;
                    changed = true;
                    break;
                }
                counter[level]++;
            case C:
                if (n->c != NULL) {
                    n = n->c;
                    changed = true;
                    break;
                }
                counter[level]++;
            case D:
                if (n->d != NULL) {
                    n = n->d;
                    changed = true;
                    break;
                }
                counter[level]++;
            case E:
                if (n->e != NULL) {
                    n = n->e;
                    changed = true;
                    break;
                }
                counter[level]++;
            case F:
                if (n->f != NULL) {
                    n = n->f;
                    changed = true;
                    break;
                }
                counter[level]++;
            case G:
                if (n->g != NULL) {
                    n = n->g;
                    changed = true;
                    break;
                }
                counter[level]++;
            case H:
                if (n->h != NULL) {
                    n = n->h;
                    changed = true;
                    break;
                }
                counter[level]++;
            case I:
                if (n->i != NULL) {
                    n = n->i;
                    changed = true;
                    break;
                }
                counter[level]++;
            case J:
                if (n->j != NULL) {
                    n = n->j;
                    changed = true;
                    break;
                }
                counter[level]++;
            case K:
                if (n->k != NULL) {
                    n = n->k;
                    changed = true;
                    break;
                }
                counter[level]++;
            case L:
                if (n->l != NULL) {
                    n = n->l;
                    changed = true;
                    break;
                }
                counter[level]++;
            case M:
                if (n->m != NULL) {
                    n = n->m;
                    changed = true;
                    break;
                }
                counter[level]++;
            case N:
                if (n->n != NULL) {
                    n = n->n;
                    changed = true;
                    break;
                }
                counter[level]++;
            case O:
                if (n->o != NULL) {
                    n = n->o;
                    changed = true;
                    break;
                }
                counter[level]++;
            case P:
                if (n->p != NULL) {
                    n = n->p;
                    changed = true;
                    break;
                }
                counter[level]++;
            case Q:
                if (n->q != NULL) {
                    n = n->q;
                    changed = true;
                    break;
                }
                counter[level]++;
            case R:
                if (n->r != NULL) {
                    n = n->r;
                    changed = true;
                    break;
                }
                counter[level]++;
            case S:
                if (n->s != NULL) {
                    n = n->s;
                    changed = true;
                    break;
                }
                counter[level]++;
            case T:
                if (n->t != NULL) {
                    n = n->t;
                    changed = true;
                    break;
                }
                counter[level]++;
            case U:
                if (n->u != NULL) {
                    n = n->u;
                    changed = true;
                    break;
                }
                counter[level]++;
            case V:
                if (n->v != NULL) {
                    n = n->v;
                    changed = true;
                    break;
                }
                counter[level]++;
            case W:
                if (n->w != NULL) {
                    n = n->w;
                    changed = true;
                    break;
                }
                counter[level]++;
            case X:
                if (n->x != NULL) {
                    n = n->x;
                    changed = true;
                    break;
                }
                counter[level]++;
            case Y:
                if (n->y != NULL) {
                    n = n->y;
                    changed = true;
                    break;
                }
                counter[level]++;
            case Z:
                if (n->z != NULL) {
                    n = n->z;
                    changed = true;
                    break;
                }
                counter[level]++;
            case NACUTE:
                if (n->nacute != NULL) {
                    n = n->nacute;
                    changed = true;
                    break;
                }
                counter[level]++;
            case UNDERSCORE:
                if (n->underscore != NULL) {
                    n = n->underscore;
                    changed = true;
                    break;
                }
            }
        //Si hubo un cambio
        if (changed)
        {
            //El nivel aumenta
            level ++;
            counter[level] = A;
            //Se hace el push en el stack
            stack_push(s, n);
            //Se agrega al arreglo
            alm[i] = text_getChars(n->word);
            //El contador del arreglo aumenta
            i++;
        }
        else
        {
            if (!stack_isEmpty(s)) {
                //Eliminamos el ultimo elemento para regresar en el tiempo
                //al nivel superior
                stack_pop(s);
                n = stack_top(s);
                level --;
            }
            //Si el stack esta vacio significa que estamos en el elemento raiz
            //Y si no hubo cambios, debe terminar el ciclo
            else finish = TRUE;
        }
        counter = (Letter*)realloc(counter, level * sizeof(Letter));
    }
    stack_destroy(s);
    free(n);
    free(counter);
    return alm;
}*/
void capBrench(Node n, char ***array, int *i)
{
	(*array)[*i] = text_getChars(n->word);
	(*i)++;
	if(n->a != NULL) capBrench(n->a, array, i)
	if(n->b != NULL) capBrench(n->b, array, i)
	if(n->c != NULL) capBrench(n->c, array, i)
	if(n->d != NULL) capBrench(n->d, array, i)
	if(n->e != NULL) capBrench(n->e, array, i)
	if(n->f != NULL) capBrench(n->f, array, i)
	if(n->g != NULL) capBrench(n->g, array, i)
	if(n->h != NULL) capBrench(n->h, array, i)
	if(n->i != NULL) capBrench(n->i, array, i)
	if(n->j != NULL) capBrench(n->j, array, i)
	if(n->k != NULL) capBrench(n->k, array, i)
	if(n->l != NULL) capBrench(n->l, array, i)
	if(n->m != NULL) capBrench(n->m, array, i)
	if(n->n != NULL) capBrench(n->n, array, i)
	if(n->nacute != NULL) capBrench(n->nacute, array, i)
	if(n->o != NULL) capBrench(n->o, array, i)
	if(n->p != NULL) capBrench(n->p, array, i)
	if(n->q != NULL) capBrench(n->q, array, i)
	if(n->r != NULL) capBrench(n->r, array, i)
	if(n->s != NULL) capBrench(n->s, array, i)
	if(n->t != NULL) capBrench(n->t, array, i)
	if(n->u != NULL) capBrench(n->u, array, i)
	if(n->v != NULL) capBrench(n->v, array, i)
	if(n->w != NULL) capBrench(n->w, array, i)
	if(n->x != NULL) capBrench(n->x, array, i)
	if(n->y != NULL) capBrench(n->y, array, i)
	if(n->z != NULL) capBrench(n->z, array, i)
	if(n->underscore != NULL) capBrench(n->underscore, array, i)
}

char** dict_keys (Dictionary d)
{
	int i = 0;
	char **array = (char**)malloc(sizeof(char) * d->deep);
	capBrench(d->initial, &array, &i);
	retrurn array;
}
