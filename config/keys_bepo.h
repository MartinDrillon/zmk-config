#pragma once
#include <dt-bindings/zmk/keys.h>

#define BP_DOLLAR (GRAVE)               // $
#define BP_DLLR (BP_DOLLAR)                     

#define BP_DOUBLE_QUOTES (NUMBER_1)     // "
#define BP_DQT (BP_DOUBLE_QUOTES)               

#define BP_GUILLEMET_GAUCHE (NUMBER_2)  // «
#define BP_GGA (BP_GUILLEMET_GAUCHE)

#define BP_GUILLEMET_DROIT (NUMBER_3)   // »
#define BP_GDR (BP_GUILLEMET_DROIT)

#define BP_LEFT_PARENTHESIS (NUMBER_4)  // (
#define BP_LPAR (BP_LEFT_PARENTHESIS)

#define BP_RIGHT_PARENTHESIS (NUMBER_5) // ( inversé
#define BP_RPAR (BP_RIGHT_PARENTHESIS)

#define BP_AT_SIGN (NUMBER_6)           // @
#define BP_AT (BP_AT_SIGN)

#define BP_PLUS (NUMBER_7)              // +

#define BP_MINUS (NUMBER_8)             // -

#define BP_SLASH (NUMBER_9)             // /
#define BP_FSLH (BP_SLASH)

#define BP_ASTERISK (NUMBER_0)          // *
#define BP_ASTRK (ASTERISK)
#define BP_STAR (BP_ASTERISK)

#define BP_EQUAL (MINUS)                // =

#define BP_PERCENT (EQUAL)              // %
#define BP_PRCNT (BP_PERCENT)

#define BP_B (Q)                        // B

#define BP_EAIGU (W)                    // É

#define BP_P (E)                        // P

#define BP_O (R)                        // O

#define BP_EGRAVE (T)                   // È
#define BP_EGRV

#define BP_CARET (Y)                    // ^ (dead)

#define BP_D (U)                        // V

#define BP_V (I)                        // D

#define BP_L (O)                        // L

#define BP_J (P)                        // J

#define BP_Z (LEFT_BRACKET)             // Z

#define BP_W (RIGHT_BRACKET)            // W

#define BP_A (A)                        // A

#define BP_U (S)                        // U

#define BP_I (D)                        // I

#define BP_E (F)                        // E

#define BP_COMMA (G)                    // ,

#define BP_C (H)                        // C

#define BP_T (J)                        // T

#define BP_S (K)                        // S

#define BP_R (L)                        // R

#define BP_N (SEMICOLON)                // N

#define BP_M (SINGLE_QUOTE)             // M

#define BP_CCED (BACKSLASH)             // Ç

#define BP_ECIR (NON_US_BACKSLASH)      // Ê

#define BP_AGRAVE (Z)                   // À
#define BP_AGRV (BP_AGRAVE)

#define BP_Y (X)                        // Y

#define BP_X (C)                        // X

#define BP_DOT (V)                      // .

#define BP_K (B)                        // K

#define BP_SINGLE_QUOTE (N)             // '
#define BP_SQT (BP_SINGLE_QUOTE)
#define BP_APOSTROPHE (BP_SQT)
#define BP_APOS (BP_APOSTROPHE)

#define BP_Q (M)                        // Q

#define BP_G (COMMA)                    // G

#define BP_H (DOT)                      // H

#define BP_F (SLASH)                    // F

#define BP_HASH (LS(BP_DLLR))           // #

#define BP_1 (LS(BP_DQT))               // 1

#define BP_2 (LS(BP_GGA))               // 2

#define BP_3 (LS(BP_GDR))               // 3

#define BP_4 (LS(BP_LPAR))              // 4

#define BP_5 (LS(BP_RPAR))              // 5

#define BP_6 (LS(BP_AT))                // 6

#define BP_7 (LS(BP_PLUS))              // 7

#define BP_8 (LS(BP_MINUS))             // 8

#define BP_9 (LS(BP_FSLH))              // 9

#define BP_0 (LS(BP_ASTERISK))          // 0

#define BP_DEG (LS(BP_EQUAL))           // °

#define BP_GRAVE (LS(BP_PRCNT))         // `

#define BP_EXCLAMATION (LS(BP_CARET))   // !
#define BP_EXCL (BP_EXCLAMATION)

#define BP_SEMICOLON (LS(BP_COMMA))     // ;
#define BP_SEMI (BP_SEMICOLON)

#define BP_COLON (LS(SINGLE_QUOTE))     // :

#define BP_QUESTION (LS(BP_APOS))       // ?
#define BP_QMARK (BP_QUESTION)

#define BP_ESPACE_INSECABLE (LS(SPACE)) // (non-breaking space)
#define BP_ESPINS (BP_ESPACE_INSECABLE)

#define BP_DEMI_CADRATIN (RA(BP_DLLR))  // –
#define BP_NCAD (BP_DEMI_CADRATIN)

#define BP_TIRET_CADRATIN (RA(BP_DQT))  // —
#define BP_MCAD (BP_TIRET_CADRATIN)

#define BP_LESS_THAN (RA(BP_GGA))       // <
#define BP_LT (BP_LESS_THAN)

#define BP_GREATER_THAN (RA(BP_GDR))    // >
#define BP_GT (BP_GREATER_THAN)

#define BP_LEFT_BRACKET (RA(BP_LPAR))   // [
#define BP_LBKT (BP_LEFT_BRACKET)

#define BP_RIGHT_BRACKET (RA(BP_RPAR))  // ]
#define BP_RBKT (BP_RIGHT_BRACKET)


#define BP_CIRC (RA(BP_AT))             // ^ (circonflexe)

