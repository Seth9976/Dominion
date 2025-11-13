// 函数: sub_f34310
// 地址: 0xf34310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x20 = *(arg1 + 8)

if (x20 == 0)
    return 0xffffffe1

void** x0 = operator new(0x18)
void* x0_1 = operator new(0x28)
__builtin_memset(x0_1, 0, 0x18)
x0[2] = x0_1
*(x0_1 + 0x18) = -1
*(x0_1 + 0x20) = 1
x0[1].d = 0xc828b9d2
*x0 = _vtable_for_botan_mp_struct + 0x10
*x20 = x0
return 0
