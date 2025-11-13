// 函数: _ZN5Botan3TLS17make_hello_randomERNS_21RandomNumberGeneratorERKNS0_6PolicyE
// 地址: 0xe45fe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x0
int128_t v0
x0, v0 = operator new(0x20)
v0.q = 0
v0:8.q = 0
entry_x8[1] = x0 + 0x20
entry_x8[2] = x0 + 0x20
__builtin_memset(x0, 0, 0x20)
*entry_x8 = x0
(*(*arg1 + 0x10))(arg1, x0, 0x20, v0)
char var_48 = 0xe
int32_t var_47
__builtin_strncpy(&var_47, "SHA-256", 8)
int16_t var_60 = 0
Botan::HashFunction::create_or_throw(&var_48, &var_60)
void* var_50

if ((zx.d(var_60.b) & 1) != 0)
    operator delete(var_50)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
int64_t x1_2 = *entry_x8
int64_t* result
(*(*result + 0x18))(result, x1_2, entry_x8[1] - x1_2)
Botan::Buffered_Computation::final<std::__ndk1::allocator<uint8_t> >(result)

if (((*(*arg2 + 0x60))(arg2) & 1) != 0)
    var_48.q = std::__ndk1::chrono::system_clock::now()
    **entry_x8 = _byteswap(std::__ndk1::chrono::system_clock::to_time_t(&var_48))

int64_t var_28 = 0

if (result == 0)
    return result

return (*(*result + 0x10))()
