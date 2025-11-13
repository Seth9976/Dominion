// 函数: sub_1072d34
// 地址: 0x1072d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1

if (*(x21 + 0x80) == 0)
    int16_t* x19_1 = arg1
    void* x22_1 = x21
    
    if (*(x22_1 + 0x78) != 0)
        goto label_1072de0
    
    do
        int64_t x8_4 = sx.q(*(x22_1 + 0x7c))
        int64_t* x0 = *(x22_1 + 0x58)
        int64_t x1_1 = *(x22_1 + 0x68 + (x8_4 << 3))
        int32_t x8_5
        
        if (x8_4.d + 1 s< 0)
            x8_5 = x8_4.d + 2
        else
            x8_5 = x8_4.d + 1
        
        int32_t x8_7 = x8_4.d + 1 - (x8_5 & 0xfffffffe)
        *(x22_1 + 0x7c) = x8_7
        int32_t x20_1 = (*(x22_1 + 0x68 + (sx.q(x8_7) << 3))).d
        (**x0)(x0, x1_1, zx.q((*(x22_1 + 0x60) * *(x22_1 + 0x64)) << 1))
        *(x22_1 + 0x60)
        *(x22_1 + 0x78) += 1
        SoLoud::Soloud::mixSigned16(x19_1, x20_1)
    label_1072de0:
        SoLoud::Thread::sleep(1)
        
        if (*(x21 + 0x80) != 0)
            break
        
        x22_1 = *x19_1
    while (*(x22_1 + 0x78) == 0)

*(x21 + 0x80) += 1
