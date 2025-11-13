// 函数: sub_e399ac
// 地址: 0xe399ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_50 = 0
Botan::HashFunction::create_or_throw(arg2, &var_50)
void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)

Botan::BigInt::encode_1363(arg4, arg3)
int64_t x1_2 = var_50.q
void* var_48
int64_t* result
(*(*result + 0x18))(result, x1_2, var_48 - x1_2)
void* x0_4 = var_50.q

if (x0_4 != 0)
    var_48 = x0_4
    Botan::deallocate_memory(x0_4, var_40 - x0_4, 1)

Botan::BigInt::encode_1363(arg5, arg3)
int64_t x1_5 = var_50.q
(*(*result + 0x18))(result, x1_5, var_48 - x1_5)
void* x0_7 = var_50.q

if (x0_7 != 0)
    var_48 = x0_7
    Botan::deallocate_memory(x0_7, var_40 - x0_7, 1)

Botan::Buffered_Computation::final()
uint64_t x1_7 = var_50.q
__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = -1
*(arg1 + 0x20) = 1
Botan::BigInt::binary_decode(arg1, x1_7)
void* x0_10 = var_50.q

if (x0_10 != 0)
    void* var_48_1 = x0_10
    Botan::deallocate_memory(x0_10, var_40 - x0_10, 1)

int64_t var_38 = 0

if (result == 0)
    return result

return (*(*result + 0x10))()
