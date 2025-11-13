// 函数: _ZNK5Botan4OCSP6CertID11encode_intoERNS_11DER_EncoderE
// 地址: 0xea1b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
Botan::DER_Encoder::start_cons(entry_x1, 0x10)
(**(arg1 + 8))(arg1 + 8, entry_x1)
*(arg1 + 0x50)
int64_t x0_3 = Botan::DER_Encoder::add_object(entry_x1, 4, nullptr, *(arg1 + 0x48))
*(arg1 + 0x68)
Botan::DER_Encoder::encode(Botan::DER_Encoder::add_object(x0_3, 4, nullptr, *(arg1 + 0x60)), 
    arg1 + 0x78, 2)
return Botan::DER_Encoder::end_cons() __tailcall
