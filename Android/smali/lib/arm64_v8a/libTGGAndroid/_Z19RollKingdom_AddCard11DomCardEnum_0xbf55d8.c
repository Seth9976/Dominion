// 函数: _Z19RollKingdom_AddCard11DomCardEnum
// 地址: 0xbf55d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *gPregameContext
int32_t x19 = arg1
int32_t x8_4 = (arg1 + (x20 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))

if (x9 != 0)
    while (*x9 != x19 || x9[1] != x20)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bf563c
else
label_bf563c:
    DomDefGetSlow(zx.q(x19), zx.q(x20))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x19
    x0_1[1] = x20
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    *(x0_1 + 8) = DomDefGetSlow(zx.q(x19), zx.q(x20))

int64_t x8_6 = sx.q(*(gPregameContext + 4))
int64_t x9_2 = *(gPregameContext + 0x20)
*(gPregameContext + 4) = x8_6.d + 1
*(x9_2 + (x8_6 << 2)) = x19
int32_t x0_5 = RollKingdom_SetupPile(zx.q(x19), 0)

if ((x0_5 & 1) == 0)
    int64_t x9_3 = *(gPregameContext + 0x20)
    int64_t x8_8 = sx.q(*(gPregameContext + 4)) - 1
    *(gPregameContext + 4) = x8_8.d
    *(x9_3 + (x8_8 << 2)) = 0

return zx.q(x0_5) & 1
