// 函数: _ZN5Botan19base58_check_encodeEPKhm
// 地址: 0xcd0ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_38 = -1
int32_t var_30 = 1
Botan::BigInt::binary_decode(&result_1, arg1)
Botan::BigInt::operator<<=(&result_1)
int32_t var_24 = sub_cd1114(arg1, arg2)
Botan::BigInt::add(&result_1, &var_24, 1)
void* var_78
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_78)
uint64_t x2_1 = 0
int64_t var_60 = var_38
int32_t var_58 = var_30

if (arg2 != 0)
    while (zx.d(arg1[x2_1]) == 0)
        x2_1 += 1
        
        if (arg2 == x2_1)
            x2_1 = arg2
            break

char* entry_x8
sub_cd09d0(entry_x8, &var_78, x2_1)
void* x0_7 = var_78

if (x0_7 != 0)
    void* var_70_1 = x0_7
    int64_t var_68
    Botan::deallocate_memory(x0_7, (var_68 - x0_7) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_40
return Botan::deallocate_memory(result, (var_40 - result) s>> 2, 4)
