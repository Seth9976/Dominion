// 函数: _Z21MarkNextTimeAbilitiesR7DomGameRK10AbilityIDs9ContextId
// 地址: 0xbdb240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 

DomGame& x21_1 = arg1
int64_t i = 0

do
    uint64_t x1 = zx.q(*(arg2 + (i << 2)))
    
    if ((x1 & 0x30) == 0)
        arg1 = AbilityGetRegistered(x21_1, x1)
        
        if (*(arg1 + 0x4c) == 2 && *arg1 == 5)
            *(arg1 + 8) = arg3
    
    i += 1
while (i s< sx.q(*(arg2 + 0x400)))
