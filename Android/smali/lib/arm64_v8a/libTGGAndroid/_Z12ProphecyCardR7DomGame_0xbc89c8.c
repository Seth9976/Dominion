// 函数: _Z12ProphecyCardR7DomGame
// 地址: 0xbc89c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(arg1 + 0x174c)
int64_t x1_9

if (x20 == 0)
label_bc8a68:
    int32_t x20_1 = *(arg1 + 0x175c)
    
    if (x20_1 == 0)
    label_bc8aec:
        int32_t x20_2 = *(arg1 + 0x176c)
        
        if (x20_2 == 0)
        label_bc8b70:
            int32_t x20_3 = *(arg1 + 0x177c)
            
            if (x20_3 == 0)
                return 0
            
            int32_t x21_4 = *(arg1 + 0xd50)
            int32_t x8_26 = (x20_3 + (x21_4 << 0x10)) s% 0x3e5
            int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_26) << 3))
            
            if (x9_11 != 0)
                while (*x9_11 != x20_3 || x9_11[1] != x21_4)
                    x9_11 = *(x9_11 + 0x10)
                    
                    if (x9_11 == 0)
                        goto label_bc8bb8
                
                if ((zx.d(*(*(x9_11 + 8) + 0xcd)) & 8) == 0)
                    return 0
            else
            label_bc8bb8:
                DomDefGetSlow(zx.q(x20_3), zx.q(x21_4))
                int32_t* x0_13 = malloc(0x18)
                int64_t x8_27 = sx.q(x8_26) << 3
                int64_t x9_12 = *(&data_1838a20 + x8_27)
                *x0_13 = x20_3
                x0_13[1] = x21_4
                *(&data_1838a20 + x8_27) = x0_13
                *(x0_13 + 0x10) = x9_12
                void* x0_15 = DomDefGetSlow(zx.q(x20_3), zx.q(x21_4))
                *(x0_13 + 8) = x0_15
                
                if ((zx.d(*(x0_15 + 0xcd)) & 8) == 0)
                    return 0
            
            x1_9 = 0x25
        else
            int32_t x21_3 = *(arg1 + 0xd50)
            int32_t x8_19 = (x20_2 + (x21_3 << 0x10)) s% 0x3e5
            int32_t* x9_8 = *(&data_1838a20 + (sx.q(x8_19) << 3))
            
            if (x9_8 != 0)
                while (*x9_8 != x20_2 || x9_8[1] != x21_3)
                    x9_8 = *(x9_8 + 0x10)
                    
                    if (x9_8 == 0)
                        goto label_bc8b34
                
                if ((zx.d(*(*(x9_8 + 8) + 0xcd)) & 8) == 0)
                    goto label_bc8b70
                
                x1_9 = 0x24
            else
            label_bc8b34:
                DomDefGetSlow(zx.q(x20_2), zx.q(x21_3))
                int32_t* x0_9 = malloc(0x18)
                int64_t x8_20 = sx.q(x8_19) << 3
                int64_t x9_9 = *(&data_1838a20 + x8_20)
                *x0_9 = x20_2
                x0_9[1] = x21_3
                *(&data_1838a20 + x8_20) = x0_9
                *(x0_9 + 0x10) = x9_9
                void* x0_11 = DomDefGetSlow(zx.q(x20_2), zx.q(x21_3))
                *(x0_9 + 8) = x0_11
                
                if ((zx.d(*(x0_11 + 0xcd)) & 8) == 0)
                    goto label_bc8b70
                
                x1_9 = 0x24
    else
        int32_t x21_2 = *(arg1 + 0xd50)
        int32_t x8_12 = (x20_1 + (x21_2 << 0x10)) s% 0x3e5
        int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_12) << 3))
        
        if (x9_5 != 0)
            while (*x9_5 != x20_1 || x9_5[1] != x21_2)
                x9_5 = *(x9_5 + 0x10)
                
                if (x9_5 == 0)
                    goto label_bc8ab0
            
            if ((zx.d(*(*(x9_5 + 8) + 0xcd)) & 8) == 0)
                goto label_bc8aec
            
            x1_9 = 0x23
        else
        label_bc8ab0:
            DomDefGetSlow(zx.q(x20_1), zx.q(x21_2))
            int32_t* x0_5 = malloc(0x18)
            int64_t x8_13 = sx.q(x8_12) << 3
            int64_t x9_6 = *(&data_1838a20 + x8_13)
            *x0_5 = x20_1
            x0_5[1] = x21_2
            *(&data_1838a20 + x8_13) = x0_5
            *(x0_5 + 0x10) = x9_6
            void* x0_7 = DomDefGetSlow(zx.q(x20_1), zx.q(x21_2))
            *(x0_5 + 8) = x0_7
            
            if ((zx.d(*(x0_7 + 0xcd)) & 8) == 0)
                goto label_bc8aec
            
            x1_9 = 0x23
else
    int32_t x21_1 = *(arg1 + 0xd50)
    int32_t x8_5 = (x20 + (x21_1 << 0x10)) s% 0x3e5
    int32_t* x9_2 = *(&data_1838a20 + (sx.q(x8_5) << 3))
    
    if (x9_2 != 0)
        while (*x9_2 != x20 || x9_2[1] != x21_1)
            x9_2 = *(x9_2 + 0x10)
            
            if (x9_2 == 0)
                goto label_bc8a2c
        
        if ((zx.d(*(*(x9_2 + 8) + 0xcd)) & 8) == 0)
            goto label_bc8a68
        
        x1_9 = 0x22
    else
    label_bc8a2c:
        DomDefGetSlow(zx.q(x20), zx.q(x21_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_6 = sx.q(x8_5) << 3
        int64_t x9_3 = *(&data_1838a20 + x8_6)
        *x0_1 = x20
        x0_1[1] = x21_1
        *(&data_1838a20 + x8_6) = x0_1
        *(x0_1 + 0x10) = x9_3
        void* x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x21_1))
        *(x0_1 + 8) = x0_3
        
        if ((zx.d(*(x0_3 + 0xcd)) & 8) == 0)
            goto label_bc8a68
        
        x1_9 = 0x22

return BoardPileTop(arg1, x1_9) __tailcall
