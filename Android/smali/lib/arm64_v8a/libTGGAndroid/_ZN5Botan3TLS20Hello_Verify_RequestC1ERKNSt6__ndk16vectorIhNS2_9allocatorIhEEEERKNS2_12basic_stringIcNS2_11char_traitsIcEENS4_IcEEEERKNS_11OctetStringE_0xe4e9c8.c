// 函数: _ZN5Botan3TLS20Hello_Verify_RequestC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEERKNS_11OctetStringE
// 地址: 0xe4e9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::TLS::Hello_Verify_Request + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
char var_70 = 0x1a
int64_t var_6f
__builtin_strncpy(&var_6f, "HMAC(SHA-256)", 0xe)
int16_t var_88 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_70, &var_88)
void* var_78

if ((zx.d(var_88.b) & 1) != 0)
    operator delete(var_78)
void* var_60

if ((zx.d(var_70) & 1) != 0)
    operator delete(var_60)
int64_t* entry_x3
entry_x3[1]
int64_t* var_58
Botan::SymmetricAlgorithm::set_key(&var_58[1], *entry_x3)
var_70.q = _byteswap(*(arg2 + 8) - *arg2)
(*(*var_58 + 0x18))(var_58, &var_70, 8)
int64_t x1_3 = *arg2
(*(*var_58 + 0x18))(var_58, x1_3, *(arg2 + 8) - x1_3)
uint64_t x8_11 = zx.q(*arg3)
uint64_t x8_12

if ((x8_11.d & 1) == 0)
    x8_12 = x8_11 u>> 1
else
    x8_12 = *(arg3 + 8)

var_70.q = _byteswap(x8_12)
(*(*var_58 + 0x18))(var_58, &var_70, 8)
uint64_t x8_16 = zx.q(*arg3)
int32_t temp0 = x8_16.d & 1
void* __offset(Botan::OctetString, 0x1) x1_5

if (temp0 != 0)
    x1_5 = *(arg3 + 0x10)
else
    x1_5 = arg3 + 1

uint64_t x2_2

if (temp0 == 0)
    x2_2 = x8_16 u>> 1
else
    x2_2 = *(arg3 + 8)

(*(*var_58 + 0x18))(var_58, x1_5, x2_2)
int64_t x0_9 = (**var_58)(var_58)
void* x22_1 = *(arg1 + 8)
int64_t x0_10 = *(arg1 + 0x10)
size_t x23_1 = x0_10 - x22_1
size_t x24_1 = x0_9 - x23_1

if (x0_9 u> x23_1)
    int64_t x8_19 = *(arg1 + 0x18)
    
    if (x8_19 - x0_10 u>= x24_1)
        if (x24_1 != 0)
            memset(x0_10, 0, x24_1)
            x0_10 += x24_1
        
        *(arg1 + 0x10) = x0_10
    else
        if ((x0_9 & 0xffffffff80000000) != 0)
            int64_t* x0_20 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if (var_58 != 0)
                (*(*var_58 + 0x10))(var_58)
            
            void* x0_22 = *(arg1 + 8)
            
            if (x0_22 != 0)
                *(arg1 + 0x10) = x0_22
                operator delete(x0_22)
            
            sub_1101e04(x0_20)
            noreturn
        
        void* x8_20 = x8_19 - x22_1
        int64_t x10_2 = x8_20 << 1
        int64_t x10_3
        
        x10_3 = x10_2 u< x0_9 ? x0_9 : x10_2
        
        int64_t x27_1
        
        x27_1 = x8_20 u< 0x3fffffffffffffff ? x10_3 : 0x7fffffffffffffff
        
        int64_t x26_1
        
        if (x27_1 == 0)
            x26_1 = 0
        else
            x26_1 = operator new(x27_1)
        
        memset(x26_1 + x23_1, 0, x24_1)
        
        if (x23_1 s>= 1)
            memcpy(x26_1, x22_1, x23_1)
        
        *(arg1 + 8) = x26_1
        *(arg1 + 0x10) = x26_1 + x0_9
        *(arg1 + 0x18) = x26_1 + x27_1
        
        if (x22_1 != 0)
            operator delete(x22_1)
else if (x0_9 u< x23_1)
    *(arg1 + 0x10) = x22_1 + x0_9

(*(*var_58 + 0x20))(var_58, *(arg1 + 8))
return (*(*var_58 + 0x10))(var_58)
