// 函数: _ZN5Botan3TLS15Handshake_State20hello_verify_requestERKNS0_20Hello_Verify_RequestE
// 地址: 0xe6a5b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x70))()
Botan::TLS::Client_Hello::update_hello_cookie(*(arg1 + 0x100))
int64_t* x0_2 = *(arg1 + 0x10)
*(arg1 + 0xf0) = *(arg1 + 0xe8)
(*(*x0_2 + 8))(x0_2, *(arg1 + 0x100))
void* x24 = *(arg1 + 0xe8)
int64_t x23 = *(arg1 + 0xf0)
void* var_68
void* x22 = var_68
size_t x25 = x23 - x24
int64_t var_60
uint64_t x27 = var_60 - x22 + x25

if (*(arg1 + 0xf8) - x24 u< x27)
    int64_t x0_4 = operator new(x27)
    x23 = x0_4 + x25
    
    if (x25 s>= 1)
        memcpy(x0_4, x24, x25)
    
    *(arg1 + 0xe8) = x0_4
    *(arg1 + 0xf0) = x23
    *(arg1 + 0xf8) = x0_4 + x27
    
    if (x24 != 0)
        operator delete(x24)
        x23 = *(arg1 + 0xf0)
        x22 = var_68

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    arg1 + 0xe8, x23, x22)

if (var_68 != 0)
    void* var_60_1 = var_68
    operator delete(var_68)

int64_t* x0_9 = *(arg1 + 8)
return (*(*x0_9 + 0x70))(x0_9, *(arg1 + 0x100))
