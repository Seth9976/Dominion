// 函数: sub_5bf690
// 地址: 0x5bf690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7695ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_b4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int64_t xmm0 = *arg2
int32_t var_14_1 = 0
void* var_48
int32_t* var_64 = &var_48
var_48 = nullptr
int32_t var_44 = 0
var_14_1.b = 1
int32_t var_b8 = arg2[1].d
void var_6c
sub_5c83d0(&var_6c, xmm0.d)
var_14_1.b = 2
int32_t esi_1 = *(xmm0:4.d + 4)

if (var_44 != esi_1)
    void* eax_4 = var_48
    
    if (eax_4 != 0)
        free(*(eax_4 - 4))
    
    if (esi_1 s<= 0)
        var_48 = nullptr
    else
        var_48 = sub_5c0320(esi_1)
    
    int32_t var_44_1 = esi_1

void* var_2c = var_48
var_14_1.b = 4
void** var_60 = &var_2c
void* var_5c = &var_6c
void var_2d
void* var_58 = &var_2d
void** var_54 = &var_48
int32_t eax_7 = sub_5bbe40(&var_48)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(eax_7)
int32_t var_24 = 0
int32_t eax_10 = (eax_8 + (edx_1 & 3)) & 0xfffffffc
int32_t var_50 = eax_10

if (eax_10 s> 0)
    int32_t edi_3
    
    do
        int32_t* ecx_3 = *var_5c
        int32_t esi_2 = ecx_3[2]
        int32_t edi_1 = *ecx_3
        var_14_1.b = 5
        sub_5bbe40(ecx_3)
        int64_t var_c0
        var_c0:4.d = 4
        var_14_1.b = 4
        var_c0.d = (var_24 << 2) + edi_1
        int32_t var_94
        sub_5bc1c0(&var_94, var_c0, esi_2)
        int32_t var_84_1 = var_24
        int32_t var_80_1 = 0
        void* ecx_5 = *var_5c
        var_14_1.b = 6
        int32_t var_7c_1 = sub_5bbe40(ecx_5)
        int32_t var_78 = var_94
        var_14_1.b = 0xd
        int32_t var_70_1 = sub_5bbe40(ecx_5)
        var_14_1.b = 0xe
        int32_t eax_18 = sub_5c5c60(var_5c)
        var_14_1.b = 4
        int32_t ecx_9 = var_24 << 2
        edi_3 = var_24 + 4
        var_24 = edi_3
        void var_2e
        *(*var_60 + ecx_9) = sub_5c8a00(eax_18, &var_2e, &var_78, eax_18)
        eax_10 = var_50
    while (edi_3 s< eax_10)

sub_5c8640(eax_10, eax_10, &var_60, eax_7)
void* eax_21 = var_48
void** esi_5 = *arg1
int32_t var_3c = *(xmm0:4.d + 4)
int32_t var_14_2 = 0x10
int32_t eax_24 = sub_5bbe40(esi_5)
void* var_24_1 = *esi_5
var_2c = nullptr
void*** result = arg1
int32_t var_14_3 = 0x11
int32_t var_14_4 = 0xffffffff

if (sub_5c5c60(result) s> 0)
    int32_t eax_31
    void* edi_6
    
    do
        int32_t edi_4 = 0
        int32_t var_14_5 = 0x12
        
        if (sub_5c1b00(result) s> 0)
            void* esi_6 = var_24_1
            int32_t eax_29
            
            do
                esi_6 += 4
                float xmm0_4 = *(esi_6 - 4) f/ *(eax_21 + (edi_4 << 2))
                edi_4 += 1
                *(esi_6 - 4) = xmm0_4
                int32_t var_14_6 = 0x12
                eax_29 = sub_5c1b00(arg1)
            while (edi_4 s< eax_29)
            result = arg1
        
        edi_6 = var_2c + 1
        var_2c = edi_6
        var_24_1 += eax_24 << 2
        int32_t var_14_7 = 0x11
        eax_31 = sub_5c5c60(result)
        int32_t var_14_8 = 0xffffffff
    while (edi_6 s< eax_31)

sub_5b0e50(&var_48)
fsbase->NtTib.ExceptionList = ExceptionList
return result
