// 函数: _Z21FilterDisallowedCards14DomGameVersionRK14DomSetupConfigP11DomCardEnumRi
// 地址: 0xbf4b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*(arg2 + 0x16f4)) & 2) == 0 || *arg4 s< 1)
    return 

int32_t x21_1 = arg1.d
int32_t i = 0
int32_t x25_1 = arg1.d << 0x10

do
    int32_t x22_1 = *(arg3 + (sx.q(i) << 2))
    int32_t x8_4 = (x22_1 + x25_1) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_4) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x22_1 || x9_5[1] != x21_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bf4bd0
        
        if ((zx.d(*(*(x9_5 + 8) + 0xc8)) & 0x20) != 0)
            goto label_bf4c40
    else
    label_bf4bd0:
        DomDefGetSlow(zx.q(x22_1), zx.q(x21_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_5 = sx.q(x8_4) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_5)
        *x0_1 = x22_1
        x0_1[1] = x21_1
        *(&data_1838a20 + x8_5) = x0_1
        *(x0_1 + 0x10) = x9_6
        arg1 = DomDefGetSlow(zx.q(x22_1), zx.q(x21_1))
        *(x0_1 + 8) = arg1
        
        if ((zx.d(*(arg1 + 0xc8)) & 0x20) != 0)
        label_bf4c40:
            int64_t i_1 = sx.q(i)
            i -= 1
            int64_t x8_9 = sx.q(*arg4) - 1
            *arg4 = x8_9.d
            *(arg3 + (i_1 << 2)) = *(arg3 + (x8_9 << 2))
    
    i += 1
while (i s< *arg4)
