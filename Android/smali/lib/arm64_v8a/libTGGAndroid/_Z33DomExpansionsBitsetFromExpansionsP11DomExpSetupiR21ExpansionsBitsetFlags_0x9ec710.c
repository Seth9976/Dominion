// 函数: _Z33DomExpansionsBitsetFromExpansionsP11DomExpSetupiR21ExpansionsBitsetFlags
// 地址: 0x9ec710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0

if (arg2 s< 1)
    return 0

int32_t x9 = 0
uint64_t result = 0
uint64_t i_1 = zx.q(arg2)
void* __offset(DomExpSetup, 0x4) x8_1 = arg1 + 4
uint64_t i

do
    int32_t x12_1 = *(x8_1 - 4)
    uint64_t x13_1 = zx.q(x12_1 - 2)
    
    if (x13_1.d u<= 0x11)
        switch (x13_1)
            case 0
                result = zx.q(x12_1) | zx.q(result.d)
            case 1
                result = 4 | zx.q(result.d)
            case 2
                result = 8 | zx.q(result.d)
            case 3
                result = 0x10 | zx.q(result.d)
            case 4
                result = 0x20 | zx.q(result.d)
            case 5
                result = 0x40 | zx.q(result.d)
            case 6
                result = 0x80 | zx.q(result.d)
            case 7
                result = 0x100 | zx.q(result.d)
            case 8
                result = 0x200 | zx.q(result.d)
            case 9
                result = 0x400 | zx.q(result.d)
            case 0xa
                result = 0x800 | zx.q(result.d)
            case 0xb
                result = 0x1000 | zx.q(result.d)
            case 0xc
                result = 0x2000 | zx.q(result.d)
            case 0xd
                result = 0x4000 | zx.q(result.d)
            case 0xe
                result = 0x8000 | zx.q(result.d)
            case 0xf
                result = 0x10000 | zx.q(result.d)
            case 0x10
                result = 0x20000 | zx.q(result.d)
            case 0x11
                result = zx.q(result.d) | 1
                x9 |= *x8_1
                *arg3 = x9
    
    i = i_1
    i_1 -= 1
    x8_1 += 0x10
while (i != 1)
return result
