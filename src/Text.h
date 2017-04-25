/*
 * Text.h
 *
 *  Created on: 15/03/2017
 *      Author: hpiza
 */

#include "Bool.h"

#ifndef TEXT_H_
#define TEXT_H_

typedef struct strText* Text;

Text text_create(char *);

Text text_clone(Text);

void text_destroy(Text);

void text_println(Text);

unsigned int text_length(Text);

Text text_toLowerCase(Text);

Text text_toUpperCase(Text);

int text_indexOf(Text, char);

Text text_concat(Text, const Text);

void text_append(Text, char*);

Text text_replace(Text, char oldChar, char newChar);

Text text_ansi(Text);

char text_charAt(Text, int);

bool text_compare(Text, Text);

#endif /* TEXT_H_ */
