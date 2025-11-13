// 函数: _Z16Start_TriplePilev
// 地址: 0xa37e7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = ThisWhat()
int32_t x19 = x0.d
MultiplyPile(x0, 3)

if (x19 == 0x103)
    MultiplyPile(0x601, 2)

int32_t var_18 = 0
int32_t var_20 = 0
return NotifyLog(*(DomGetContext() + 8), 0x47, 0xffffffff, 0, nullptr, 0, zx.q(x19), 0)
