// 函数: sub_5a05d0
// 地址: 0x5a05d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$initialize_environment_by_cloning_nolock@D@@YAHXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg9
char const* const var_4c_2
int32_t var_48_2
char const* const var_44_5
char* ecx_12

if (eax_3 u> 3)
    var_44_5 = "DomLogGetLines"
    var_48_2 = 0x13e3
    var_4c_2 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
    ecx_12 = "Halt"
else
    char* const var_18
    int32_t var_14
    void* edx_6
    void* ebx_3
    
    switch (eax_3)
        case nullptr
            ebx_3 = arg6
            edx_6 = data_1597e30
            goto label_5a07cc
        case 1
            eax_3 = sub_5a04d0(eax_3)
            edx_6 = data_1597e30
            ebx_3 = arg6 + edx_6 - eax_3
        label_5a07cc:
            void* edi_2 = ebx_3
            void* ecx_19 = arg7 + ebx_3
            
            if (edx_6 s< ecx_19)
                ecx_19 = edx_6
            
            void* var_2c_1 = ecx_19
            
            if (ebx_3 s>= ecx_19)
            label_5a08ec:
                fsbase->NtTib.ExceptionList = ExceptionList
                return ecx_19 - ebx_3
            
            int32_t ebx_4 = ebx_3 << 6
            int32_t* esi_4 = arg8 + 4
            var_14 = ebx_4
            
            while (true)
                if (ebx_4 s< 0 || edi_2 s>= edx_6)
                label_5a077b:
                    var_44_5 = "XDynArray<struct DomLogEvent>::operator []"
                    var_48_2 = 0xd4
                    var_4c_2 = "C:\x\ax2017\Engine\xDynArray.h"
                    ecx_12 = "index >= 0 && index < mSize"
                    goto label_5a0914
                
                int32_t* eax_13 = data_1597e2c + ebx_4
                int32_t var_8_4 = 2
                sub_63d850(&esi_4[-1], 
                    sub_59ded0(eax_13, arg3, &var_18, arg2, arg4, eax_13, arg5, arg9))
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0)
                    char* eax_15 = var_18
                    
                    if (eax_15 != 0 && *eax_15 != 0)
                        char* eax_16 = sub_63d4e0(&var_18)
                        int32_t temp1_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                eax_3 = eax_13
                int32_t var_8_6 = 0xffffffff
                *esi_4 = 0
                int32_t edx_10 = eax_3[0xc]
                
                if (edx_10 s>= 0)
                    if (edx_10 s>= data_1597e3c)
                        break
                    
                    int32_t** edx_12 = (edx_10 << 4) + data_1597e38
                    
                    if (edx_12[2] == edi_2 && arg5 == *edx_12)
                        ebx_4 = var_14
                        int32_t ecx_25
                        ecx_25.b = eax_3[0xf] s<= *((arg5 << 2) + &data_1597e50)
                        *esi_4 = ecx_25 + 1
                        esi_4[1] = edx_12[1]
                        eax_3 = *edx_12
                        esi_4[2] = eax_3
                
                ecx_19 = var_2c_1
                edi_2 += 1
                ebx_4 += 0x40
                esi_4 = &esi_4[5]
                var_14 = ebx_4
                
                if (edi_2 s>= ecx_19)
                    goto label_5a08ec
                
                edx_6 = data_1597e30
                continue
        case 2, 3
            int32_t result_2 = data_1597e30
            int32_t result = 0
            eax_3 = data_1597e2c
            void* ecx_2 = &eax_3[result_2 * 0x10]
            
            if (eax_3 != ecx_2)
                while (eax_3[2] != 4)
                    eax_3 = &eax_3[0x10]
                    result += 1
                    
                    if (eax_3 == ecx_2)
                        break
            
            if (result_2 s< result)
                result = result_2
            
            int32_t edi_1 = 0
            int32_t result_1 = result
            
            if (result s<= 0)
            label_5a0799:
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            void* ecx_3 = nullptr
            var_18 = nullptr
            void* esi_2 = arg8 + 4
            
            while (true)
                if (ecx_3 s< 0)
                    goto label_5a077b
                
                if (edi_1 s>= result_2)
                    goto label_5a077b
                
                void* eax_5 = data_1597e2c + ecx_3
                int32_t var_8_1 = 0
                sub_63d850(esi_2 - 4, 
                    sub_59ded0(eax_5, arg3, &var_14, arg2, arg4, eax_5, arg5, arg9))
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    int32_t eax_7 = var_14
                    
                    if (eax_7 != 0 && *eax_7 != 0)
                        char* eax_8 = sub_63d4e0(&var_14)
                        int32_t temp0_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                int32_t var_8_3 = 0xffffffff
                *esi_2 = 0
                *(esi_2 + 8) = 0xffffffff
                eax_3 = *eax_5
                *(esi_2 + 0xc) = eax_3
                int32_t edx_3 = *(eax_5 + 0x30)
                
                if (edx_3 s>= 0)
                    if (edx_3 s>= data_1597e3c)
                        break
                    
                    int32_t* edx_5 = (edx_3 << 4) + data_1597e38
                    
                    if (edx_5[2] == edi_1)
                        eax_3 = arg5
                        
                        if (eax_3 == *edx_5)
                            result = result_1
                            int32_t ecx_9
                            ecx_9.b = *(eax_5 + 0x3c) s<= *((arg5 << 2) + &data_1597e50)
                            *esi_2 = ecx_9 + 1
                            *(esi_2 + 4) = edx_5[1]
                            eax_3 = *edx_5
                            *(esi_2 + 8) = eax_3
                
                edi_1 += 1
                ecx_3 = &var_18[0x40]
                esi_2 += 0x14
                var_18 = ecx_3
                
                if (edi_1 s>= result)
                    goto label_5a0799
                
                result_2 = data_1597e30
    
    var_44_5 = "XDynArray<struct DomLogDecision>::operator []"
    var_48_2 = 0xd4
    var_4c_2 = "C:\x\ax2017\Engine\xDynArray.h"
    ecx_12 = "index >= 0 && index < mSize"

label_5a0914:
sub_63b870(eax_3, &data_801800, ecx_12, var_4c_2, var_48_2, var_44_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
