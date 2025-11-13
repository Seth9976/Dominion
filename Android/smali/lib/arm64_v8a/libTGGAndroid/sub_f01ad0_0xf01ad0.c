// 函数: sub_f01ad0
// 地址: 0xf01ad0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19_1

if (arg3 != 0x40)
    x19_1 = 0
else
    uint64_t x0_1 = (***(arg1 + 8))()
    void* var_48_1
    __builtin_memset(&var_48_1, 0, 0x18)
    void* var_40_1
    void* x22_1
    
    if (x0_1 != 0)
        if ((x0_1 & 0xffffffff80000000) != 0)
            goto label_f01be0
        
        void* x0_3 = operator new(x0_1)
        void* x23_1 = x0_3 + x0_1
        x22_1 = x0_3
        var_48_1 = x0_3
        void* var_38_1 = x23_1
        memset(x0_3, 0, x0_1)
        var_40_1 = x23_1
        goto label_f01b4c
    
    x22_1 = nullptr
label_f01b4c:
    int64_t* x0_4 = *(arg1 + 8)
    (*(*x0_4 + 0x20))(x0_4, x22_1)
    void* x8_5 = *(arg1 + 0x10)
    uint8_t* x3_1 = *(x8_5 + 8)
    
    if (*(x8_5 + 0x10) - x3_1 != 0x20)
        Botan::assertion_failure("pub_key.size() == 32", "Expected size", "is_valid_signature", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x7e49)
    label_f01be0:
        int64_t* x0_9 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x0_10 = var_48_1
        
        if (x0_10 != 0)
            operator delete(x0_10)
        
        sub_1101e04(x0_9)
        noreturn
    
    uint8_t* x0_5 = var_48_1
    uint8_t* x4_1 = *(arg1 + 0x18)
    x19_1 = Botan::ed25519_verify(x0_5, var_40_1 - x0_5, arg2, x3_1, x4_1, *(arg1 + 0x20) - x4_1)
    void* x0_7 = var_48_1
    
    if (x0_7 != 0)
        operator delete(x0_7)

return zx.q(x19_1) & 1
