// 函数: sub_f3aba0
// 地址: 0xf3aba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x27 = *(arg1 + 8)
Botan::Private_Key* x20 = **(arg1 + 0x10)
uint64_t x19 = zx.q(*x27)
Botan::RandomNumberGenerator* x0_1 =
    Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(*(x27 + 8))
char* x8_1 = *(x27 + 0x10)
char* x23

x23 = x8_1 == 0 ? &data_793a18 : x8_1

size_t x0_3 = strlen(x23)
char var_c0
void* var_b0
char var_a8
void* var_98
char var_90
void* var_80
int64_t var_78
void* var_68

if (x0_3 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3afac:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3afb4:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3afbc:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f3afe4:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
label_f3b00c:
    int64_t* x0_33 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    
    if ((zx.d(var_a8) & 1) != 0)
        operator delete(var_98)
    
    if ((zx.d(var_c0) & 1) == 0)
        if ((zx.d(var_90) & 1) != 0)
            goto label_f3b09c
        
        goto label_f3b05c
    
    operator delete(var_b0)
    
    if ((zx.d(var_90) & 1) == 0)
    label_f3b05c:
        
        if ((zx.d(var_78.b) & 1) == 0)
            sub_1101e04(x0_33)
            noreturn
    else
    label_f3b09c:
        operator delete(var_80)
        
        if ((zx.d(var_78.b) & 1) == 0)
            sub_1101e04(x0_33)
            noreturn
    
    operator delete(var_68)
    sub_1101e04(x0_33)
    noreturn

void* x24_1

if (x0_3 u>= 0x17)
    uint64_t x25_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    void* x0_5 = operator new(x25_1)
    x24_1 = x0_5
    size_t var_70_1 = x0_3
    var_68 = x0_5
    var_78 = x25_1 | 1
    memcpy(x24_1, x23, x0_3)
else
    x24_1 = &var_78 | 1
    var_78.b = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x24_1, x23, x0_3)

*(x24_1 + x0_3) = 0
char* x8_5 = *(x27 + 0x18)
char* x23_1

x23_1 = x8_5 == 0 ? &data_793a18 : x8_5

size_t x0_8 = strlen(x23_1)

if (x0_8 u>= -0x10)
    goto label_f3afac

int32_t x8_7
void* x24_2

if (x0_8 u< 0x17)
    x24_2 = &var_90 | 1
    var_90 = (x0_8.d << 1).b
    
    if (x0_8 != 0)
        goto label_f3ad08
    
    *(x24_2 + x0_8) = 0
    x8_7 = x27[8]
    
    if (x8_7 == 1)
        goto label_f3ad1c
    
    goto label_f3ac9c

uint64_t x25_3 = (x0_8 + 0x10) & 0xfffffffffffffff0
void* x0_12 = operator new(x25_3)
x24_2 = x0_12
size_t var_88_1 = x0_8
var_80 = x0_12
var_90.q = x25_3 | 1
label_f3ad08:
memcpy(x24_2, x23_1, x0_8)
*(x24_2 + x0_8) = 0
x8_7 = x27[8]
uint64_t var_a0
void* x0_21
int32_t x19_1

