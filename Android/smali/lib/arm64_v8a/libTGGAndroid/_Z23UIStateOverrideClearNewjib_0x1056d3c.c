// 函数: _Z23UIStateOverrideClearNewjib
// 地址: 0x1056d3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1) & 0xffff
int64_t x8 = *(gUISystem + 0x28)

if (*(x8 + mulu.dp.d(x9.d, 0x458) + (sx.q(arg2) << 2) + 0x48) == 0)
    return 

arg1 = UIStateElementGet(x8 + x9 * 0x458, arg2, &data_793a18)

if ((arg3.d & 1) != 0)
    *(arg1 + 0x40) = 0
    return 

*arg1 += 1
