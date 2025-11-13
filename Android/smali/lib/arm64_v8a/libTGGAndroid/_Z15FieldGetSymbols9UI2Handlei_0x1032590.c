// 函数: _Z15FieldGetSymbols9UI2Handlei
// 地址: 0x1032590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1020[0x400]
GetPropDefs(*gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8), &var_1020, nullptr)
int32_t x8_3 = var_1020[sx.q(arg2) * 8 + 2]

if (x8_3 s<= 0xcf)
    uint64_t x8_4 = zx.q(x8_3 - 0x66)
    
    if (x8_4.d u<= 0x2c)
        switch (x8_4)
            case 0
                return &data_1180d08
            case 0xc
                return &data_11805c8
            case 0xf
                return gAnimCurve
            case 0x13
                return gTextAlignment
            case 0x14
                return &data_1180648
else
    if (x8_3 == 0xd0)
        return &data_1180dc8
    
    if (x8_3 == 0xd1)
        return &data_1180938
    
    if (x8_3 == 0xdf)
        return &data_1180b18
    
    if (x8_3 == 0x10e)
        return gAnimLoop
    
    if (x8_3 == 0xfd)
        return &data_1180b98

pthread_kill(pthread_self(), 6)
return GetAttribItemIndex(XNoReturn()) __tailcall
