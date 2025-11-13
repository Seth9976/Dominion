// 函数: spPathConstraint_dispose
// 地址: 0xfb84f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 0x10))
_spFree(*(arg1 + 0x38))
int64_t x0_2 = *(arg1 + 0x48)

if (x0_2 != 0)
    _spFree(x0_2)

int64_t x0_3 = *(arg1 + 0x58)

if (x0_3 != 0)
    _spFree(x0_3)

int64_t x0_4 = *(arg1 + 0x68)

if (x0_4 != 0)
    _spFree(x0_4)

int64_t x0_5 = *(arg1 + 0x78)

if (x0_5 != 0)
    _spFree(x0_5)

return _spFree(arg1) __tailcall
