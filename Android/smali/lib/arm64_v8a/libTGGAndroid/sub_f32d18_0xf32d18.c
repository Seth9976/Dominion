// 函数: sub_f32d18
// 地址: 0xf32d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24
uint64_t var_30 = x24
int32_t x19_2

if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 0 || *(arg1 + 0x18) == 0)
    x19_2 = -0x1f
else if (*(arg1 + 0x20) != 0)
    x19_2 = -0x1e
else if (*(arg1 + 0x28) - 4 u<= 0xe)
    int64_t* x0_2 = Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(*(arg1 + 0x30))
    char* x22_1 = *(arg1 + 0x18)
    size_t x0_4 = strlen(x22_1)
    char var_70
    void* var_60
    
    if (x0_4 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    label_f32f2c:
        int64_t* x0_15 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if ((zx.d(var_70) & 1) != 0)
            operator delete(var_60)
        
        sub_1101e04(x0_15)
        noreturn
    
    int64_t var_88
    void* var_78
    void* x23_1
    
    if (x0_4 u>= 0x17)
        x24 = (x0_4 + 0x10) & 0xfffffffffffffff0
        void* x0_6 = operator new(x24)
        x23_1 = x0_6
        size_t var_80_1 = x0_4
        var_78 = x0_6
        var_88 = x24 | 1
        memcpy(x23_1, x22_1, x0_4)
    else
        x23_1 = &var_88 | 1
        var_88.b = (x0_4.d << 1).b
        
        if (x0_4 != 0)
            memcpy(x23_1, x22_1, x0_4)
    
    *(x23_1 + x0_4) = 0
    int16_t x22_2 = *(arg1 + 0x28)
    int64_t* x0_8 = operator new(0x10)
    *x0_8 = 0
    x0_8[1] = 0
    uint64_t var_58 = x0_8
    void* var_50_1 = &x0_8[2]
    void* var_48_1 = &x0_8[2]
    (*(*x0_2 + 0x10))(x0_2, x0_8, 0x10)
    sub_cd34a0(&var_70, &var_88, &var_58, x22_2, arg1, x24)
    operator delete(x0_8)
    
    if ((zx.d(var_88.b) & 1) != 0)
        operator delete(var_78)
    
    uint64_t x8_13 = zx.q(var_70)
    int64_t* x9_1 = *(arg1 + 0x10)
    int32_t temp0_1 = x8_13.d & 1
    void* x1_4
    
    if (temp0_1 == 0)
        x1_4 = &var_70 | 1
    else
        x1_4 = var_60
    
    uint64_t x8_14
    uint64_t var_68
    
    if (temp0_1 == 0)
        x8_14 = x8_13 u>> 1
    else
        x8_14 = var_68
    
    if (x9_1 == 0)
        x19_2 = -0x1f
    else
        int64_t x0_13 = *(arg1 + 8)
        size_t x2_3 = *x9_1
        *x9_1 = x8_14 + 1
        
        if (x0_13 != 0 && x2_3 u>= x8_14 + 1)
            if (x8_14 == -1)
                goto label_f32ec4
            
            if (x1_4 == 0)
                goto label_f32f2c
            
            memmove(x0_13, x1_4, x8_14 + 1)
        label_f32ec4:
            x19_2 = 0
            goto label_f32ef0
        
        x19_2 = -0xa
        
        if (x2_3 != 0 && x0_13 != 0)
            memset(x0_13, 0, x2_3)
            x19_2 = -0xa
    
label_f32ef0:
    
    if ((zx.d(var_70) & 1) != 0)
        operator delete(var_60)
else
    x19_2 = -0x20

return zx.q(x19_2)
