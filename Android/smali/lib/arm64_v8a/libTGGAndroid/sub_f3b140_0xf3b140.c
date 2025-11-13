// 函数: sub_f3b140
// 地址: 0xf3b140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x26 = *(arg1 + 8)
Botan::Private_Key* x19 = **(arg1 + 0x10)
Botan::RandomNumberGenerator* x0_1 =
    Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(*x26)
char* x8_1 = x26[1]
char* x22

x22 = x8_1 == 0 ? &data_793a18 : x8_1

size_t x0_3 = strlen(x22)
char var_b0
void* var_a0
char var_98
void* var_88
char var_80
void* var_70
int64_t var_68
void* var_58

if (x0_3 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3b538:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3b540:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3b548:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3b570:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_f3b598:
    int64_t* x0_33 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    
    if ((zx.d(var_98) & 1) != 0)
        operator delete(var_88)
    
    if ((zx.d(var_b0) & 1) == 0)
        if ((zx.d(var_80) & 1) != 0)
            goto label_f3b628
        
        goto label_f3b5e8
    
    operator delete(var_a0)
    
    if ((zx.d(var_80) & 1) == 0)
    label_f3b5e8:
        
        if ((zx.d(var_68.b) & 1) == 0)
            sub_1101e04(x0_33)
            noreturn
    else
    label_f3b628:
        operator delete(var_70)
        
        if ((zx.d(var_68.b) & 1) == 0)
            sub_1101e04(x0_33)
            noreturn
    
    operator delete(var_58)
    sub_1101e04(x0_33)
    noreturn

void* x23_1

if (x0_3 u>= 0x17)
    uint64_t x24_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    void* x0_5 = operator new(x24_1)
    x23_1 = x0_5
    size_t var_60_1 = x0_3
    var_58 = x0_5
    var_68 = x24_1 | 1
    memcpy(x23_1, x22, x0_3)
else
    x23_1 = &var_68 | 1
    var_68.b = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x23_1, x22, x0_3)

*(x23_1 + x0_3) = 0
char* x8_5 = x26[2]
char* x22_1

x22_1 = x8_5 == 0 ? &data_793a18 : x8_5

size_t x0_8 = strlen(x22_1)

if (x0_8 u>= -0x10)
    goto label_f3b538

int32_t x8_7
void* x23_2

if (x0_8 u< 0x17)
    x23_2 = &var_80 | 1
    var_80 = (x0_8.d << 1).b
    
    if (x0_8 != 0)
        goto label_f3b2a0
    
    *(x23_2 + x0_8) = 0
    x8_7 = x26[3].d
    
    if (x8_7 == 1)
        goto label_f3b2b4
    
    goto label_f3b234

uint64_t x24_3 = (x0_8 + 0x10) & 0xfffffffffffffff0
void* x0_12 = operator new(x24_3)
x23_2 = x0_12
size_t var_78_1 = x0_8
var_70 = x0_12
var_80.q = x24_3 | 1
label_f3b2a0:
memcpy(x23_2, x22_1, x0_8)
*(x23_2 + x0_8) = 0
x8_7 = x26[3].d
uint64_t var_90
void* x0_21
int32_t x19_1

