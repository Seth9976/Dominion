// 函数: _ZN5Botan3TLS18Certificate_VerifyC1ERNS0_12Handshake_IOERNS0_15Handshake_StateERKNS0_6PolicyERNS_21RandomNumberGeneratorEPKNS_11Private_KeyE
// 地址: 0xe42aac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x20) = 0
char var_80
void* var_70
Botan::TLS::Signature_Scheme* entry_x5

if (entry_x5 == 0)
    int64_t* x0_10 = Botan::assertion_failure("priv_key is not null", &data_793a18, 
        "Certificate_Verify", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13348)
    void* x0_11
    
    if ((zx.d(var_80) & 1) == 0)
        x0_11 = *(arg1 + 8)
        
        if (x0_11 == 0)
            sub_1101e04(x0_10)
            noreturn
    else
        operator delete(var_70)
        x0_11 = *(arg1 + 8)
        
        if (x0_11 == 0)
            sub_1101e04(x0_10)
            noreturn
    
    *(arg1 + 0x10) = x0_11
    operator delete(x0_11)
    sub_1101e04(x0_10)
    noreturn

Botan::TLS::Handshake_State::choose_sig_format(arg3, entry_x5, arg1.b + 0x20, 1)
int64_t* x0_1 = *(arg3 + 8)
int32_t var_68
(*(*x0_1 + 0x50))(x0_1, entry_x5, arg5, &var_80, zx.q(var_68), arg3 + 0xe8)
void* x0_2 = *(arg1 + 8)

if (x0_2 != 0)
    *(arg1 + 0x10) = x0_2
    operator delete(x0_2)
    __builtin_memset(arg1 + 8, 0, 0x18)

int128_t var_a0
*(arg1 + 8) = var_a0
int64_t var_90
*(arg1 + 0x18) = var_90
(*(*arg2 + 8))(arg2, arg1)
void* x25 = *(arg3 + 0xe8)
int64_t x24_1 = *(arg3 + 0xf0)
int64_t x23_1 = var_a0.q
size_t x26 = x24_1 - x25
uint64_t x28 = var_a0:8.q - x23_1 + x26

if (*(arg3 + 0xf8) - x25 u< x28)
    int64_t x0_5 = operator new(x28)
    x24_1 = x0_5 + x26
    
    if (x26 s>= 1)
        memcpy(x0_5, x25, x26)
    
    *(arg3 + 0xe8) = x0_5
    *(arg3 + 0xf0) = x24_1
    *(arg3 + 0xf8) = x0_5 + x28
    
    if (x25 != 0)
        operator delete(x25)
        x24_1 = *(arg3 + 0xf0)
        x23_1 = var_a0.q

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    arg3 + 0xe8, x24_1, x23_1)
void* result = var_a0.q

if (result != 0)
    var_a0:8.q = result
    result = operator delete(result)

if ((zx.d(var_80) & 1) == 0)
    return result

return operator delete(var_70)
