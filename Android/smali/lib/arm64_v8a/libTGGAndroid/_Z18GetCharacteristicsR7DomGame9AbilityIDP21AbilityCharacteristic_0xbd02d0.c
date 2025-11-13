// 函数: _Z18GetCharacteristicsR7DomGame9AbilityIDP21AbilityCharacteristic
// 地址: 0xbd02d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = arg2 & 0x30

if (x23 != 0x30)
    int64_t x22 = arg2 & 0xffffffff
    int32_t x0_1 = AbilitySource(arg1, x22)
    DomGame* x0_3
    void* __offset(DomGame, 0xb8) x8_4
    
    if (x23 == 0)
        x0_3 = AbilityGetRegistered(arg1, x22)
        x8_4 = x0_3 + 0x94
    else
        x0_3 = AbilityGetStatic(arg1, x22)
        x8_4 = x0_3 + 0xb8
    
    return CardGetCharacteristics(x0_3, zx.q(x0_1), arg3, zx.q(*x8_4)) __tailcall

int32_t x8_2 = *(arg1 + ((arg2 u>> 0x12 & 0x3fff) << 5) + 0x15f68)
int32_t x8_3

if (x8_2 s> 0xaff)
    uint64_t x9_1 = zx.q(x8_2 - 0xb00)
    
    if (x9_1.d u> 0xa)
        if (x8_2 == 0xc00)
            *arg3 = 0x160000000f
            return 2
        
        x8_3 = 0x10
    else
        switch (x9_1)
            case 0, 0xa
                x8_3 = 9
            case 1, 2, 6, 7, 8, 9
                x8_3 = 0x10
            case 3
                x8_3 = 0xd
            case 4
                x8_3 = 4
            case 5
                x8_3 = 0x11
else if (x8_2 == 0x400)
    x8_3 = 0xa
else
    x8_3 = 0x10

*arg3 = x8_3
return 1
