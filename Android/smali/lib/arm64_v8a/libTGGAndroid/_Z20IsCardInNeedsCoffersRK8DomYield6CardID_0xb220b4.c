// 函数: _Z20IsCardInNeedsCoffersRK8DomYield6CardID
// 地址: 0xb220b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gDomClient + 0x22134)) != 0)
    return 0

uint64_t x8_1 = zx.q(*(arg1 + 0x28))
int32_t x21

if (x8_1.d s< 1)
    x21 = 0
else
    int16_t* x9_1 = *(arg1 + 0x18)
    int64_t x9_2
    
    if (zx.d(*x9_1) != arg2)
        int64_t x10_2 = 1
        uint32_t x11_2
        
        do
            if (x8_1 == x10_2)
                x21 = x10_2 u< x8_1 ? 1 : 0
                goto label_b22228
            
            x11_2 = zx.d(x9_1[x10_2 * 2])
            x10_2 += 1
        while (x11_2 != arg2)
        x9_2 = x10_2 - 1
        x21 = x9_2 u< x8_1 ? 1 : 0
    else
        x9_2 = 0
        x21 = 1
    
    int32_t x0_1 = LocalWho()
    void* x0_4 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_1))
    uint64_t x8_2 = zx.q(*(x0_4 + 0x228))
    int32_t x8_7
    
    if (x8_2.d s< 1)
    label_b221ac:
        int32_t x0_5 = LocalWho()
        void* x0_8 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_5))
        uint64_t x8_4 = zx.q(*(x0_8 + 0x228))
        
        if (x8_4.d s< 1)
        label_b22204:
            x8_7 = 0x10000
        else
            void* x9_4 = x0_8 + 0x2c
            
            while (*(x9_4 - 4) != 0x16)
                uint64_t temp1_1 = x8_4
                x8_4 -= 1
                x9_4 += 8
                
                if (temp1_1 == 1)
                    goto label_b22204_2
            
            if (*x9_4 != 7 || (zx.d(*(arg1 + 0x2c)) & 1) == 0)
            label_b22204_1:
                x8_7 = 0x10000
            else
                x8_7 = 0x40000
    else
        void* x9_3 = x0_4 + 0x2c
        
        while (*(x9_3 - 4) != 0x16)
            uint64_t temp0_1 = x8_2
            x8_2 -= 1
            x9_3 += 8
            
            if (temp0_1 == 1)
                goto label_b221ac
        
        if (*x9_3 != 4)
            goto label_b221ac
        
        if ((zx.d(*(arg1 + 0x2c)) & 1) != 0)
            x8_7 = 0x40000
        else
        label_b22204_2:
            x8_7 = 0x10000
    
    x8_1 = zx.q((*(*(arg1 + 0x18) + ((x9_2 & 0xffffffff) << 2)) & x8_7) != 0 ? 1 : 0)

label_b22228:
return zx.q(x21) & zx.q(x8_1.d)
