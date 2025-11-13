// 函数: _Z15PreSubmitAction9PlayerWhoRK8DomYield
// 地址: 0xb208a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg1 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg1, 0x4d48)

int64_t x9_1 = sx.q(*(x8_1 + 0x4098))
*(x8_1 + 0x4098) = x9_1.d + 1
return memcpy(x8_1 + x9_1 * 0xd20 + 0x1938, arg2, 0xd20) __tailcall
