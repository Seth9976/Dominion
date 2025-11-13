// 函数: _ZN5Botan4OCSP6CertID11decode_fromERNS_11BER_DecoderE
// 地址: 0xea1c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
Botan::BER_Decoder::start_cons(entry_x1, 0x10)
Botan::BigInt var_48
(*(*(arg1 + 8) + 8))(arg1 + 8, &var_48)
Botan::BER_Decoder::decode(&var_48, arg1 + 0x48, 4, 4)
Botan::BER_Decoder::decode(&var_48, arg1 + 0x60, 4, 4)
Botan::BER_Decoder::decode(&var_48, arg1 + 0x78, 2)
Botan::BER_Decoder::end_cons()
int64_t var_18_1 = 0
int64_t* var_18

if (var_18 != 0)
    (*(*var_18 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_28
return Botan::deallocate_memory(result, var_28 - result, 1)
