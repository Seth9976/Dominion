// 函数: _Z9ExtraSlot10LayoutDims12LayoutCountsi
// 地址: 0xba34f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x4
int32_t x8

if ((arg2 & 1) != 0)
    if ((arg3 u>> 0x20).d u>= 5)
        pthread_kill(pthread_self(), 6)
        return CalcCols_2Plus(XNoReturn()) __tailcall
    
    int64_t x8_4 = arg3 s>> 0x20 << 2
    x8 = *(&data_801ea4 + x8_4)
    
    if (x8 s> entry_x4)
        return zx.q(*(&data_801e90 + x8_4) + entry_x4) << 0x20
else
    x8 = 0
    
    if (0 s> entry_x4)
        return zx.q(entry_x4) << 0x20

int32_t x8_5 = entry_x4 - x8
int32_t x8_6

if (arg3 == 0xb)
    x8_6 = x8_5 + 4
else
    x8_6 = x8_5

return 1 | zx.q(x8_6) << 0x20
