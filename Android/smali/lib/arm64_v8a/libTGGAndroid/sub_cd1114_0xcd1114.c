// 函数: sub_cd1114
// 地址: 0xcd1114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38 = 0xe
int32_t var_37
__builtin_strncpy(&var_37, "SHA-256", 8)
int16_t var_50 = 0
Botan::HashFunction::create_or_throw(&var_38, &var_50)
void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)
__builtin_memset(&var_38, 0, 0x18)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x20)
v0.q = 0
v0:8.q = 0
char var_30
var_30.q = x0_3 + 0x20
int64_t var_28_1 = x0_3 + 0x20
__builtin_memset(x0_3, 0, 0x20)
var_38.q = x0_3
int64_t* var_18
(*(*var_18 + 0x18))(var_18, arg1, arg2, v0)
Botan::Buffered_Computation::final<std::__ndk1::allocator<uint8_t> >(var_18)
int64_t x1_2 = var_38.q
(*(*var_18 + 0x18))(var_18, x1_2, var_30.q - x1_2)
Botan::Buffered_Computation::final<std::__ndk1::allocator<uint8_t> >(var_18)
int32_t* x0_8 = var_38.q
int32_t x19_1 = *x0_8
var_30.q = x0_8
operator delete(x0_8)
int64_t var_18_1 = 0

if (var_18 != 0)
    (*(*var_18 + 0x10))()

return zx.q(_byteswap(x19_1))
