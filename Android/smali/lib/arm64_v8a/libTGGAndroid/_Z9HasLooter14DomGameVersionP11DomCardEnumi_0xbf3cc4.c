// 函数: _Z9HasLooter14DomGameVersionP11DomCardEnumi
// 地址: 0xbf3cc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26

if (arg3 s< 1)
    x26 = 0
else
    int32_t x20_1 = arg1
    int64_t x23_1 = 0
    uint64_t x25_1 = zx.q(arg3)
    x26 = 1
    
    do
        int32_t x21_1 = *(arg2 + (x23_1 << 2))
        
        if (x21_1 != 0)
            int32_t x8_4 = (x21_1 + (arg1 << 0x10)) s% 0x3e5
            int32_t* x9_6 = *(&data_1838a20 + (sx.q(x8_4) << 3))
            
            if (x9_6 != 0)
                while (*x9_6 != x21_1 || x9_6[1] != x20_1)
                    x9_6 = *(x9_6 + 0x10)
                    
                    if (x9_6 == 0)
                        goto label_bf3d18
                
                if ((zx.d(*(*(x9_6 + 8) + 0xc9)) & 0x10) != 0)
                    break
            else
            label_bf3d18:
                DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
                int32_t* x0_1 = malloc(0x18)
                int64_t x8_1 = sx.q(x8_4) << 3
                int64_t x9_1 = *(&data_1838a20 + x8_1)
                *x0_1 = x21_1
                x0_1[1] = x20_1
                *(&data_1838a20 + x8_1) = x0_1
                *(x0_1 + 0x10) = x9_1
                void* x0_3 = DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
                *(x0_1 + 8) = x0_3
                
                if ((zx.d(*(x0_3 + 0xc9)) & 0x10) != 0)
                    break
        
        x23_1 += 1
        x26 = x23_1 u< x25_1 ? 1 : 0
    while (x23_1 != x25_1)

return zx.q(x26) & 1
