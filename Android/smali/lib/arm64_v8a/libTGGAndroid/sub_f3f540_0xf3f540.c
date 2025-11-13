// 函数: sub_f3f540
// 地址: 0xf3f540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_2 = __dynamic_cast(Botan_FFI::safe_get<Botan::Public_Key, 740844825u>(*(arg1 + 8)), 
    _typeinfo_for_Botan::Public_Key, _typeinfo_for_Botan::EC_PublicKey, -1)
char var_58
void* var_48
int32_t x21_1

if (x0_2 != 0)
    (*(*(x0_2 + *(*x0_2 - 0x88)) + 0x10))()
    uint64_t x9_2 = zx.q(var_58)
    int32_t x8_4 = x9_2.d & 1
    uint64_t x9_4
    uint64_t var_50
    
    if (x8_4 == 0)
        x9_4 = x9_2 u>> 1
    else
        x9_4 = var_50
    
    if (x9_4 != 3)
        x21_1 = 1
        
        if ((x8_4 & 0xff) != 0)
            operator delete(var_48)
    else
        x21_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_58, 0, -ffffffffffffffff, &data_745dc1) != 0 ? 1 : 0
        
        if ((zx.d(var_58) & 1) != 0)
            operator delete(var_48)

int32_t x19_1

if (x0_2 != 0 && (x21_1 & 1) == 0)
    char* x22_1 = *(arg1 + 0x10)
    size_t x0_9 = strlen(x22_1)
    void* var_70
    Botan::HashFunction* var_38
    
    if (x0_9 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_f3f814:
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_f3f83c:
        int64_t* x0_26 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        void* x8_20 = var_70
        
        if (x8_20 != 0)
            void* var_68_2 = x8_20
            operator delete(x8_20)
        
        int64_t var_38_2 = 0
        
        if (var_38 != 0)
            (*(*var_38 + 0x10))()
        
        if ((zx.d(var_58) & 1) != 0)
            operator delete(var_48)
        
        sub_1101e04(x0_26)
        noreturn
    
    void* x23_1
    
    if (x0_9 u>= 0x17)
        uint64_t x24_1 = (x0_9 + 0x10) & 0xfffffffffffffff0
        void* x0_11 = operator new(x24_1)
        x23_1 = x0_11
        size_t var_50_1 = x0_9
        var_48 = x0_11
        var_58.q = x24_1 | 1
        memcpy(x23_1, x22_1, x0_9)
    else
        x23_1 = &var_58 | 1
        var_58 = (x0_9.d << 1).b
        
        if (x0_9 != 0)
            memcpy(x23_1, x22_1, x0_9)
    
    *(x23_1 + x0_9) = 0
    char* x22_2 = *(arg1 + 0x18)
    size_t x0_14 = strlen(x22_2)
    
    if (x0_14 u>= -0x10)
        goto label_f3f814
    
    size_t var_68
    void* var_60
    void* x23_2
    
    if (x0_14 u>= 0x17)
        uint64_t x24_2 = (x0_14 + 0x10) & 0xfffffffffffffff0
        void* x0_16 = operator new(x24_2)
        x23_2 = x0_16
        var_68 = x0_14
        var_60 = x0_16
        var_70 = x24_2 | 1
        memcpy(x23_2, x22_2, x0_14)
    else
        x23_2 = &var_70 | 1
        var_70.b = (x0_14.d << 1).b
        
        if (x0_14 != 0)
            memcpy(x23_2, x22_2, x0_14)
    
    *(x23_2 + x0_14) = 0
    int16_t var_88 = 0
    Botan::HashFunction::create_or_throw(&var_70, &var_88)
    void* var_78
    
    if ((zx.d(var_88.b) & 1) != 0)
        operator delete(var_78)
    
    if ((zx.d(var_70.b) & 1) != 0)
        operator delete(var_60)
    
    Botan::sm2_compute_za(var_38, &var_58, &x0_2[1], &x0_2[3])
    int64_t* x9_5 = *(arg1 + 0x28)
    void* x0_23
    
    if (x9_5 == 0)
        x19_1 = -0x1f
        x0_23 = var_70
        
        if (x0_23 != 0)
        label_f3f7c4:
            void* var_68_1 = x0_23
            operator delete(x0_23)
    else
        void* x1_5 = var_70
        int64_t x0_22 = *(arg1 + 0x20)
        size_t x2_4 = *x9_5
        size_t x8_16 = var_68 - x1_5
        *x9_5 = x8_16
        
        if (x0_22 == 0 || x2_4 u< x8_16)
            x19_1 = -0xa
            
            if (x2_4 != 0 && x0_22 != 0)
                memset(x0_22, 0, x2_4)
                x19_1 = -0xa
            
            x0_23 = var_70
            
            if (x0_23 != 0)
                goto label_f3f7c4
        else if (x8_16 == 0)
            x19_1 = 0
            x0_23 = var_70
            
            if (x0_23 != 0)
                goto label_f3f7c4
        else
            if (x1_5 == 0)
                goto label_f3f83c
            
            memmove(x0_22, x1_5, x8_16)
            x19_1 = 0
            x0_23 = var_70
            
            if (x0_23 != 0)
                goto label_f3f7c4
    int64_t var_38_1 = 0
    
    if (var_38 != 0)
        (*(*var_38 + 0x10))()
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
else
    x19_1 = -0x20

return zx.q(x19_1)
