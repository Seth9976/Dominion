// 函数: sub_4b3130
// 地址: 0x4b3130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AAVios_base@2@AAHAAPAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg1
char* var_3c = esi
int32_t var_20
int32_t* edi = &var_20
int32_t var_30 = 0
var_20 = 3
int32_t ecx = 3
int32_t var_1c = 0
int32_t var_18 = 2
int32_t* var_34 = &var_20
uint32_t result

while (true)
    void* var_38
    int32_t eax_3 = sub_571bc0(ecx, &var_38)
    int32_t ebx_1 = 0
    int32_t var_2c_1 = 0
    
    if (eax_3 s> 0)
        int32_t ecx_1 = arg2
        void** edi_2 = var_38 + 0x14
        
        while (true)
            int32_t* edx
            
            if (ecx_1 != 1)
                void* eax_8
                int32_t eax_10
                bool c_1
                
                if (ecx_1 == 3)
                    eax_8 = *edi_2
                    
                    if (eax_8 == 0)
                        goto label_4b32ea
                    
                    char* ecx_4 = esi
                    
                    do
                        edx.b = *eax_8
                        char temp4_1 = *ecx_4
                        c_1 = edx.b u< temp4_1
                        
                        if (edx.b != temp4_1)
                            goto label_4b31f9
                        
                        if (edx.b == 0)
                            goto label_4b31f3
                        
                        edx.b = *(eax_8 + 1)
                        char temp7_1 = ecx_4[1]
                        c_1 = edx.b u< temp7_1
                        
                        if (edx.b != temp7_1)
                            goto label_4b31f9
                        
                        eax_8 += 2
                        ecx_4 = &ecx_4[2]
                    while (edx.b != 0)
                    
                    eax_10 = 0
                label_4b31fc:
                    
                    if (eax_10 != 0)
                        goto label_4b32e7
                    
                    result = *(var_38 + ebx_1 * 0x44)
                    goto label_4b3316
                
                if (ecx_1 != 4)
                    int32_t var_58_2 = ecx_1
                    char* var_5c = esi
                    sub_63b870(sub_63b7f0("unknown source %s %d"), &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x904, "SkuGetDLC")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                eax_8 = edi_2[-1]
                
                if (eax_8 == 0)
                    goto label_4b32ea
                
                char* ecx_2 = esi
                
                while (true)
                    edx.b = *eax_8
                    char temp5_1 = *ecx_2
                    c_1 = edx.b u< temp5_1
                    
                    if (edx.b == temp5_1)
                        if (edx.b == 0)
                        label_4b31f3:
                            eax_10 = 0
                            break
                        
                        edx.b = *(eax_8 + 1)
                        char temp8_1 = ecx_2[1]
                        c_1 = edx.b u< temp8_1
                        
                        if (edx.b == temp8_1)
                            eax_8 += 2
                            ecx_2 = &ecx_2[2]
                            
                            if (edx.b != 0)
                                continue
                            
                            goto label_4b31f3
                    
                label_4b31f9:
                    eax_10 = sbb.d(eax_8, eax_8, c_1) | 1
                    break
                
                goto label_4b31fc
            
            int32_t eax_14 = edi_2[-3]
            
            if (eax_14 == 0)
                goto label_4b32ea
            
            int32_t var_58_1 = eax_14
            char* var_28
            sub_63df30(&var_28, "%d")
            char* eax_15 = var_28
            var_30 |= 1
            char* const ecx_5 = &data_801800
            edx = esi
            
            if (eax_15 != 0)
                ecx_5 = eax_15
            
            int32_t esi_1
            
            while (true)
                ebx_1.b = *ecx_5
                char temp3_1 = *edx
                bool c_2 = ebx_1.b u< temp3_1
                
                if (ebx_1.b == temp3_1)
                    if (ebx_1.b == 0)
                        esi_1 = 0
                        break
                    
                    ebx_1.b = ecx_5[1]
                    char temp6_1 = *(edx + 1)
                    c_2 = ebx_1.b u< temp6_1
                    
                    if (ebx_1.b == temp6_1)
                        ecx_5 = &ecx_5[2]
                        edx += 2
                        
                        if (ebx_1.b != 0)
                            continue
                        
                        esi_1 = 0
                        break
                
                esi_1 = sbb.d(esi, esi, c_2) | 1
                break
            
            int32_t var_8_1 = 0
            
            if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
                int32_t* eax_16 = sub_63d4e0(&var_28)
                int32_t temp9_1 = eax_16[1]
                eax_16[1] -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(eax_16, eax_16[3] + 0x10)
                    var_28 = &data_801800
            
            ebx_1 = var_2c_1
            int32_t var_8_2 = 0xffffffff
            
            if (esi_1 == 0)
                result = *(var_38 + ebx_1 * 0x44)
                goto label_4b3316
            
            esi = var_3c
        label_4b32e7:
            ecx_1 = arg2
        label_4b32ea:
            ebx_1 += 1
            edi_2 = &edi_2[0x11]
            var_2c_1 = ebx_1
            
            if (ebx_1 s>= eax_3)
                edi = var_34
                break
    
    edi = &edi[1]
    var_34 = edi
    
    if (edi == &var_14)
        break
    
    ecx = *edi

result = 0
label_4b3316:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
