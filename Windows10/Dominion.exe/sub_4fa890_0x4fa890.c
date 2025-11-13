// 函数: sub_4fa890
// 地址: 0x4fa890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56cdd0()
int32_t* var_c98 = nullptr
int32_t* var_d0 = &var_c98
int32_t var_c9c = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_12095daf6f814c3b06b910505e98bb46>, void>::VTable
    * const var_d4
int32_t* var_b0 = &var_d4
int32_t* var_a0 = &var_c98
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_9fd2cc8a1e5fbf30af1f9d3b62677992>, void>::VTable
    * const var_a4
int32_t* var_80 = &var_a4
int32_t* var_70 = &var_c98
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_9a6e484436bad602a356a058320257d6>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
int32_t* var_40 = &var_c98
var_d4 = &std::_Func_impl_no_alloc<class <lambda_12095daf6f814c3b06b910505e98bb46>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_cc = &var_c9c
int32_t var_ac = 0x63
int32_t var_a8 = 0
var_a4 = &std::_Func_impl_no_alloc<class <lambda_9fd2cc8a1e5fbf30af1f9d3b62677992>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_9c = &var_c9c
int32_t var_7c = 0x64
int32_t var_78 = 0
var_74 = &std::_Func_impl_no_alloc<class <lambda_9a6e484436bad602a356a058320257d6>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_6c = &var_c9c
int32_t var_4c = 0x65
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e63813b24cd03d7ef1e3b6da12b01c0a>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_e63813b24cd03d7ef1e3b6da12b01c0a>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_3c = &var_c9c
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e63813b24cd03d7ef1e3b6da12b01c0a>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0x66
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_d4, 0xffffffff, 4, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
int32_t eax_4 = `eh vector vbase constructor iterator'(&var_d4, 0x30, 4, sub_4f8780)

if (var_c98 == 0)
    sub_63b870(eax_4, &data_801800, "which != TOKEN_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Adventures.cpp", 0x2ac, "Teacher_Call")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edi = 0
int32_t i = 7
int32_t* result = *(sub_573400() + 4) + 0x1594
int32_t var_c94[0x2f0]

do
    int32_t edx_1 = *result
    
    if (edx_1 != 0)
        var_c94[edi] = edx_1
        edi += 1
    
    i += 1
    result = &result[4]
while (i s< 0x21)

int32_t ecx = 0
int32_t var_ca4 = 0
bool cond:0 = edi == 0

if (edi s> 0)
    while (true)
        int32_t eax_7 = var_c94[ecx]
        void* eax_8 = sub_573400()
        int32_t ecx_1 = *(eax_8 + 0xc)
        void* eax_9 = *(eax_8 + 4)
        void* eax_10 = sub_573400()
        void* esi_1 = *(eax_10 + 4)
        int32_t eax_11 = sub_57da30(esi_1, eax_7)
        int32_t edx_3 = 7
        void* esi_2 = esi_1 + 0x1594
        int32_t edx_4
        
        while (true)
            int32_t i_1 = *esi_2
            
            if (i_1 != eax_7 && *(esi_2 + 4) != eax_7 && i_1 != eax_11)
                edx_3 += 1
                esi_2 += 0x10
                
                if (edx_3 s< 0x48)
                    continue
            else if (i_1 != 0)
                edx_4 = 7
                int32_t* eax_15 = *(eax_10 + 4) + 0x1594
                
                while (*eax_15 != i_1)
                    if (eax_15[1] == i_1)
                        break
                    
                    edx_4 += 1
                    eax_15 = &eax_15[4]
                    
                    if (edx_4 s>= 0x48)
                        goto label_4faad2
                
                break
            
        label_4faad2:
            edx_4 = 0
            break
        
        int32_t esi_3 = 0
        int32_t ecx_3 = *(eax_9 + 0x19a4)
        int32_t var_ca8_2 = ecx_3
        
        if (ecx_3 s> 0)
            void* eax_17 = eax_9 + 0x152cc
            
            while (true)
                if (*(eax_17 + 4) == edx_4)
                    ecx_3 = var_ca8_2
                    
                    if (*eax_17 == ecx_1)
                        break
                
                esi_3 += 1
                eax_17 += 0x20
                
                if (esi_3 s>= ecx_3)
                    goto label_4fab30
            
            goto label_4fab3b
        
    label_4fab30:
        result = *(sub_571b30(eax_7, *(*(sub_573400() + 4) + 0xd48)) + 0x98) & 4
        int32_t ecx_7
        
        if (result != 0)
            ecx_7 = var_ca4
        else
        label_4fab3b:
            edi -= 1
            result = var_c94[edi]
            var_c94[var_ca4] = result
            ecx_7 = var_ca4 - 1
        
        ecx = ecx_7 + 1
        var_ca4 = ecx
        
        if (ecx s>= edi)
            break
    
    cond:0 = edi == 0

if (not(cond:0))
    int64_t var_ce0
    __builtin_memset(&var_ce0, 0, 0x2c)
    int128_t var_d14 = 0x84.o
    int32_t var_cd4
    int128_t var_d04_1 = var_cd4.o
    int64_t var_cc4
    int128_t var_cf4_1 = var_cc4.o
    int32_t eax_23 = sub_56b410(&var_d14, edi, &var_c94, &var_d14, var_c9c, 0)
    result = sub_56cd40(var_c98, eax_23)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
