// 函数: _Z15TokenCardSourceRK7DomGame7TokenID
// 地址: 0xbfd0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + (sx.q(arg2) << 5) + 0x15f68))

if (result.d s<= 0xaff)
    if (result.d == 0x600)
        return 0x603
    
    if (result.d == 0x400)
        return result
else if (result.d s> 0xbff)
    if (result.d == 0xc00)
        return 0xc22
else
    uint64_t x8_2 = zx.q(result.d - 0xb00)
    
    if (x8_2.d u<= 0xa)
        switch (x8_2)
            case 0, 0xa
                return 0xb27
            case 2
                return 0xb30
            case 3
                return 0xb2f
            case 4
                return 0xb31
            case 5
                return 0xb2e
            case 6
                return 0xb2c

pthread_kill(pthread_self(), 6)
return SnapshotOwner(XNoReturn()) __tailcall
