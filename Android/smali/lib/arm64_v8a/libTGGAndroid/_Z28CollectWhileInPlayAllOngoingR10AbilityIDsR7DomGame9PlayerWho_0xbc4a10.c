// 函数: _Z28CollectWhileInPlayAllOngoingR10AbilityIDsR7DomGame9PlayerWho
// 地址: 0xbc4a10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0xd40) s< 1)
    return 

int32_t x19_1 = arg3
int64_t i = 0

do
    for (int32_t j = *(arg2 + i * 0x5a30 + 0x17f6c); j != 0; 
            j = *(arg2 + mulu.dp.d(j, 0x68) + 0x1ac8))
        CardHasAllOngoing(arg1, arg2, zx.q(x19_1), zx.q(i.d), zx.q(j))
    
    for (int32_t j_1 = *(arg2 + i * 0x5a30 + 0x1810c); j_1 != 0; 
            j_1 = *(arg2 + mulu.dp.d(j_1, 0x68) + 0x1ac8))
        CardHasAllOngoing(arg1, arg2, zx.q(x19_1), zx.q(i.d), zx.q(j_1))
    
    i += 1
while (i s< sx.q(*(arg2 + 0xd40)))
