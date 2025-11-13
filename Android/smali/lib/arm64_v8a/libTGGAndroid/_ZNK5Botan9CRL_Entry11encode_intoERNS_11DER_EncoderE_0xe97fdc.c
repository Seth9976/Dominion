// 函数: _ZNK5Botan9CRL_Entry11encode_intoERNS_11DER_EncoderE
// 地址: 0xe97fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* entry_x1
Botan::DER_Encoder::start_cons(entry_x1, 0x10)
int64_t* x0_1 = Botan::CRL_Entry::data()
uint64_t x1 = *x0_1
x0_1[1]
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_30 = -1
int32_t var_28 = 1
Botan::BigInt::binary_decode(&result_1, x1)
int64_t x0_4 = Botan::DER_Encoder::encode(entry_x1, &result_1, 2)
int64_t* x0_6 = Botan::CRL_Entry::data() + 0x18
(**x0_6)(x0_6, x0_4)
Botan::DER_Encoder::start_cons(x0_4, 0x10)
int64_t* x0_9 = Botan::CRL_Entry::data() + 0x48
(**x0_9)(x0_9, x0_4)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::end_cons()
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
