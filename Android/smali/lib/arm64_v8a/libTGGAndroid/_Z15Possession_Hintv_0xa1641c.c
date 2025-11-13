// 函数: _Z15Possession_Hintv
// 地址: 0xa1641c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CurrentTurnWho() == PlayerLeft())
    return 1

void* x0_3 = DomGetContext()
int32_t* x24_1 = *(x0_3 + 8)
int32_t x20_1
int32_t x21_1

if (x24_1[0x670] s< 1)
    x20_1 = 0
    x21_1 = 0
else
    int64_t i = 0
    x21_1 = 0
    x20_1 = 0
    int64_t x23_1 = 0x3c258
    
    do
        void* x25_1 = x24_1 + x23_1
        int32_t x8_3 = *(x25_1 - 4)
        
        if (x8_3 == 0)
            if (*(x24_1 + x23_1) == PlayerLeft())
                x21_1 += 1
            
            if (*(x25_1 - 4) == 1)
                goto label_a164c8
        else if (x8_3 == 1)
        label_a164c8:
            
            if (*(x24_1 + x23_1) == PlayerLeft())
                x20_1 += 1
        
        x24_1 = *(x0_3 + 8)
        i += 1
        x23_1 += 0xb8
    while (i s< sx.q(x24_1[0x670]))

return zx.q(x21_1 s> x20_1 ? 1 : 0)
