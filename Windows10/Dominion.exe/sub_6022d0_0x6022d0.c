// 函数: sub_6022d0
// 地址: 0x6022d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a7f7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x25a4)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_25a8 = edx
int32_t* var_25ac = arg1
uint32_t result = data_b604e0

if (result == 0xffffffff)
    result = 0

if (ecx == result)
labelid_2:
    result.b = 0
else
    result = data_cc8d5c
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx == *(result + 0x7590) || data_b824dc != 0)
    label_6026e6:
        result.b = 0
    else
        int32_t* eax_5 = sub_4b9480()
        int32_t edx_1 = 0
        int32_t esi_1 = eax_5[0x46a]
        
        if (esi_1 s> 0)
            void* ecx_1 = &eax_5[0x1a]
            
            do
                result = *ecx_1
                
                if (result == 0x3e9)
                    goto label_6026e6_2
                
                if (result == 0x3ec)
                    goto label_6026e6_2
                
                if (result == 0x3ed)
                    goto label_6026e6_2
                
                edx_1 += 1
                ecx_1 += 0x22c
            while (edx_1 s< esi_1)
        
        result = sub_5cc5e0(ecx)
        
        if (*(result + 0x30) == 0)
        label_6026e6_1:
            result.b = 0
        else
            int32_t edx_2 = *(result + 0x1934)
            int32_t* esi_2 = nullptr
            int32_t edi_1 = 0
            int32_t* var_2598 = nullptr
            int32_t ebx_1 = 0
            int32_t var_25a4_1 = 0
            int32_t* var_25a0 = nullptr
            int32_t var_2594[0x320]
            int32_t var_1914[0x320]
            int32_t var_c94[0x316]
            
            if (edx_2 s> 0)
                void* esi_3 = result + 0x34
                
                do
                    uint32_t edi_2 = zx.d((*(esi_3 + 4)).w)
                    
                    if (edi_2 u>= 0x320)
                        sub_591930()
                        edx_2 = *(result + 0x1934)
                    
                    int32_t ecx_3 = *esi_3
                    int32_t eax_9 = *(edi_2 * 0x64 + &data_b82524)
                    
                    if (ecx_3 == 1)
                        int32_t* ecx_4 = var_2598
                        var_c94[ecx_4] = eax_9
                        var_2598 = ecx_4 + 1
                        edi_1 = var_25a4_1
                    else if (ecx_3 != 2)
                        if (ecx_3 == 0)
                            int32_t* ecx_6 = var_25a0
                            var_2594[ecx_6] = eax_9
                            var_25a0 = ecx_6 + 1
                        
                        edi_1 = var_25a4_1
                    else
                        var_1914[var_25a4_1] = eax_9
                        edi_1 = var_25a4_1 + 1
                        var_25a4_1 = edi_1
                    
                    ebx_1 += 1
                    esi_3 += 8
                while (ebx_1 s< edx_2)
                
                esi_2 = var_2598
            
            uint32_t eax_10
            char ecx_8
            eax_10, ecx_8 = sub_4c89a0()
            char ecx_11
            
            if (esi_2 != 0)
                int32_t var_24_2 = 1
                char** eax_11 = sub_59d790(esi_2, 1, &var_c94, esi_2, 1, 1, ecx_8)
                int32_t var_8_3 = 2
                ecx_11 = sub_63d850(var_25a8, eax_11)
                int32_t var_8_4 = 3
            else
                sub_4d47c0(&var_2598, "dom_ui_opponent_nothing")
                int32_t* var_8_1 = esi_2
                ecx_11 = sub_63d850(var_25a8, &var_2598)
                int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                char* eax_12 = var_2598
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&var_2598)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    ecx_11 = (*(eax_13 + 4)).b
                    
                    if (temp0_1 == 1)
                        ecx_11 = sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            int32_t var_8_5 = 0xffffffff
            char ecx_17
            int32_t** ecx_18
            
            if (edi_1 != 0)
                int32_t var_24_5 = 1
                char** eax_15 = sub_59d790(esi_2, 1, &var_1914, edi_1, 1, 1, ecx_11)
                int32_t var_8_8 = 6
                ecx_17 = sub_63d850(var_25ac, eax_15)
                int32_t var_8_9 = 7
                
                if (data_cf65bc != 0)
                    int32_t* eax_16 = var_25a8
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        ecx_18 = &var_25a8
                    label_6025dc:
                        char* eax_17 = sub_63d4e0(ecx_18)
                        int32_t temp1_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        ecx_17 = (*(eax_17 + 4)).b
                        
                        if (temp1_1 == 1)
                            ecx_17 = sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            else
                sub_4d47c0(&var_2598, "dom_ui_opponent_nothing")
                int32_t var_8_6 = 4
                ecx_17 = sub_63d850(var_25ac, &var_2598)
                int32_t var_8_7 = 5
                
                if (data_cf65bc != edi_1)
                    char* eax_14 = var_2598
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        ecx_18 = &var_2598
                        goto label_6025dc
            int32_t var_8_10 = 0xffffffff
            int32_t* eax_18 = var_25a0
            int32_t** ecx_23
            
            if (eax_18 != 0)
                int32_t var_24_8 = 1
                int32_t var_8_13 = 0xa
                sub_63d850(arg2, sub_59d790(esi_2, 1, &var_2594, eax_18, 1, 1, ecx_17))
                int32_t var_8_14 = 0xb
                
                if (data_cf65bc != 0)
                    int32_t* eax_21 = var_25ac
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        ecx_23 = &var_25ac
                    label_6026b9:
                        char* eax_22 = sub_63d4e0(ecx_23)
                        int32_t temp2_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
            else
                sub_4d47c0(&var_25a0, "dom_ui_opponent_nothing")
                int32_t var_8_11 = 8
                sub_63d850(arg2, &var_25a0)
                int32_t var_8_12 = 9
                
                if (data_cf65bc != 0)
                    char* eax_19 = var_25a0
                    
                    if (eax_19 != 0 && *eax_19 != 0)
                        ecx_23 = &var_25a0
                        goto label_6026b9
            
            if (data_b809cc == ecx)
            label_6026e6_2:
                result.b = 0
            else
                result.b = esi_2 != 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
