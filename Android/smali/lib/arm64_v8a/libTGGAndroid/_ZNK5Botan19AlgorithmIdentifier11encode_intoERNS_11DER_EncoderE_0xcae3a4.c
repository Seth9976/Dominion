// 函数: _ZNK5Botan19AlgorithmIdentifier11encode_intoERNS_11DER_EncoderE
// 地址: 0xcae3a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
Botan::DER_Encoder::start_cons(entry_x1, 0x10)
(**(arg1 + 8))(arg1 + 8, entry_x1)
int64_t x9 = *(entry_x1 + 0x50)
uint64_t x1_1 = *(arg1 + 0x28)
int64_t x2_1 = *(arg1 + 0x30) - x1_1

if (x9 == *(entry_x1 + 0x48))
    int64_t* x0_3 = *(entry_x1 + 0x20)
    uint64_t var_30
    
    if (x0_3 == 0)
        var_30 = x1_1
        int64_t var_28_1 = x2_1
        Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(entry_x1 + 0x30, 
            &var_30)
    else
        var_30 = x1_1
        int64_t var_18 = x2_1
        (*(*x0_3 + 0x30))(x0_3, &var_30, &var_18)
else
    Botan::DER_Encoder::DER_Sequence::add_bytes(x9 - 0x38, x1_1)

return Botan::DER_Encoder::end_cons()
