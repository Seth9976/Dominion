// 函数: _Z17GetSplitPileCards11DomCardEnumRPKS_
// 地址: 0xc026c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1
uint64_t result = 0
int64_t x8_1

if (arg1 s> 0x1018)
    uint64_t x9_1 = zx.q(x8 - 0x1019)
    
    if (x9_1.d u<= 0x19)
        switch (x9_1)
            case 0
                x8_1 = 8
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 5
                x8_1 = 9
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 0xa
                x8_1 = 0xa
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 0xf
                x8_1 = 0xb
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 0x14
                x8_1 = 0xc
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 0x19
                x8_1 = 0xd
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
    else if (x8 == 0x1305)
        x8_1 = 7
        result = zx.q(*(x8_1 * 0x48 + &data_802460))
        *arg2 = x8_1 * 0x48 + 0x802464
else
    uint64_t x9 = zx.q(x8 - 0xc04)
    
    if (x9.d u<= 0xc)
        switch (x9)
            case 0
                x8_1 = 2
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 2
                x8_1 = 3
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 4
                x8_1 = 4
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 6
                x8_1 = 1
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 7
                x8_1 = 5
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
            case 0xc
                x8_1 = 6
                result = zx.q(*(x8_1 * 0x48 + &data_802460))
                *arg2 = x8_1 * 0x48 + 0x802464
    else if (x8 == 0x91c)
        x8_1 = 0
        result = zx.q(*(x8_1 * 0x48 + &data_802460))
        *arg2 = x8_1 * 0x48 + 0x802464
return result
