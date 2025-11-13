// 函数: sub_5bf3d0
// 地址: 0x5bf3d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76954b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_bc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float** result = *arg1
float** result_1 = result
int64_t xmm0 = *arg2
int32_t var_14_1 = 0
void* var_48
int32_t* var_68 = &var_48
var_48 = nullptr
int32_t var_44 = 0
var_14_1.b = 1
int32_t var_c0 = arg2[1].d
void var_70
sub_5c83d0(&var_70, xmm0.d)
var_14_1.b = 2
int32_t edi_1 = *(xmm0:4.d + 4)

if (var_44 != edi_1)
    void* eax_4 = var_48
    
    if (eax_4 != 0)
        free(*(eax_4 - 4))
    
    if (edi_1 s<= 0)
        var_48 = nullptr
    else
        var_48 = sub_5c0320(edi_1)
    
    int32_t var_44_1 = edi_1

void* var_28 = var_48
var_14_1.b = 4
void** var_64 = &var_28
void* var_60 = &var_70
void var_29
void* var_5c = &var_29
void** var_58 = &var_48
int32_t eax_7 = sub_5bbe40(&var_48)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(eax_7)
int32_t var_24 = 0
int32_t eax_10 = (eax_8 + (edx_1 & 3)) & 0xfffffffc
int32_t var_54 = eax_10

if (eax_10 s> 0)
    int32_t esi_2
    
    do
        int32_t* eax_12 = *var_60
        int32_t esi = eax_12[2]
        int32_t edi_2 = *eax_12
        var_14_1.b = 5
        sub_5bbe40(eax_12)
        int64_t var_c8
        var_c8:4.d = 4
        var_14_1.b = 4
        var_c8.d = (var_24 << 2) + edi_2
        int32_t var_98
        sub_5bc1c0(&var_98, var_c8, esi)
        int32_t var_88_1 = var_24
        int32_t var_84_1 = 0
        var_14_1.b = 6
        int32_t var_80_1 = sub_5bbe40(eax_12)
        int32_t var_7c = var_98
        var_14_1.b = 0xa
        int32_t var_74_1 = sub_5bbe40(eax_12)
        var_14_1.b = 0xb
        int32_t eax_19 = sub_4acc50(*var_60)
        var_14_1.b = 4
        int32_t ecx_10 = var_24 << 2
        esi_2 = var_24 + 4
        var_24 = esi_2
        void var_2a
        *(*var_64 + ecx_10) = sub_5c8ce0(eax_19, &var_2a, &var_7c, eax_19)
        eax_10 = var_54
    while (esi_2 s< eax_10)
    result = result_1

sub_5c8c50(eax_10, eax_10, &var_64, eax_7)
void* eax_22 = var_48
int32_t var_3c = *(xmm0:4.d + 4)
int32_t var_14_2 = 0xd
int32_t eax_25 = sub_5bbe40(result)
float* var_24_1 = *result
var_28 = nullptr
int32_t var_14_3 = 0xe
int32_t var_14_4 = 0xffffffff

if (sub_4acc50(result) s> 0)
    int32_t eax_32
    void* edi_5
    
    do
        int32_t edi_3 = 0
        int32_t var_14_5 = 0xf
        
        if (sub_5bbe40(result) s> 0)
            float* esi_3 = var_24_1
            int32_t eax_30
            
            do
                float xmm0_4 = *esi_3 f- *(eax_22 + (edi_3 << 2))
                edi_3 += 1
                *esi_3 = xmm0_4
                esi_3 = &esi_3[1]
                int32_t var_14_6 = 0xf
                eax_30 = sub_5bbe40(result_1)
            while (edi_3 s< eax_30)
            result = result_1
        
        edi_5 = var_28 + 1
        var_28 = edi_5
        var_24_1 = &var_24_1[eax_25]
        int32_t var_14_7 = 0xe
        eax_32 = sub_4acc50(result)
        int32_t var_14_8 = 0xffffffff
    while (edi_5 s< eax_32)

sub_5b0e50(&var_48)
fsbase->NtTib.ExceptionList = ExceptionList
return result
