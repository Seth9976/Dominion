// 函数: sub_6f2c70
// 地址: 0x6f2c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771f2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
int32_t var_28 = edx
int32_t* result_1 = arg1
int32_t* result = result_1
int32_t ebx = 1
int32_t eax_3 = 0
int32_t var_18 = 1
char eax_10

while (true)
    int32_t var_40_1 = eax_3 + 1
    int32_t var_44_1 = edx
    sub_63df30(result_1, "%s%d")
    int32_t var_8_1 = 0
    int32_t ebx_1 = ebx | 1
    int32_t* eax_5 = *result_1
    char* const ecx = &data_801800
    int32_t var_18_1 = ebx_1
    
    if (eax_5 != 0)
        ecx = eax_5
    
    int32_t* ecx_1 = data_147ded0
    
    if (ecx_1 != 0 && ecx_1[1] == 0x19)
        eax_5 = sub_5af880(ecx_1)
        int32_t* ebx_2 = eax_5
        
        if (ebx_2 != 0)
            int32_t esi = 0
            
            if (ebx_2[2] s<= 0)
            label_6f2d6b:
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            int32_t edi_1 = 0
            
            while (true)
                eax_5 = sub_6dd140(eax_5, *ebx_2 + edi_1, &data_8cc5f8, 1)
                
                if (eax_5 != 0)
                    char* const ecx_2 = ecx
                    
                    while (true)
                        char edx_3 = *eax_5
                        char temp0_1 = *ecx_2
                        bool c_1 = edx_3 u< temp0_1
                        
                        if (edx_3 == temp0_1)
                            if (edx_3 == 0)
                                eax_5 = nullptr
                                break
                            
                            edx_3 = *(eax_5 + 1)
                            char temp1_1 = ecx_2[1]
                            c_1 = edx_3 u< temp1_1
                            
                            if (edx_3 == temp1_1)
                                eax_5 += 2
                                ecx_2 = &ecx_2[2]
                                
                                if (edx_3 != 0)
                                    continue
                                
                                eax_5 = nullptr
                                break
                        
                        eax_5 = sbb.d(eax_5, eax_5, c_1) | 1
                        break
                    
                    if (eax_5 == 0)
                        int32_t var_8_2 = 0xffffffff
                        ebx = ebx_1
                        
                        if ((ebx.b & 1) != 0)
                            ebx &= 0xfffffffe
                            int32_t var_8_3 = 2
                            
                            if (data_cf65bc != 0)
                                char* eax_8 = *result
                                
                                if (eax_8 != 0 && *eax_8 != 0)
                                    char* eax_9 = sub_63d4e0(result)
                                    int32_t temp2_1 = *(eax_9 + 4)
                                    *(eax_9 + 4) -= 1
                                    
                                    if (temp2_1 == 1)
                                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                                        *result = &data_801800
                            
                            int32_t var_8_4 = 0xffffffff
                        
                        eax_3 += 1
                        result_1 = result
                        edx = var_28
                        
                        if (eax_3 s< 0xf4240)
                            break
                        
                        sub_63b870(eax_3, &data_801800, "Halt", 
                            "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0xb02, 
                            "EmitterGetUniqueName")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                
                esi += 1
                edi_1 += 0x168
                
                if (esi s>= ebx_2[2])
                    goto label_6f2d6b
            
            continue
    
    sub_63b870(eax_5, &data_801800, "pParticleDef", "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 
        0xad7, "EmitterIsNameUsed")
    eax_10 = sub_63bc30()
    break

if (eax_10 != 0)
    breakpoint

sub_63bb00()
noreturn
