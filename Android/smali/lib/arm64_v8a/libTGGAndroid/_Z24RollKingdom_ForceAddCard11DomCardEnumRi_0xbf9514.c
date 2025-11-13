// 函数: _Z24RollKingdom_ForceAddCard11DomCardEnumRi
// 地址: 0xbf9514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *gPregameContext
int32_t x19 = arg1
int32_t x8_4 = (arg1 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))

if (x9 != 0)
    while (*x9 != x19 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bf957c
else
label_bf957c:
    DomDefGetSlow(zx.q(x19), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x19
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    *(x0_1 + 8) = DomDefGetSlow(zx.q(x19), zx.q(x21))

int64_t x9_2 = sx.q(*(gPregameContext + 4))
int32_t* x8_6 = *(gPregameContext + 0x20)
int64_t result

if (x9_2.d s< 0xa)
    *(gPregameContext + 4) = x9_2.d + 1
    x8_6[x9_2] = x19
    
    if ((RollKingdom_SetupPile(zx.q(x19), 0) & 1) != 0)
        return 1
    
    int64_t x9_6 = *(gPregameContext + 0x20)
    result = 0
    int64_t x8_10 = sx.q(*(gPregameContext + 4)) - 1
    *(gPregameContext + 4) = x8_10.d
    *(x9_6 + (x8_10 << 2)) = 0
else
    int64_t x9_3 = sx.q(*arg2)
    int32_t x21_1 = x8_6[x9_3]
    *arg2 = x9_3.d + 1
    x8_6[x9_3] = x19
    
    if ((RollKingdom_SetupPile(zx.q(x19), 0) & 1) != 0)
        return 1
    
    int64_t x9_5 = *(gPregameContext + 0x20)
    result = 0
    int64_t x8_8 = sx.q(*arg2) - 1
    *arg2 = x8_8.d
    *(x9_5 + (x8_8 << 2)) = x21_1

return result
