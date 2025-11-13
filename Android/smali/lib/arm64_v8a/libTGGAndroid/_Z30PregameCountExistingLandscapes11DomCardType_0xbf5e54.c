// 函数: _Z30PregameCountExistingLandscapes11DomCardType
// 地址: 0xbf5e54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gPregameContext + 8)
int32_t x19

if (x8 s< 1)
    x19 = 0
else
    int64_t i = 0
    x19 = 0
    
    do
        int32_t x22_1 = *gPregameContext
        int32_t x21_1 = *(*(gPregameContext + 0x20) + i * 0x3c + 0x28)
        int32_t x9_6 = (x21_1 + (x22_1 << 0x10)) s% 0x3e5
        int32_t* x10_5 = *(&data_1838a20 + (sx.q(x9_6) << 3))
        void* x0_3
        
        if (x10_5 != 0)
            while (*x10_5 != x21_1 || x10_5[1] != x22_1)
                x10_5 = *(x10_5 + 0x10)
                
                if (x10_5 == 0)
                    goto label_bf5eb0
            
            x0_3 = *(x10_5 + 8)
        else
        label_bf5eb0:
            DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
            int32_t* x0_1 = malloc(0x18)
            int64_t x8_1 = sx.q(x9_6) << 3
            int64_t x9_1 = *(&data_1838a20 + x8_1)
            *x0_1 = x21_1
            x0_1[1] = x22_1
            *(&data_1838a20 + x8_1) = x0_1
            *(x0_1 + 0x10) = x9_1
            x0_3 = DomDefGetSlow(zx.q(x21_1), zx.q(x22_1))
            x8 = *(gPregameContext + 8)
            *(x0_1 + 8) = x0_3
        
        i += 1
        
        if ((*(x0_3 + 0xc8) & arg1) != 0)
            x19 += 1
    while (i s< sx.q(x8))

return zx.q(x19)
