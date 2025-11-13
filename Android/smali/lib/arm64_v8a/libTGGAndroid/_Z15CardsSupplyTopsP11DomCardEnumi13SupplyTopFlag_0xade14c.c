// 函数: _Z15CardsSupplyTopsP11DomCardEnumi13SupplyTopFlag
// 地址: 0xade14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardID* entry_x8
int64_t result = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), entry_x8, zx.q(arg3))
int32_t x8 = result.d - 1
*(entry_x8 + 0xc80) = result.d

if (result.d s>= 1)
    if (arg2 s<= 0)
        void* x9_2 = entry_x8 + (sx.q(result.d) << 2) - 4
        int32_t i
        
        do
            *(entry_x8 + 0xc80) = x8
            int32_t x10_1 = *x9_2
            x9_2 -= 4
            i = x8 + 1
            x8 -= 1
            *entry_x8 = x10_1
        while (i s> 1)
    else
        int32_t i_1 = 0
        
        do
            int64_t i_2 = sx.q(i_1)
            uint64_t x26_1 = zx.q(arg2)
            DomCardEnum* x27_1 = arg1
            
            while (true)
                result =
                    CardIs(*(DomGetContext() + 8), zx.q(*(entry_x8 + (i_2 << 2))), zx.q(*x27_1))
                
                if ((result.d & 1) != 0)
                    break
                
                uint64_t temp0_1 = x26_1
                x26_1 -= 1
                x27_1 += 4
                
                if (temp0_1 == 1)
                    i_1 -= 1
                    int64_t x8_3 = sx.q(*(entry_x8 + 0xc80)) - 1
                    *(entry_x8 + 0xc80) = x8_3.d
                    *(entry_x8 + (i_2 << 2)) = *(entry_x8 + (x8_3 << 2))
                    break
            
            i_1 += 1
        while (i_1 s< *(entry_x8 + 0xc80))

return result
