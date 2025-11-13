// 函数: _ZNSt11logic_erroraSERKS_
// 地址: 0x10dfd34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
int64_t x9 = *(entry_x1 + 8)
int64_t x8 = *(arg1 + 8)
*(arg1 + 8) = x9
int32_t i

do
    i = __stlxr(__ldaxr(x9 - 8) + 1, x9 - 8)
while (i != 0)
int32_t temp0_2
int32_t i_1

do
    temp0_2 = __ldaxr(x8 - 8)
    i_1 = __stlxr(temp0_2 - 1, x8 - 8)
while (i_1 != 0)

if (temp0_2 - 1 s< 0)
    operator delete(x8 - 0x18)

return arg1
