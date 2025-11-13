// 函数: ___std_fs_get_file_id@8
// 地址: 0x5cab10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?wait@agent@Concurrency@@SA?AW4agent_status@2@PAV12@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_38 = arg1
int32_t var_1c = 1
uint32_t var_4c[0x5]
int96_t xmm0 = (*sub_576c00(&var_4c, arg2)).12
int32_t eax_4 = xmm0
int32_t esi = xmm0:4.d
char* var_18

if (eax_4 != 0 || (xmm0:8.d == 0 && esi == 0))
    char* eax_15
    
    if (eax_4 u> 0xa)
        int32_t var_5c_2 = eax_4
        sub_63df30(arg1, "%d")
        eax_15 = 0xf
    else
        switch (jump_table_5caef0[eax_4])
            case 0x5cacbe
                sub_63d720(arg1, "{coin_0_prompt}")
                eax_15 = 7
            case 0x5cacd4
                sub_63d720(arg1, "{coin_1_prompt}")
                eax_15 = 7
            case 0x5cacea
                sub_63d720(arg1, "{coin_2_prompt}")
                eax_15 = 7
            case 0x5cad00
                sub_63d720(arg1, "{coin_3_prompt}")
                eax_15 = 7
            case 0x5cad16
                sub_63d720(arg1, "{coin_4_prompt}")
                eax_15 = 7
            case 0x5cad2c
                sub_63d720(arg1, "{coin_5_prompt}")
                eax_15 = 7
            case 0x5cad3f
                sub_63d720(arg1, "{coin_6_prompt}")
                eax_15 = 7
            case 0x5cad52
                sub_63d720(arg1, "{coin_7_prompt}")
                eax_15 = 7
            case 0x5cad65
                sub_63d720(arg1, "{coin_8_prompt}")
                eax_15 = 7
            case 0x5cad78
                sub_63d720(arg1, "{coin_9_prompt}")
                eax_15 = 7
            case 0x5cad8b
                sub_63d720(arg1, "{coin_10_prompt}")
                eax_15 = 7
    
    int32_t var_8_4 = 4
    char* var_1c_2 = eax_15
    
    if (esi == 1)
        char* eax_16 = *arg1
        
        if (eax_16 == 0 || *eax_16 == 0)
            int32_t** eax_18 = sub_64bfd0(0x20)
            eax_18[3] += 1
            
            if (*eax_18 == 0)
                sub_64be70(eax_18)
            
            int32_t* ecx_27 = *eax_18
            char* edx_6 = "{potion_prompt}"
            *eax_18 = *ecx_27
            *ecx_27 = 0xfafafafa
            ecx_27[1] = 1
            ecx_27[2] = 0xf
            ecx_27[3] = 0x10
            char* ecx_28 = &ecx_27[4]
            *arg1 = ecx_28
            
            do
                eax_15.b = *edx_6
                edx_6 = &edx_6[1]
                *ecx_28 = eax_15.b
                ecx_28 = &ecx_28[1]
            while (eax_15.b != 0)
        else
            char* eax_17 = sub_63d4e0(arg1)
            int32_t esi_4 = *(eax_17 + 8)
            sub_63d5e0(eax_17, esi_4 + 0xf, arg1, 1)
            eax_15 = *arg1
            __builtin_strcpy(&eax_15[esi_4], "{potion_prompt}")
    
    int32_t edx_7 = xmm0:8.d
    
    if (edx_7 != 0)
        int32_t var_8_5 = 5
        char* ecx_30 = &data_801800
        char* eax_20 = *sub_5ca9f0(&var_18, edx_7)
        
        if (eax_20 != 0)
            ecx_30 = eax_20
        
        eax_15 = sub_63d960(arg1, ecx_30)
        int32_t var_8_6 = 6
        
        if (data_cf65bc != 0)
            eax_15 = var_18
            
            if (eax_15 != 0 && *eax_15 != 0)
                eax_15 = sub_63d4e0(&var_18)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    eax_15 = sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        var_8_6.b = 4
    
    if (xmm0:4.d s>= 2)
        sub_63b870(eax_15, &data_801800, "parsedCost.potions < 2", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3ce, "PromptCoinFromCostAmount")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    char* const esi_1 = &data_801800
    sub_63d720(arg1, &data_801800)
    int32_t var_8_1 = 0
    int32_t var_1c_1 = 1
    
    if (xmm0:4.d != 1)
        int32_t var_8_2 = 1
        char* eax_12 = *sub_5ca9f0(&var_18, xmm0:8.d)
        
        if (eax_12 != 0)
            esi_1 = eax_12
        
        sub_63d960(arg1, esi_1)
        int32_t var_8_3 = 2
        
        if (data_cf65bc != 0)
            char* eax_13 = var_18
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_63d4e0(&var_18)
                int32_t temp0_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
    else
        char* eax_5 = *arg1
        
        if (eax_5 == 0 || *eax_5 == 0)
            int32_t* eax_9 = sub_64bfd0(0x20)
            eax_9[3] += 1
            
            if (*eax_9 == 0)
                sub_64be70(eax_9)
            
            int32_t* ecx_7 = *eax_9
            char const* const edx_1 = "{potion_prompt}"
            *eax_9 = *ecx_7
            *ecx_7 = 0xfafafafa
            ecx_7[1] = 1
            ecx_7[2] = 0xf
            ecx_7[3] = 0x10
            void* ecx_8 = &ecx_7[4]
            *arg1 = ecx_8
            int32_t eax_10
            
            do
                eax_10.b = *edx_1
                edx_1 = &edx_1[1]
                *ecx_8 = eax_10.b
                ecx_8 += 1
            while (eax_10.b != 0)
        else
            char* eax_6 = sub_63d4e0(arg1)
            int32_t esi_2 = *(eax_6 + 8)
            sub_63d5e0(eax_6, esi_2 + 0xf, arg1, 1)
            __builtin_strcpy(&(*arg1)[esi_2], "{potion_prompt}")
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
