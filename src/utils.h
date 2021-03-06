/*
 * The MIT License (MIT)
 *
 * TipCalc
 * Copyright (c) 2015 Joseph Roque
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#pragma once

#define DOLLAR 0
#define EURO 1
#define POUND 2

#define DOLLAR_SYM "$"
#define EURO_SYM "€"
#define POUND_SYM "£"

extern int g_subtotal_cents;
extern int g_service_selection;
extern int g_tip_pct_great;
extern int g_tip_pct_avg;
extern int g_tip_pct_poor;
extern int g_currency_type;
extern int g_currency_set;

void load_tip_values(void);
void save_tip_values(void);
void load_default_values(void);
char* get_current_currency_symbol(void);
char* get_current_currency_separator(void);
