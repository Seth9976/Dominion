// 函数: _Z25CollectWhileInPlayOngoingR10AbilityIDsR7DomGame9PlayerWho14DomOngoingType
// 地址: 0xbc48f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0xd40) s< 1)
    return 

int32_t x19_1 = arg4
int32_t x20_1 = arg3
AbilityIDs& x22_1 = arg1
int64_t i = 0

do
    int32_t j = *(arg2 + i * 0x5a30 + 0x17f6c)
    
    if (j != 0)
        do
            arg1 = CardHasOngoing(arg2, zx.q(x20_1), zx.q(i.d), zx.q(j), zx.q(x19_1))
            
            if (arg1.d != 0xffffffff)
                int64_t x8_5 = sx.q(*(x22_1 + 0x400))
                *(x22_1 + 0x400) = x8_5.d + 1
                *(x22_1 + (x8_5 << 2)) = arg1.d
            
            j = *(arg2 + mulu.dp.d(j, 0x68) + 0x1ac8)
        while (j != 0)
    
    int32_t j_1 = *(arg2 + i * 0x5a30 + 0x1810c)
    
    if (j_1 != 0)
        do
            arg1 = CardHasOngoing(arg2, zx.q(x20_1), zx.q(i.d), zx.q(j_1), zx.q(x19_1))
            
            if (arg1.d != 0xffffffff)
                int64_t x8_7 = sx.q(*(x22_1 + 0x400))
                *(x22_1 + 0x400) = x8_7.d + 1
                *(x22_1 + (x8_7 << 2)) = arg1.d
            
            j_1 = *(arg2 + mulu.dp.d(j_1, 0x68) + 0x1ac8)
        while (j_1 != 0)
    
    i += 1
while (i s< sx.q(*(arg2 + 0xd40)))
