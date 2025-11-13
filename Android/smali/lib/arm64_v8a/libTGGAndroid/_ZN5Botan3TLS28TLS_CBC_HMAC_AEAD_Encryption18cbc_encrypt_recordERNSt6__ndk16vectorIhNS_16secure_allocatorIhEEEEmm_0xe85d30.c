// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Encryption18cbc_encrypt_recordERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmm
// 地址: 0xe85d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x3

if (entry_x3 u>= 0x11)
    return Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption::output_length(Botan::assertion_failure(
        "padding_length <= 16", &data_793a18, "cbc_encrypt_record", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x158c1)) __tailcall

char* x8 = *arg2
void* x9 = *(arg2 + 8)
int64_t x11 = x9 - x8
int64_t x10 = x11 + entry_x3

if (x11 u< x10)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x8 = *arg2
    x9 = *(arg2 + 8)
else if (x11 u> x10)
    x9 = &x8[x10]
    *(arg2 + 8) = x9

int64_t x12 = *(arg1 + 0x58)

if (x12 != 0)
    void* x11_1 = x9 - x8
    void* i = x11_1 - x12
    int64_t x12_1 = entry_x3 - x12
    
    do
        int32_t x13_4 = ((((x12_1 ^ i) | (i ^ (x11_1 - entry_x3))) ^ i) s>> 0x3f).d
        *(x8 + i) = (*(x8 + i) & x13_4.b) | ((entry_x3.b - 1) & (not.d(x13_4)).b)
        x8 = *arg2
        i += 1
        x12_1 += 1
    while (i != *(arg2 + 8) - x8)

int64_t x1_1 = *(arg1 + 0x78)
int64_t* x0_1 = *(arg1 + 0x68)
(*(*x0_1 + 0x30))(x0_1, x1_1, *(arg1 + 0x80) - x1_1)
int64_t* x0_2 = *(arg1 + 0x68)
int64_t x1_2 = *arg2 + arg3
(*(*x0_2 + 0x38))(x0_2, x1_2, *(arg2 + 8) - x1_2)
return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
    arg1 + 0x78, *(arg2 + 8) - *(arg1 + 0x58)) __tailcall
