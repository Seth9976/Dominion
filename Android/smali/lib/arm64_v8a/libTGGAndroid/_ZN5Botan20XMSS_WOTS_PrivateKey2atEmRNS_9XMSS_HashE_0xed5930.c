// 函数: _ZN5Botan20XMSS_WOTS_PrivateKey2atEmRNS_9XMSS_HashE
// 地址: 0xed5930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::XMSS_Hash& var_40 = arg2
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t i_2 = *(arg1 + 0x60)
int64_t i_1

i_1 = i_2 u> 8 ? 8 : i_2

int64_t* var_38

if (i_2 u>= 9)
    var_38.b = 0
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1, i_2 - 8)

var_38 = &result_1
int64_t var_48

if (i_1 != 0)
    int64_t i
    
    do
        sub_f4a08c(&var_38, &var_48:7 + i_1)
        i = i_1
        i_1 -= 1
    while (i != 1)

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x2
Botan::XMSS_Hash::h(entry_x2, &result_1, arg1 + 8)
Botan::XMSS_WOTS_PrivateKey::generate(arg1, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_48 - result, 1)
