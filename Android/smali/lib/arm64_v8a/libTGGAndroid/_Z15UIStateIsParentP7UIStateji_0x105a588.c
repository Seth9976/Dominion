// 函数: _Z15UIStateIsParentP7UIStateji
// 地址: 0x105a588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = *(arg1 + 0x18)

if (x19 == 0)
    return 0

return zx.q(x19
    == UIStateElementGet(*(gUISystem + 0x28) + mulu.dp.d(arg2 & 0xffff, 0x458), arg3, &data_793a18) ? 1
    : 0)