if (x8_7 != 1)
label_f3ac9c:
    
    if (x8_7 != 0)
        x19_1 = -2
    label_f3af40:
        
        if ((zx.d(var_90) & 1) != 0)
            operator delete(var_80)
        
        if ((zx.d(var_78.b) & 1) != 0)
            operator delete(var_68)
        
        return zx.q(x19_1)
    
    char* x24_3 = *(x27 + 0x38)
    int64_t x22_3 = *(x27 + 0x28)
    int64_t* x28_1 = *(x27 + 0x30)
    size_t x0_10 = strlen(x24_3)
    
    if (x0_10 u>= -0x10)
        goto label_f3afb4
    
    void* x25_2
    
    if (x0_10 u>= 0x17)
        uint64_t x26_1 = (x0_10 + 0x10) & 0xfffffffffffffff0
        void* x0_17 = operator new(x26_1)
        x25_2 = x0_17
        size_t var_b8_1 = x0_10
        var_b0 = x0_17
        var_c0.q = x26_1 | 1
        memcpy(x25_2, x24_3, x0_10)
    else
        x25_2 = &var_c0 | 1
        var_c0 = (x0_10.d << 1).b
        
        if (x0_10 != 0)
            memcpy(x25_2, x24_3, x0_10)
    
    *(x25_2 + x0_10) = 0
    Botan::PKCS8::BER_encode_encrypted_pbkdf_msec(x20, x0_1, &var_c0, x19, *(x27 + 0x40), &var_78, 
        &var_90)
    
    if (x28_1 == 0)
        x19_1 = -0x1f
        x0_21 = var_a8.q
        
        if (x0_21 == 0)
            goto label_f3af30
        
    label_f3aef8:
        void* var_a0_1 = x0_21
    label_f3af28:
        operator delete(x0_21)
    else
        int64_t x1_5 = var_a8.q
        size_t x2_5 = *x28_1
        size_t x8_15 = var_a0 - x1_5
        *x28_1 = x8_15
        
        if (x22_3 == 0 || x2_5 u< x8_15)
            x19_1 = -0xa
            
            if (x2_5 != 0 && x22_3 != 0)
                memset(x22_3, 0, x2_5)
                x19_1 = -0xa
            
            x0_21 = var_a8.q
            
            if (x0_21 != 0)
                goto label_f3aef8
        else if (x8_15 == 0)
            x19_1 = 0
            x0_21 = var_a8.q
            
            if (x0_21 != 0)
                goto label_f3aef8
        else
            if (x1_5 == 0)
                goto label_f3afe4
            
            memmove(x22_3, x1_5, x8_15)
            x19_1 = 0
            x0_21 = var_a8.q
            
            if (x0_21 != 0)
                goto label_f3aef8
else
label_f3ad1c:
    char* x24_4 = *(x27 + 0x38)
    int64_t x22_4 = *(x27 + 0x28)
    size_t* x28_2 = *(x27 + 0x30)
    size_t x0_15 = strlen(x24_4)
    
    if (x0_15 u>= -0x10)
        goto label_f3afbc
    
    void* x25_4
    
    if (x0_15 u>= 0x17)
        uint64_t x26_2 = (x0_15 + 0x10) & 0xfffffffffffffff0
        void* x0_23 = operator new(x26_2)
        x25_4 = x0_23
        size_t var_b8_2 = x0_15
        var_b0 = x0_23
        var_c0.q = x26_2 | 1
        memcpy(x25_4, x24_4, x0_15)
    else
        x25_4 = &var_c0 | 1
        var_c0 = (x0_15.d << 1).b
        
        if (x0_15 != 0)
            memcpy(x25_4, x24_4, x0_15)
    
    *(x25_4 + x0_15) = 0
    Botan::PKCS8::PEM_encode_encrypted_pbkdf_msec(x20, x0_1, &var_c0, x19, *(x27 + 0x40), &var_78, 
        &var_90)
    uint64_t x8_18 = zx.q(var_a8)
    int32_t temp0_1 = x8_18.d & 1
    void* x1_8
    
    if (temp0_1 == 0)
        x1_8 = &var_a8 | 1
    else
        x1_8 = var_98
    
    uint64_t x8_19
    
    if (temp0_1 == 0)
        x8_19 = x8_18 u>> 1
    else
        x8_19 = var_a0
    
    if (x28_2 == 0)
        x19_1 = -0x1f
        
        if ((zx.d(var_a8) & 1) != 0)
            x0_21 = var_98
            goto label_f3af28
    else
        uint64_t x2_9 = *x28_2
        *x28_2 = x8_19 + 1
        
        if (x22_4 == 0 || x2_9 u< x8_19 + 1)
            x19_1 = -0xa
            
            if (x2_9 != 0 && x22_4 != 0)
                memset(x22_4, 0, x2_9)
                x19_1 = -0xa
            
            if ((zx.d(var_a8) & 1) != 0)
                x0_21 = var_98
                goto label_f3af28
        else if (x8_19 == -1)
            x19_1 = 0
            
            if ((zx.d(var_a8) & 1) != 0)
                x0_21 = var_98
                goto label_f3af28
        else
            if (x1_8 == 0)
                goto label_f3b00c
            
            memmove(x22_4, x1_8, x8_19 + 1)
            x19_1 = 0
            
            if ((zx.d(var_a8) & 1) != 0)
                x0_21 = var_98
                goto label_f3af28
label_f3af30:

if ((zx.d(var_c0) & 1) == 0)
    goto label_f3af40

operator delete(var_b0)
goto label_f3af40
