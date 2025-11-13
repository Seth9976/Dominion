// 函数: sub_4e5ac0
// 地址: 0x4e5ac0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Initialize@ScheduleGroupSegmentBase@details@Concurrency@@IAEXPAVScheduleGroupBase@23@PAVSchedulingRing@23@PAVlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18
int32_t* ecx_2

if (*arg3 == 0)
    int32_t var_3c = *(sub_4e3950(arg3[1]) + 0x10)
    int32_t var_40 = arg3[2]
    int32_t var_8_1 = 0
    sub_63d850(arg2, sub_63df30(&var_18, "-c expansion:%d, %s"))
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_5 = var_18
        
        if (eax_5 != 0 && *eax_5 != 0)
            ecx_2 = &var_18
        label_4e5b4a:
            char* eax_6 = sub_63d4e0(ecx_2)
            int32_t temp1_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
else
    char* var_20
    
    if (arg3[0x1406] == 0)
        int32_t var_8_5 = 8
        char* ebx_2 = &data_801800
        char* eax_20 = *sub_519d00(&var_20, &arg3[0x1404])
        int32_t ecx_14 = arg3[0x1403]
        
        if (eax_20 != 0)
            ebx_2 = eax_20
        
        char const* const eax_21
        
        if (ecx_14 != 0)
            eax_21 = *(sub_516f30(ecx_14) + 4)
        else
            eax_21 = "none"
        
        char* var_3c_4 = ebx_2
        char const* const var_40_2 = eax_21
        int32_t var_44_2 = arg3[2]
        var_8_5.b = 9
        char* var_1c
        sub_63d850(arg2, sub_63df30(&var_1c, "-c general:%d, %s, %s"))
        var_8_5.b = 0xa
        
        if (data_cf65bc != 0)
            char* eax_24 = var_1c
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_25 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        int32_t var_8_6 = 0xb
        
        if (data_cf65bc != 0)
            char* eax_26 = var_20
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_63d4e0(&var_20)
                int32_t temp3_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_20 = &data_801800
    else
        int32_t var_8_3 = 2
        char* var_24
        char* eax_8 = *sub_519d00(&var_24, &arg3[0x1406])
        char* ebx_1 = &data_801800
        char* ecx_5 = &data_801800
        
        if (eax_8 != 0)
            ecx_5 = eax_8
        
        var_20 = ecx_5
        var_8_3.b = 3
        char* eax_10 = *sub_519d00(&var_18, &arg3[0x1404])
        int32_t ecx_7 = arg3[0x1403]
        
        if (eax_10 != 0)
            ebx_1 = eax_10
        
        char const* const eax_11
        
        if (ecx_7 != 0)
            eax_11 = *(sub_516f30(ecx_7) + 4)
        else
            eax_11 = "none"
        
        char* var_3c_2 = var_20
        char* var_40_1 = ebx_1
        char const* const var_44_1 = eax_11
        int32_t var_48_2 = arg3[2]
        var_8_3.b = 4
        char* const var_14
        sub_63d850(arg2, sub_63df30(&var_14, "-c general:%d, %s, %s, %s"))
        var_8_3.b = 5
        
        if (data_cf65bc != 0)
            char* eax_14 = var_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        var_8_3.b = 6
        
        if (data_cf65bc != 0)
            char* eax_16 = var_18
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&var_18)
                int32_t temp5_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        int32_t var_8_4 = 7
        
        if (data_cf65bc != 0)
            char* eax_18 = var_24
            
            if (eax_18 != 0 && *eax_18 != 0)
                ecx_2 = &var_24
                goto label_4e5b4a
int32_t* esi_1 = arg4
void* edi_1 = &arg3[3]
int32_t var_8_7 = 0xffffffff
int32_t i_1 = 0xa
int32_t* result
int32_t i

do
    result = sub_4e5920(edi_1, esi_1)
    esi_1 = &esi_1[1]
    edi_1 += 0x800
    i = i_1
    i_1 -= 1
while (i != 1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
