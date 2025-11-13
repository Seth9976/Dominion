// 函数: sub_59a910
// 地址: 0x59a910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg1
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 0)
    sub_63b870(&ExceptionList, &data_801800, t", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 
        0x69b, "TranslationGetParticleStyle")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(arg1 + 0x10) == 0)
    char* const eax_4 = &data_801800
    var_14 = &data_801800
    int32_t var_8_1 = 0
    char* ecx = *(arg1 + 8)
    bool cond:0_1
    
    if (ecx != 0 && *ecx != 0)
        cond:0_1 = sub_62e860(&var_14, "particle", ecx, &var_14) == 0
        eax_4 = var_14
    
    if (ecx == 0 || *ecx == 0 || cond:0_1)
        *(arg1 + 0x10) = arg2
    else
        char* const edx = &data_801800
        char* const ecx_1 = &data_801800
        char const* const esi_1 = "linking"
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        int32_t ecx_3
        
        while (true)
            ebx.b = *ecx_1
            char const temp1_1 = *esi_1
            bool c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                if (ebx.b == 0)
                    ecx_3 = 0
                    break
                
                ebx.b = ecx_1[1]
                char temp2_1 = esi_1[1]
                c_1 = ebx.b u< temp2_1
                
                if (ebx.b == temp2_1)
                    ecx_1 = &ecx_1[2]
                    esi_1 = &esi_1[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_3 = 0
                    break
            
            ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
            break
        
        if (ecx_3 == 0)
            *(arg1 + 0x10) = 3
        
        char* const ecx_4 = &data_801800
        char const* const esi_2 = "none"
        
        if (eax_4 != 0)
            ecx_4 = eax_4
        
        int32_t ecx_6
        
        while (true)
            ebx.b = *ecx_4
            char const temp3_1 = *esi_2
            bool c_2 = ebx.b u< temp3_1
            
            if (ebx.b == temp3_1)
                if (ebx.b == 0)
                    ecx_6 = 0
                    break
                
                ebx.b = ecx_4[1]
                char temp4_1 = esi_2[1]
                c_2 = ebx.b u< temp4_1
                
                if (ebx.b == temp4_1)
                    ecx_4 = &ecx_4[2]
                    esi_2 = &esi_2[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_6 = 0
                    break
            
            ecx_6 = sbb.d(ecx_4, ecx_4, c_2) | 1
            break
        
        if (ecx_6 == 0)
            *(arg1 + 0x10) = 1
        
        char const* const ecx_7 = "object"
        
        if (eax_4 != 0)
            edx = eax_4
        
        int32_t ecx_9
        
        while (true)
            ebx.b = *edx
            char const temp5_1 = *ecx_7
            bool c_3 = ebx.b u< temp5_1
            
            if (ebx.b == temp5_1)
                if (ebx.b == 0)
                    ecx_9 = 0
                    break
                
                ebx.b = edx[1]
                char temp6_1 = ecx_7[1]
                c_3 = ebx.b u< temp6_1
                
                if (ebx.b == temp6_1)
                    edx = &edx[2]
                    ecx_7 = &ecx_7[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    ecx_9 = 0
                    break
            
            ecx_9 = sbb.d(ecx_7, ecx_7, c_3) | 1
            break
        
        if (ecx_9 == 0)
            *(arg1 + 0x10) = 2
    
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 0x10)
