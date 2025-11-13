// 函数: _Z9HasAttackP11DomCardEnumi14DomGameVersion
// 地址: 0xbf4e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26

if (arg2 s< 1)
    x26 = 0
else
    int32_t x19_1 = arg3
    int64_t x23_1 = 0
    uint64_t x25_1 = zx.q(arg2)
    x26 = 1
    
    do
        int32_t x21_1 = *(arg1 + (x23_1 << 2))
        int32_t x8_2 = (x21_1 + (arg3 << 0x10)) s% 0x3e5
        int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_2) << 3))
        
        if (x9_5 != 0)
            while (*x9_5 != x21_1 || x9_5[1] != x19_1)
                x9_5 = *(x9_5 + 0x10)
                
                if (x9_5 == 0)
                    goto label_bf4ed0
            
            if ((zx.d(*(*(x9_5 + 8) + 0xc8)) & 0x20) != 0)
                break
        else
        label_bf4ed0:
            DomDefGetSlow(zx.q(x21_1), zx.q(x19_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_3 = sx.q(x8_2) << 3
            int64_t x9_6 = *(&data_1838a20 + x8_3)
            *x0_1 = x21_1
            x0_1[1] = x19_1
            *(&data_1838a20 + x8_3) = x0_1
            *(x0_1 + 0x10) = x9_6
            void* x0_3 = DomDefGetSlow(zx.q(x21_1), zx.q(x19_1))
            *(x0_1 + 8) = x0_3
            
            if ((zx.d(*(x0_3 + 0xc8)) & 0x20) != 0)
                break
        
        x23_1 += 1
        x26 = x23_1 u< x25_1 ? 1 : 0
    while (x23_1 != x25_1)

return zx.q(x26) & 1
