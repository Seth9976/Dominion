// 函数: _ZN5Botan14Base64_EncoderC1Ebmb
// 地址: 0xd76d8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2.d
void** x19 = arg1
*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
__builtin_memset(arg1 + 0x18, 0, 0x20)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(&x19[7], 0, 0x11)
int64_t x10

if ((x22 & 1) != 0)
    x10 = arg3
else
    x10 = 0

x19[0xd] = 0
x19[0xe] = 0
*x19 = _vtable_for_Botan::Base64_Encoder + 0x10
x19[0xa] = x10
char entry_x3
x19[0xb].b = x22.b & entry_x3 & 1
x19[0xc] = 0
int64_t x0_1 = operator new(0x30)
x19[0xe] = x0_1 + 0x30
x19[0xf] = 0
__builtin_memset(x0_1, 0, 0x30)
x19[0xc] = x0_1
x19[0xd] = x0_1 + 0x30
x19[0x10] = 0
x19[0x11] = 0
int64_t result = operator new(0x40)
x19[0x11] = result + 0x40
x19[0x12] = 0
__builtin_memset(result, 0, 0x40)
x19[0xf] = result
x19[0x10] = result + 0x40
x19[0x13] = 0
return result
