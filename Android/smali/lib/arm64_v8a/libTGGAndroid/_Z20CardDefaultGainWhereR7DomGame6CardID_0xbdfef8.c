// 函数: _Z20CardDefaultGainWhereR7DomGame6CardID
// 地址: 0xbdfef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(arg1 + mulu.dp.d(arg2, 0x68) + 0x1a68)
int64_t x9 = 0
int32_t* x10 = x8_1 + 0xe0

for (int32_t i = *x10; i != 0; i = *x10)
    if (i == 5)
        return zx.q(*(x8_1 + (x9 & 0xffffffff) * 0xc0 + 0xf8))
    
    x9 += 1
    x10 = &x10[0x30]

return 0x3ec
