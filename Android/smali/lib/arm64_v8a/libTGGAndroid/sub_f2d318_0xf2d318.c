// 函数: sub_f2d318
// 地址: 0xf2d318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)
char* x22 = x8[2]
int64_t x19 = *x8
int64_t* x25 = x8[1]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = **(arg1 + 0x10)
size_t x0_1 = strlen(x22)
int64_t var_70
void* var_60
char var_58
void* var_48

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* x23_1
    
    if (x0_1 u>= 0x17)
        uint64_t x24_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x24_1)
        x23_1 = x0_3
        size_t var_68_1 = x0_1
        var_60 = x0_3
        var_70 = x24_1 | 1
        memcpy(x23_1, x22, x0_1)
    else
        x23_1 = &var_70 | 1
        var_70.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x23_1, x22, x0_1)
    
    *(x23_1 + x0_1) = 0
    Botan::X509_Certificate::fingerprint(x20)
    uint64_t x22_1 = zx.q(var_58)
    int32_t temp0_1 = x22_1.d & 1
    void* x1_2
    
    if (temp0_1 == 0)
        x1_2 = &var_58 | 1
    else
        x1_2 = var_48
    
    uint64_t x8_5
    uint64_t var_50
    
    if (temp0_1 == 0)
        x8_5 = x22_1 u>> 1
    else
        x8_5 = var_50
    int32_t x21_2
    
    if (x25 == 0)
        x21_2 = -0x1f
        
        if ((x22_1.d & 1) == 0)
            goto label_f2d448
        
    label_f2d440:
        operator delete(var_48)
    label_f2d448:
        
        if ((zx.d(var_70.b) & 1) != 0)
            operator delete(var_60)
        
        return zx.q(x21_2)
    
    size_t x2_2 = *x25
    *x25 = x8_5 + 1
    
    if (x19 == 0 || x2_2 u< x8_5 + 1)
        x21_2 = -0xa
        
        if (x2_2 != 0 && x19 != 0)
            memset(x19, 0, x2_2)
            x21_2 = -0xa
        
        if ((x22_1.d & 1) == 0)
            goto label_f2d448
        
        goto label_f2d440
    
    if (x8_5 == -1)
        x21_2 = 0
        
        if ((x22_1.d & 1) != 0)
            goto label_f2d440
        
        goto label_f2d448
    
    if (x1_2 != 0)
        memmove(x19, x1_2, x8_5 + 1)
        x21_2 = 0
        
        if ((x22_1.d & 1) != 0)
            goto label_f2d440
        
        goto label_f2d448

int64_t* x0_11 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
    
    if ((zx.d(var_70.b) & 1) != 0)
    label_f2d4ec:
        operator delete(var_60)
        sub_1101e04(x0_11)
        noreturn
else if ((zx.d(var_70.b) & 1) != 0)
    goto label_f2d4ec

sub_1101e04(x0_11)
noreturn
