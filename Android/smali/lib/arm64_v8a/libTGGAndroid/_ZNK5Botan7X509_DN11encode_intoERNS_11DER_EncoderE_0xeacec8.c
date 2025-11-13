// 函数: _ZNK5Botan7X509_DN11encode_intoERNS_11DER_EncoderE
// 地址: 0xeacec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
Botan::DER_Encoder::start_cons(entry_x1, 0x10)
uint64_t x1 = *(arg1 + 0x20)
int64_t x8 = *(arg1 + 0x28)

if (x1 == x8)
    int64_t* i = *(arg1 + 8)
    
    for (int64_t x21_1 = *(arg1 + 0x10); i != x21_1; i = &i[0xc])
        Botan::DER_Encoder::start_cons(Botan::DER_Encoder::start_cons(entry_x1, 0x11), 0x10)
        (**i)(i, entry_x1)
        (*i[4])(&i[4], entry_x1)
        Botan::DER_Encoder::end_cons()
        Botan::DER_Encoder::end_cons()
else
    int64_t x10_1 = *(entry_x1 + 0x50)
    int64_t x2_1 = x8 - x1
    
    if (x10_1 == *(entry_x1 + 0x48))
        int64_t* x0_7 = *(entry_x1 + 0x20)
        uint64_t var_38
        
        if (x0_7 == 0)
            var_38 = x1
            int64_t var_30_1 = x2_1
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(entry_x1 + 0x30, 
                &var_38)
        else
            var_38 = x1
            int64_t var_28 = x2_1
            (*(*x0_7 + 0x30))(x0_7, &var_38, &var_28)
    else
        Botan::DER_Encoder::DER_Sequence::add_bytes(x10_1 - 0x38, x1)

return Botan::DER_Encoder::end_cons()
