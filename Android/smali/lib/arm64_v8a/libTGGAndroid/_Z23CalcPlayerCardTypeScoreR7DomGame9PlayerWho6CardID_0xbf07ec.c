// 函数: _Z23CalcPlayerCardTypeScoreR7DomGame9PlayerWho6CardID
// 地址: 0xbf07ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3 & 0xffff
int32_t x19 = arg2

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t x8_5 = zx.q(*(arg1 + 0xd40))
uint64_t x25 = zx.q(x22)
int32_t var_78[0x6]

if (x8_5.d s>= 1)
    memset(&var_78, 0, x8_5 << 2)

void* x10 = arg1 + x25 * 0x68
int32_t x22_1 = *(arg1 + 0xd50)
int32_t x23 = *(x10 + 0x1a70)
int32_t x8_10 = (x23 + (x22_1 << 0x10)) s% 0x3e5
int32_t* x9_3 = *(&data_1838a20 + (sx.q(x8_10) << 3))
void* x0_6

if (x9_3 != 0)
    while (*x9_3 != x23 || x9_3[1] != x22_1)
        x9_3 = *(x9_3 + 0x10)
        
        if (x9_3 == 0)
            goto label_bf08ec
    
    x0_6 = *(x9_3 + 8)
else
label_bf08ec:
    DomDefGetSlow(zx.q(x23), zx.q(x22_1))
    int32_t* x0_4 = malloc(0x18)
    int64_t x8_11 = sx.q(x8_10) << 3
    int64_t x9_4 = *(&data_1838a20 + x8_11)
    *x0_4 = x23
    x0_4[1] = x22_1
    *(&data_1838a20 + x8_11) = x0_4
    *(x0_4 + 0x10) = x9_4
    x0_6 = DomDefGetSlow(zx.q(x23), zx.q(x22_1))
    *(x0_4 + 8) = x0_6

if ((*(x0_6 + 0xc8) & 0x9407f000400) != 0)
    int32_t x22_2 = *(x10 + 0x1a70)
    
    if (x22_2 - 0xd4d u>= 2)
        int64_t x0_10 = CardHasWhenScoring(arg1, zx.q(x22_2))
        
        if (x0_10 != 0 && *(arg1 + 0xd40) s>= 1)
            int64_t i = 0
            
            do
                int32_t x27_1
                
                if (CountOngoing(arg1, zx.q(i.d), 0x2d, x22_2, 0) s>= 1)
                    x27_1 = 2
                else
                    x27_1 = 1
                
                int64_t var_58 = 0
                DomPushContext(arg1, zx.q(i.d), &var_58)
                int32_t x0_14 = x0_10()
                var_78[i] += x0_14 * x27_1
                int32_t* x8_18 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
                i += 1
                *x8_18 -= 1
            while (i s< sx.q(*(arg1 + 0xd40)))
        
        return zx.q(var_78[sx.q(x19)])

if (*(arg1 + x25 * 0x68 + 0x1a94) != x19)
    return 0

uint64_t x1_2 = zx.q(*(x10 + 0x1a70))

if (x1_2.d == 0xb13)
    return CalcOwnedIndivScore(arg1, zx.q(x19), zx.q(arg3))

CalcOwnedCardScore(arg1, x1_2, &var_78)
return zx.q(var_78[sx.q(x19)])
