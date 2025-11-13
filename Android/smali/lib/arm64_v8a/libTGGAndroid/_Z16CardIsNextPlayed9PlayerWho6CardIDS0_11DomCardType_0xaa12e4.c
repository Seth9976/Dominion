// 函数: _Z16CardIsNextPlayed9PlayerWho6CardIDS0_11DomCardType
// 地址: 0xaa12e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg1
void* x0 = DomGetContext()
int64_t x8 = *(x0 + 8)

if (*(x8 + muls.dp.d(x23, 0x5a30) + 0x181cc) s>= 1)
    int64_t x25_1 = sx.q(x23)
    int64_t i = 0
    
    do
        if (*(x8 + x25_1 * 0x5a30 + (i << 2) + 0x19b18) == arg2
                && *(x8 + x25_1 * 0x5a30 + 0x181cc) s> i.d + 1)
            int64_t i_1 = i
            
            do
                int32_t x23_1 = *(x8 + 0x19b1c + x25_1 * 0x5a30 + (i_1 << 2))
                
                if ((CardIs(zx.q(x23_1), arg4) & 1) != 0)
                    if (x23_1 == arg3)
                        return 1
                    
                    x8 = *(x0 + 8)
                    break
                
                x8 = *(x0 + 8)
                i_1 += 1
            while (*(x8 + x25_1 * 0x5a30 + 0x181cc) s> i_1.d + 1)
        
        i += 1
    while (i s< sx.q(*(x8 + x25_1 * 0x5a30 + 0x181cc)))

return 0