#define BP_PLMN (RA(BP_PLUS))           // ±

#define BP_MORSEMOINS (RA(BP_MINUS))    // −
#define BP_MMIUNS (RA(BP_MORSEMOINS))

#define BP_DIV (RA(BP_FSLH))            // ÷

#define BP_MUL (RA(BP_ASTERISK))        // ×

#define BP_NEQL (RA(BP_EQUAL))          // ≠

#define BP_PERM (RA(BP_PRCNT))          // ‰

#define BP_PIPE (RA(BP_B))              // |

#define BP_DAIGU (RA(BP_EAIGU))         // ´ (dead)

#define BP_AMPERSAND (RA(BP_P))         // &
#define BP_AMPS (BP_AMPERSAND)

#define BP_OE (RA(BP_O))                // Œ

#define BP_DGRAVE (RA(BP_EGRV))         // ` (dead)

#define BP_IEXL (RA(BP_CARET))          // ¡

#define BP_DCARN (RA(BP_V))             // ˇ (dead)

#define BP_ETH (RA(BP_D))               // Ð

#define BP_DSLS (RA(BP_L))              // / (dead)

#define BP_IJ (RA(BP_J))                // Ĳ

#define BP_SCHW (RA(BP_Z))              // Ə

#define BP_DBREV (RA(BP_W))             // ˘ (dead)

#define BP_AE (RA(BP_A))                // Æ

#define BP_UGRV (RA(BP_U))              // Ù

#define BP_DIAE (RA(BP_I))              // ¨ (dead)

#define BP_EURO (RA(BP_E))              // €

#define BP_COPY (RA(BP_C))              // ©

#define BP_THRN (RA(BP_T))              // Þ

#define BP_SS (RA(BP_S))                // ẞ

#define BP_REGD (RA(BP_R))              // ®

#define BP_DTILD (RA(BP_N))             // ~ (dead)

#define BP_DMACR (RA(BP_M))             // ¯ (dead)

#define BP_DCEDL (RA(BP_CCED))          // ¸ (dead)

#define BP_BACKSLASH (RA(BP_AGRV))      // (backslash, antislash)
#define BP_BSLH (BP_BACKSLASH)

#define BP_LEFT_BRACE (RA(BP_Y))        // {
#define BP_LBRC (BP_LEFT_BRACE)

#define BP_RIGHT_BRACE (RA(BP_X))        // }
#define BP_RBRC (BP_RIGHT_BRACE)

#define BP_ELLP (RA(BP_X))               // …

#define BP_TILDE (RA(BP_DOT))            // ~
#define BP_TILD (BP_TILD)

#define BP_IQUE (RA(BP_QMARK))          // ¿

#define BP_DRNGA (RA(BP_Q))             // ° (dead)

#define BP_DGRK (RA(BP_G))              // µ (dead Greek key)

#define BP_DAGG (RA(BP_H))              // †

#define BP_DOGON (RA(BP_F))             // ˛ (dead)

#define BP_UNDERSCORE (RA(SPACE))       // _
#define BP_UNDER (BP_UNDERSCORE)

#define BP_EXPOSANT (RA(BP_T))          // ᵉˣᵖ
#define BP_EXP (BP_EXPOSANT)

#define BP_INDICE (RA(BP_V))            // ₁₂₃
#define BP_IND (BP_INDICE)

#define BP_PARA (LS(RA(BP_DLLR)))       // ¶

#define BP_DLQU (LS(RA(BP_DQT)))        // „

#define BP_LDQU (LS(RA(BP_LPAR)))       // “

#define BP_RDQU (LS(RA(BP_RPAR)))       // ”

#define BP_LEQL (LS(RA(BP_GGA)))        // ≤

#define BP_GEQL (LS(RA(BP_GDR)))        // ≥

#define BP_NOT (LS(RA(BP_PLUS)))        // ¬

#define BP_QRTR (LS(RA(BP_MINUS)))      // ¼

#define BP_HALF (LS(RA(BP_FSLH)))       // ½

#define BP_TQTR (LS(RA(BP_STAR)))       // ¾

#define BP_PRIM (LS(RA(BP_EQUAL)))      // ′

#define BP_DPRM (LS(RA(BP_PRCNT)))      // ″

#define BP_BRKP (LS(RA(BP_B)))          // ¦

#define BP_DACU (LS(RA(BP_EAIGU)))      // ˝ (dead)

#define BP_SECT (LS(RA(BP_P)))          // §

#define BP_DOTA (LS(RA(BP_I)))          // ˙ (dead)

#define BP_DCURR (LS(RA(BP_E)))         // ¤ (dead)

#define BP_DHORN (LS(RA(BP_COMMA)))     // ̛ (dead)

#define BP_LNGS (LS(RA(BP_C)))          // ſ

#define BP_TM (LS(RA(BP_R)))            // ™

#define BP_MORD (LS(RA(BP_M)))          // º

#define BP_DCMM (LS(RA(BP_CCED)))       // , (dead)

#define BP_LSQU (LS(RA(BP_Y)))          // ‘

#define BP_RSQU (LS(RA(BP_X)))          // ’

#define BP_MDDT (LS(RA(BP_DOT)))        // ·

#define BP_KEYB (LS(RA(BP_K)))          // ⌨

#define BP_DHOKA (LS(RA(BP_QMARK)))     // ̉ (dead)

#define BP_DOTB (LS(RA(BP_Q)))          // ̣ (dead)

#define BP_DDAG (LS(RA(BP_H)))          // ‡

#define BP_FORD (LS(RA(BP_F)))          // ª

#define BP_NNBS (LS(RA(SPACE)))         // (narrow non-breaking space)
