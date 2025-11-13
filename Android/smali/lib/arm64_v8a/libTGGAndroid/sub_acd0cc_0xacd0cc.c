// 函数: sub_acd0cc
// 地址: 0xacd0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int64_t x8 = sx.q(*(x0 + 0x18))
DomGame* x20 = *(x0 + 8)
int32_t x9_1 = *(x20 + x8 * 0x5a30 + 0x181cc)
char x8_3

if (x9_1 s< 1)
label_acd188:
    x8_3 = 0
else
    int64_t x23_1 = 0
    
    while (true)
        int32_t x21_1 = *(x20 + x8 * 0x5a30 + 0x19b18 + (x23_1 << 2))
        int32_t x0_2
        x0_2, x9_1 = CardIs(x20, zx.q(x21_1), 2)
        
        if ((x0_2 & 1) != 0)
            int32_t x0_4 = CardIs(x20, zx.q(x21_1), 0x105)
            int32_t x0_6
            
            if ((x0_4 & 1) == 0)
                x0_6, x9_1 = CardIs(x20, zx.q(x21_1), 0x106)
            
            if ((x0_4 & 1) != 0 || (x0_6 & 1) != 0)
                x9_1 = x21_1 == arg1 ? 1 : 0
                x8_3 = 1
                break
        
        x23_1 += 1
        
        if (x23_1 s>= sx.q(*(x20 + x8 * 0x5a30 + 0x181cc)))
            goto label_acd188

return x8_3 & x9_1.b