if (x8_7 != 1)
label_f3b234:
    
    if (x8_7 != 0)
        x19_1 = -2
    label_f3b4d0:
        
        if ((zx.d(var_80) & 1) != 0)
            operator delete(var_70)
        
        if ((zx.d(var_68.b) & 1) != 0)
            operator delete(var_58)
        
        return zx.q(x19_1)
    
    char* x23_3 = x26[6]
    int64_t x21_3 = x26[4]
    int64_t* x27_1 = x26[5]
    size_t x0_10 = strlen(x23_3)
    
    if (x0_10 u>= -0x10)
        goto label_f3b540
    
    void* x24_2
    
    if (x0_10 u>= 0x17)
        uint64_t x25_1 = (x0_10 + 0x10) & 0xfffffffffffffff0
        void* x0_17 = operator new(x25_1)
        x24_2 = x0_17
        size_t var_a8_1 = x0_10
        var_a0 = x0_17
        var_b0.q = x25_1 | 1
        memcpy(x24_2, x23_3, x0_10)
    else
        x24_2 = &var_b0 | 1
        var_b0 = (x0_10.d << 1).b
        
        if (x0_10 != 0)
            memcpy(x24_2, x23_3, x0_10)
    
    *(x24_2 + x0_10) = 0
    Botan::PKCS8::BER_encode_encrypted_pbkdf_iter(x19, x0_1, &var_b0, x26[7], &var_68, &var_80)
    
    if (x27_1 == 0)
        x19_1 = -0x1f
        x0_21 = var_98.q
        
        if (x0_21 == 0)
            goto label_f3b4c0
        
    label_f3b488:
        void* var_90_1 = x0_21
    label_f3b4b8:
        operator delete(x0_21)
    else
        int64_t x1_5 = var_98.q
        size_t x2_5 = *x27_1
        size_t x8_15 = var_90 - x1_5
        *x27_1 = x8_15
        
        if (x21_3 == 0 || x2_5 u< x8_15)
            x19_1 = -0xa
            
            if (x2_5 != 0 && x21_3 != 0)
                memset(x21_3, 0, x2_5)
                x19_1 = -0xa
            
            x0_21 = var_98.q
            
            if (x0_21 != 0)
                goto label_f3b488
        else if (x8_15 == 0)
            x19_1 = 0
            x0_21 = var_98.q
            
            if (x0_21 != 0)
                goto label_f3b488
        else
            if (x1_5 == 0)
                goto label_f3b570
            
            memmove(x21_3, x1_5, x8_15)
            x19_1 = 0
            x0_21 = var_98.q
            
            if (x0_21 != 0)
                goto label_f3b488
else
label_f3b2b4:
    char* x23_4 = x26[6]
    int64_t x21_4 = x26[4]
    size_t* x27_2 = x26[5]
    size_t x0_15 = strlen(x23_4)
    
    if (x0_15 u>= -0x10)
        goto label_f3b548
    
    void* x24_4
    
    if (x0_15 u>= 0x17)
        uint64_t x25_2 = (x0_15 + 0x10) & 0xfffffffffffffff0
        void* x0_23 = operator new(x25_2)
        x24_4 = x0_23
        size_t var_a8_2 = x0_15
        var_a0 = x0_23
        var_b0.q = x25_2 | 1
        memcpy(x24_4, x23_4, x0_15)
    else
        x24_4 = &var_b0 | 1
        var_b0 = (x0_15.d << 1).b
        
        if (x0_15 != 0)
            memcpy(x24_4, x23_4, x0_15)
    
    *(x24_4 + x0_15) = 0
    Botan::PKCS8::PEM_encode_encrypted_pbkdf_iter(x19, x0_1, &var_b0, x26[7], &var_68, &var_80)
    uint64_t x8_18 = zx.q(var_98)
    int32_t temp0_1 = x8_18.d & 1
    void* x1_8
    
    if (temp0_1 == 0)
        x1_8 = &var_98 | 1
    else
        x1_8 = var_88
    
    uint64_t x8_19
    
    if (temp0_1 == 0)
        x8_19 = x8_18 u>> 1
    else
        x8_19 = var_90
    
    if (x27_2 == 0)
        x19_1 = -0x1f
        
        if ((zx.d(var_98) & 1) != 0)
            x0_21 = var_88
            goto label_f3b4b8
    else
        uint64_t x2_9 = *x27_2
        *x27_2 = x8_19 + 1
        
        if (x21_4 == 0 || x2_9 u< x8_19 + 1)
            x19_1 = -0xa
            
            if (x2_9 != 0 && x21_4 != 0)
                memset(x21_4, 0, x2_9)
                x19_1 = -0xa
            
            if ((zx.d(var_98) & 1) != 0)
                x0_21 = var_88
                goto label_f3b4b8
        else if (x8_19 == -1)
            x19_1 = 0
            
            if ((zx.d(var_98) & 1) != 0)
                x0_21 = var_88
                goto label_f3b4b8
        else
            if (x1_8 == 0)
                goto label_f3b598
            
            memmove(x21_4, x1_8, x8_19 + 1)
            x19_1 = 0
            
            if ((zx.d(var_98) & 1) != 0)
                x0_21 = var_88
                goto label_f3b4b8
label_f3b4c0:

if ((zx.d(var_b0) & 1) == 0)
    goto label_f3b4d0

operator delete(var_a0)
goto label_f3b4d0
