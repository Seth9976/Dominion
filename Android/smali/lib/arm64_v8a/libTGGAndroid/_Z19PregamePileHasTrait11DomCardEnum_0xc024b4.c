// 函数: _Z19PregamePileHasTrait11DomCardEnum
// 地址: 0xc024b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

for (int64_t i = 0; i != 4; i += 1)
    int32_t x20_1 = *(*(gPregameContext + 0x20) + i * 0x3c + 0x28)
    
    if (x20_1 == 0)
        break
    
    int32_t x21_1 = *gPregameContext
    int32_t x8_4 = (x20_1 + (x21_1 << 0x10)) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_4) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x20_1 || x9_5[1] != x21_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_c0254c
        
        if ((zx.d(*(*(x9_5 + 8) + 0xcd)) & 1) != 0)
            goto label_c025b8
    else
    label_c0254c:
        DomDefGetSlow(zx.q(x20_1), zx.q(x21_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_5 = sx.q(x8_4) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_5)
        *x0_1 = x20_1
        x0_1[1] = x21_1
        *(&data_1838a20 + x8_5) = x0_1
        *(x0_1 + 0x10) = x9_6
        void* x0_3 = DomDefGetSlow(zx.q(x20_1), zx.q(x21_1))
        *(x0_1 + 8) = x0_3
        
        if ((zx.d(*(x0_3 + 0xcd)) & 1) != 0)
        label_c025b8:
            int64_t x8_8 = *(gPregameContext + 0x20)
            
            if (*(x8_8 + i * 0x3c + 0x2c) == x19 || *(x8_8 + i * 0x3c + 0x30) == x19
                    || *(x8_8 + i * 0x3c + 0x34) == x19 || *(x8_8 + i * 0x3c + 0x38) == x19
                    || *(x8_8 + i * 0x3c + 0x3c) == x19 || *(x8_8 + i * 0x3c + 0x40) == x19
                    || *(x8_8 + i * 0x3c + 0x44) == x19 || *(x8_8 + i * 0x3c + 0x48) == x19
                    || *(x8_8 + i * 0x3c + 0x4c) == x19 || *(x8_8 + i * 0x3c + 0x50) == x19
                    || *(x8_8 + i * 0x3c + 0x54) == x19 || *(x8_8 + i * 0x3c + 0x58) == x19
                    || *(x8_8 + i * 0x3c + 0x5c) == x19 || *(x8_8 + i * 0x3c + 0x60) == x19)
                return 1

return 0
