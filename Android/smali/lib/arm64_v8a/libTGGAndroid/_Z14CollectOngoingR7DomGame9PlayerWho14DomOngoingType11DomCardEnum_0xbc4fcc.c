// 函数: _Z14CollectOngoingR7DomGame9PlayerWho14DomOngoingType11DomCardEnum
// 地址: 0xbc4fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2
AbilityIDs* entry_x8
*(entry_x8 + 0x400) = 0
int64_t result = CollectRegisteredOngoing(entry_x8, arg1, zx.q(x20), zx.q(x19), zx.q(arg4))

if (x20 == 0xffffffff)
    return result

uint64_t x25 = zx.q(*(arg1 + 0xd40))

if (x25.d s>= 1)
    int64_t x23_1 = 0
    
    do
        int32_t i = *(arg1 + x23_1 * 0x5a30 + 0x17f6c)
        
        if (i != 0)
            do
                int32_t x0_2 = CardHasOngoing(arg1, zx.q(x20), zx.q(x23_1.d), zx.q(i), zx.q(x19))
                
                if (x0_2 != 0xffffffff)
                    int64_t x8_3 = sx.q(*(entry_x8 + 0x400))
                    *(entry_x8 + 0x400) = x8_3.d + 1
                    *(entry_x8 + (x8_3 << 2)) = x0_2
                
                i = *(arg1 + mulu.dp.d(i, 0x68) + 0x1ac8)
            while (i != 0)
        
        int32_t i_1 = *(arg1 + x23_1 * 0x5a30 + 0x1810c)
        
        if (i_1 != 0)
            do
                int32_t x0_4 = CardHasOngoing(arg1, zx.q(x20), zx.q(x23_1.d), zx.q(i_1), zx.q(x19))
                
                if (x0_4 != 0xffffffff)
                    int64_t x8_5 = sx.q(*(entry_x8 + 0x400))
                    *(entry_x8 + 0x400) = x8_5.d + 1
                    *(entry_x8 + (x8_5 << 2)) = x0_4
                
                i_1 = *(arg1 + mulu.dp.d(i_1, 0x68) + 0x1ac8)
            while (i_1 != 0)
        
        x23_1 += 1
    while (x23_1 != x25)

return CollectWhileOwnedOngoing(entry_x8, arg1, zx.q(x20), zx.q(x19)) __tailcall
