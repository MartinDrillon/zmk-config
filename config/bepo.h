#pragma once
#include <dt-bindings/zmk/keys.h>

// #define  A     (A)  // A
// #define  B   (Q)    // B

// #define DLR  GRAVE  // $
#define DQUO N1    // "
// #define LDAQ N2    // «
// #define RDAQ N3    // »
// #define LPRN R4    // (
// #define RPRN N5    // )
// #define AT   N6    // @
// #define PLUS N7    // +
// #define MINS N8    // -
// #define SLSH N9    // /
// #define ASTR N0    // *
// #define EQL  MINUS // =
// #define PERC EQUAL  // %
// #define B    Q    // B
// #define EACU W    // É
// #define P    E    // P
// #define O    R    // O
// #define EGRV T    // È
// #define DCIR Y    // ^ (dead)
// #define V    U    // V
// #define D    I    // D
// #define L    O    // L
// #define J    P    // J
// #define Z    LBKT // Z
// #define W    RBKT // W
// #define A    A    // A
// #define U    S    // U
// #define I    D    // I
// #define E    F    // E
// #define COMM G    // ,
// #define C    H    // C
// #define T    J    // T
// #define S    K    // S
// #define R    L    // R
// #define N    SEMI // N
// #define M    APOS // M
// #define CCED BSLH // Ç
// #define ECIR NUBS // Ê
// #define AGRV Z    // À
// #define Y    X    // Y
// #define X    C    // X
// #define DOT  V    // .
// #define K    B    // K
// #define QUOT N    // '
// #define Q    M    // Q
// #define G    COMMA // G
// #define H    DOT  // H
// #define F    SLSH // F
// #define HASH LS(DLR)  // #
// #define KP_N1    LS(DQUO) // 1
// #define KP_N2    LS(LDAQ) // 2
// #define KP_N3    LS(RDAQ) // 3
// #define KP_N4    LS(LPRN) // 4
// #define KP_N5    LS(RPRN) // 5
// #define KP_N6    LS(AT)   // 6
// #define KP_N7    LS(PLUS) // 7
// #define KP_N8    LS(MINS) // 8
// #define KP_N9    LS(SLSH) // 9
// #define KP_N0    LS(ASTR) // 0
// #define DEG  LS(EQL)  // °
// #define GRV  LS(PERC) // `
// #define EXLM LS(DCIR) // !
// #define SCLN LS(COMM) // ;
// #define COLN LS(DOT)  // :
// #define QUES LS(QUOT) // ?
// #define NBSP LS(SPACE)  // (non-breaking space)
// #define NDSH RA(DLR)  // –
// #define MDSH RA(DQUO) // —
// #define LABK RA(LDAQ) // <
// #define RABK RA(RDAQ) // >
// #define LBRC RA(LPRN) // [
// #define RBRC RA(RPRN) // ]
// #define CIRC RA(AT)   // ^
// #define PLMN RA(PLUS) // ±
// #define MMNS RA(MINS) // −
// #define DIV  RA(SLSH) // ÷
// #define MUL  RA(ASTR) // ×
// #define NEQL RA(EQL)  // ≠
// #define PERM RA(PERC) // ‰
// #define PIPE RA(B)    // |
// #define ACUT RA(EACU) // ´ (dead)
// #define AMPR RA(P)    // &
// #define OE   RA(O)    // Œ
// #define DGRV RA(EGRV) // ` (dead)
// #define IEXL RA(DCIR) // ¡
// #define CARN RA(V)    // ˇ (dead)
// #define ETH  RA(D)    // Ð
// #define DSLS RA(L)    // / (dead)
// #define IJ   RA(J)    // Ĳ
// #define SCHW RA(Z)    // Ə
// #define BREV RA(W)    // ˘ (dead)
// #define AE   RA(A)    // Æ
// #define UGRV RA(U)    // Ù
// #define DIAE RA(I)    // ¨ (dead)
// #define EURO RA(E)    // €
// #define COPY RA(C)    // ©
// #define THRN RA(T)    // Þ
// #define SS   RA(S)    // ẞ
// #define REGD RA(R)    // ®
// #define DTIL RA(N)    // ~ (dead)
// #define MACR RA(M)    // ¯ (dead)
// #define CEDL RA(CCED) // ¸ (dead)
// #define BSLS RA(AGRV) // (backslash)
// #define LCBR RA(Y)    // {
// #define RCBR RA(X)    // }
// #define ELLP RA(DOT)  // …
// #define TILD RA(K)    // ~
// #define IQUE RA(QUES) // ¿
// #define RNGA RA(Q)    // ° (dead)
// #define DGRK RA(G)    // µ (dead Greek key)
// #define DAGG RA(H)    // †
// #define OGON RA(F)    // ˛ (dead)
// #define UNDS RA(SPACE)  // _
// #define PARA LS(RA(DLR))  // ¶
// #define DLQU LS(RA(DQUO)) // „
// #define LDQU LS(RA(LDAQ)) // “
// #define RDQU LS(RA(RDAQ)) // ”
// #define LEQL LS(RA(LPRN)) // ≤
// #define GEQL LS(RA(RPRN)) // ≥
// #define NOT  LS(RA(PLUS)) // ¬
// #define QRTR LS(RA(MINS)) // ¼
// #define HALF LS(RA(SLSH)) // ½
// #define TQTR LS(RA(ASTR)) // ¾
// #define PRIM LS(RA(EQL))  // ′
// #define DPRM LS(RA(PERC)) // ″
// #define BRKP LS(RA(B))    // ¦
// #define DACU LS(RA(EACU)) // ˝ (dead)
// #define SECT LS(RA(P))    // §
// #define DOTA LS(RA(I))    // ˙ (dead)
// #define CURR LS(RA(E))    // ¤ (dead)
// #define HORN LS(RA(COMM)) // ̛ (dead)
// #define LNGS LS(RA(C))    // ſ
// #define TM   LS(RA(R))    // ™
// #define MORD LS(RA(M))    // º
// #define DCMM LS(RA(CCED)) // , (dead)
// #define LSQU LS(RA(Y))    // ‘
// #define RSQU LS(RA(X))    // ’
// #define MDDT LS(RA(DOT))  // ·
// #define KEYB LS(RA(K))    // ⌨
// #define HOKA LS(RA(QUOT)) // ̉ (dead)
// #define DOTB LS(RA(Q))    // ̣ (dead)
// #define DDAG LS(RA(H))    // ‡
// #define FORD LS(RA(F))    // ª
// #define NNBS LS(RA(SPACE))  // (narrow non-breaking space)