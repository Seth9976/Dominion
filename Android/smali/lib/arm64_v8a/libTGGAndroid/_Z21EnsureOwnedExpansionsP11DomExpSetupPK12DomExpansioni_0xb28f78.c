// 函数: _Z21EnsureOwnedExpansionsP11DomExpSetupPK12DomExpansioni
// 地址: 0xb28f78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

DomExpansion const* x19_1 = arg2
DomExpSetup* x20_1 = arg1
uint64_t i = 0
uint64_t i_2 = zx.q(arg3)

do
    int32_t x8_2 = *(x20_1 + (i << 4))
    uint64_t j_1 = i_2
    DomExpansion const* x10_1 = x19_1
    
    if (x8_2 == 0)
        break
    
    uint64_t j
    
    do
        if (x8_2 == *x10_1)
            return 
        
        j = j_1
        j_1 -= 1
        x10_1 += 4
    while (j != 1)
    i += 1
while (i != 0x20)

if (arg3 s< 1)
    return 

uint64_t i_1

do
    if ((ProfileHasEntitlementForExpansion(zx.q(*x19_1), nullptr).d & 1) != 0)
        void* x9_1 = x20_1 + (sx.q(i.d) << 4)
        i = zx.q(i.d + 1)
        *x9_1 = *x19_1
        *(x9_1 + 4) = 0xffffffff
        *(x9_1 + 8) = *V2I0
    
    i_1 = i_2
    i_2 -= 1
    x19_1 += 4
while (i_1 != 1)
