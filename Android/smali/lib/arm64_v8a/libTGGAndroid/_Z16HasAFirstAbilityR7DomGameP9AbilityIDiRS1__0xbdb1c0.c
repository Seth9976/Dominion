// 函数: _Z16HasAFirstAbilityR7DomGameP9AbilityIDiRS1_
// 地址: 0xbdb1c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    AbilityID* x20_1 = arg2
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        uint64_t x1 = zx.q(*x20_1)
        
        if ((x1 & 0x30) == 0 && (zx.d(*(AbilityGetRegistered(arg1, x1) + 0x71)) & 0x10) != 0)
            *arg4 = *x20_1
            return 1
        
        i = i_1
        i_1 -= 1
        x20_1 += 4
    while (i != 1)

return 0
