// 函数: _Z17CollectAllOngoingR7DomGame9PlayerWhoR10AbilityIDs11DomCardEnum
// 地址: 0xbbe2fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
*(arg3 + 0x400) = 0
int64_t result = CollectRegisteredAllOngoing(arg3, arg1, zx.q(x19), arg4)

if (x19 == 0xffffffff)
    return result

if (*(arg1 + 0xd40) s>= 1)
    int64_t i = 0
    
    do
        for (int32_t j = *(arg1 + i * 0x5a30 + 0x17f6c); j != 0; 
                j = *(arg1 + mulu.dp.d(j, 0x68) + 0x1ac8))
            CardHasAllOngoing(arg3, arg1, zx.q(x19), zx.q(i.d), zx.q(j))
        
        for (int32_t j_1 = *(arg1 + i * 0x5a30 + 0x1810c); j_1 != 0; 
                j_1 = *(arg1 + mulu.dp.d(j_1, 0x68) + 0x1ac8))
            CardHasAllOngoing(arg3, arg1, zx.q(x19), zx.q(i.d), zx.q(j_1))
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))

return CollectWhileOwnedAllOngoing(arg3, arg1, zx.q(x19)) __tailcall
