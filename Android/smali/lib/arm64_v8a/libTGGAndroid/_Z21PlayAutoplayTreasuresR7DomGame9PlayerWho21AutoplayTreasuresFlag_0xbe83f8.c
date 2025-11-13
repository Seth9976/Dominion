// 函数: _Z21PlayAutoplayTreasuresR7DomGame9PlayerWho21AutoplayTreasuresFlag
// 地址: 0xbe83f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg3
bool var_196c = false
void var_ce8
int32_t x0 = GetTreasureCards(arg1, arg2, &var_ce8, zx.q(x22), &var_196c)
int32_t var_1968[0x242]
int32_t i_3
int64_t i_1
int32_t x26

if (x0 s< 1)
    i_1 = 0
    i_3 = 0
    x26 = 0
else
    i_3 = 0
    uint64_t x25 = zx.q(x0)
    
    do
        void var_cec
        int32_t x23_1 = *(&var_cec + (x25 << 2))
        x25 -= 1
        
        if ((IsAutoplayTreasure(arg1, zx.q(x23_1), zx.q(x22)) & 1) != 0)
            var_1968[sx.q(i_3)] = x23_1
            i_3 += 1
    while (x25 + 1 s> 1)
    
    i_1 = sx.q(i_3)
    
    if (i_3 s< 1)
        x26 = 0
    else
        x26 = 0
        int32_t (* x22_1)[0x242] = &var_1968
        int64_t i_2 = i_1
        int64_t i
        
        do
            uint64_t fp_1 = zx.q(*x22_1)
            
            if (fp_1.d u>= 0x320)
                void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_7 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_8 = *(x8_7 - 0x90)
                *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                
                if (*(arg1 + fp_1 * 0x68 + 0x1a70) == 0x61b)
                label_be854c:
                    int64_t x8_11 = zx.q(x26) << 0x20 s>> 0x1e
                    int32_t x10_1 = *(&var_1968 + x8_11)
                    x26 += 1
                    *(&var_1968 + x8_11) = *x22_1
                    *x22_1 = x10_1
            else if (*(arg1 + fp_1 * 0x68 + 0x1a70) == 0x61b)
                goto label_be854c
            
            i = i_1
            i_1 -= 1
            x22_1 = &(*x22_1)[1]
        while (i != 1)
        i_1 = i_2

DomGame& var_68 = arg1
std::__ndk1::__sort<SortCards&, CardID*>(&var_1968[sx.q(x26)], &var_1968[i_1], &var_68)
return zx.q(PlayTreasures(arg1, zx.q(arg2.d), &var_1968, i_3, 0xc0)) & 1
