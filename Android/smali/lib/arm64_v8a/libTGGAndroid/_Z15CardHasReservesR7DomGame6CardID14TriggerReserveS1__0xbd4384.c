// 函数: _Z15CardHasReservesR7DomGame6CardID14TriggerReserveS1_
// 地址: 0xbd4384
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0x400) = 0
int32_t x9 = 0
int32_t* x11_1 = *(arg1 + mulu.dp.d(arg2, 0x68) + 0x1a68) + 0xec

while (true)
    int32_t x12_1 = x11_1[-3]
    
    if (x12_1 != 6)
        if (x12_1 == 0)
            return 
    else if (x11_1[-2] == 5 && *x11_1 == arg3)
        int64_t x12_4 = sx.q(*(entry_x8 + 0x400))
        *(entry_x8 + 0x400) = x12_4.d + 1
        *(entry_x8 + (x12_4 << 2)) =
            (0x3ffff & (arg4 & 0xfff) << 6) | (0x3fff & arg2) << 0x12 | (x9 & 0xf) | 0x10
    
    x9 += 1
    x11_1 = &x11_1[0x30]
