// 函数: _ZN5Botan6Sodium28crypto_stream_salsa20_xor_icEPhPKhmS3_mS3_
// 地址: 0xe35728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 u> 0x3f)
    return 0xffffffff

int128_t var_90
__builtin_memset(&var_90, 0, 0x38)
void* __offset(vtable_for_Botan::Salsa20, 0x10) var_98 = _vtable_for_Botan::Salsa20 + 0x10
int64_t var_50_1 = (zx.o(0)).q
Botan::SymmetricAlgorithm::set_key(&var_98, arg6)
int128_t var_80
void* x8_1 = var_80:8.q
int128_t var_70

if (x8_1 == var_70.q)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    *(x8_1 + 4) = *var_90.q
    *(var_80:8.q + 8) = *(var_90.q + 4)
    *(var_80:8.q + 0xc) = *(var_90.q + 8)
    void* x10_1 = var_90.q
    *(var_80:8.q + 0x10) = *(x10_1 + 0xc)
    int64_t x11_1 = var_90:8.q
    __builtin_strncpy(var_80:8.q, "expa", 4)
    int64_t x8_8 = var_80:8.q
    void* x8_9
    void* x9_8
    int32_t x10_5
    
    if (x11_1 - x10_1 != 0x10)
        __builtin_strncpy(x8_8 + 0x14, "nd 3", 4)
        x8_9 = var_80:8.q
        __builtin_strncpy(x8_9 + 0x28, "2-by", 4)
        __builtin_strncpy(x8_9 + 0x3c, "te k", 4)
        void* x9_9 = var_90.q
        *(x8_9 + 0x2c) = *(x9_9 + 0x10)
        *(x8_9 + 0x30) = *(x9_9 + 0x14)
        x10_5 = *(x9_9 + 0x18)
        x9_8 = x9_9 + 0x1c
    else
        __builtin_strncpy(x8_8 + 0x14, "nd 1", 4)
        x8_9 = var_80:8.q
        __builtin_strncpy(x8_9 + 0x28, "6-by", 4)
        __builtin_strncpy(x8_9 + 0x3c, "te k", 4)
        int32_t* x9_7 = var_90.q
        *(x8_9 + 0x2c) = *x9_7
        *(x8_9 + 0x30) = x9_7[1]
        x10_5 = x9_7[2]
        x9_8 = &x9_7[3]
    
    *(x8_9 + 0x34) = x10_5
    int32_t x9_10 = *x9_8
    *(x8_9 + 0x18) = 0
    *(x8_9 + 0x38) = x9_10
    *(var_80:8.q + 0x1c) = 0
    *(var_80:8.q + 0x20) = 0
    *(var_80:8.q + 0x24) = 0
    var_50_1 = 0
    *(var_80:8.q + 0x18) = *arg4
    *(var_80:8.q + 0x1c) = *(arg4 + 4)
    *(var_80:8.q + 0x20) = 0
    *(var_80:8.q + 0x24) = 0
    uint8_t* var_60
    Botan::Salsa20::salsa_core(var_60, var_80:8.q, 0x14)
    void* x8_17 = var_80:8.q
    *(x8_17 + 0x20) += 1
    void* x8_18 = var_80:8.q
    int32_t x10_8 = *(x8_18 + 0x24)
    int32_t x9_16
    
    if (*(x8_18 + 0x20) == 0)
        x9_16 = x10_8 + 1
    else
        x9_16 = x10_8
    
    *(x8_18 + 0x24) = x9_16
    void* x8_19 = var_80:8.q
    var_50_1 = 0
    
    if (x8_19 != var_70.q)
        *(x8_19 + 0x20) = arg5.d
        void* x8_20 = var_80:8.q
        *(x8_20 + 0x24) += (arg5 u>> 0x20).d
        Botan::Salsa20::salsa_core(var_60, var_80:8.q, 0x14)
        void* x8_21 = var_80:8.q
        *(x8_21 + 0x20) += 1
        void* x8_22 = var_80:8.q
        int32_t x10_10 = *(x8_22 + 0x24)
        int32_t x9_23
        
        if (*(x8_22 + 0x20) == 0)
            x9_23 = x10_10 + 1
        else
            x9_23 = x10_10
        
        *(x8_22 + 0x24) = x9_23
        var_50_1 = 0
        Botan::Salsa20::cipher(&var_98, arg2, arg1)
        uint8_t* x0_5 = var_60
        var_98 = _vtable_for_Botan::Salsa20 + 0x10
        
        if (x0_5 != 0)
            var_60 = x0_5
            Botan::deallocate_memory(x0_5, var_50_1 - x0_5, 1)
        
        void* x0_6 = var_80:8.q
        
        if (x0_6 != 0)
            int64_t x8_25 = var_70:8.q
            var_70.q = x0_6
            Botan::deallocate_memory(x0_6, (x8_25 - x0_6) s>> 2, 4)
        
        void* x0_7 = var_90.q
        
        if (x0_7 != 0)
            var_90:8.q = x0_7
            Botan::deallocate_memory(x0_7, (var_80.q - x0_7) s>> 2, 4)
        
        return 0

sub_c776cc(Botan::SymmetricAlgorithm::throw_key_not_set_error())
noreturn
