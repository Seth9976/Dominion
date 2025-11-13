// 函数: _ZNSt11range_errorD0Ev
// 地址: 0x110155c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t x8 = entry_x0[1]
*entry_x0 = _vtable_for_std::runtime_error + 0x10
int32_t temp0_1
int32_t i

do
    temp0_1 = __ldaxr(x8 - 8)
    i = __stlxr(temp0_1 - 1, x8 - 8)
while (i != 0)

if (temp0_1 - 1 s< 0)
    operator delete(x8 - 0x18)

std::exception::~exception()
return operator delete(entry_x0) __tailcall
