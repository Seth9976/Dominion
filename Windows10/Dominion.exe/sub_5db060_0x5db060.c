// 函数: sub_5db060
// 地址: 0x5db060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769c20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_5cba00(*(arg1 + 0x1c))
uint32_t result_3 = result
int32_t ecx_1 = *(result_3 + 0x2c)
char const* const var_d54
int32_t var_d50_1
char const* const var_d4c_1
char* ecx_2
char* result_1

if (ecx_1 == 4 || ecx_1 == 6 || ecx_1 == 2 || ecx_1 == 8)
label_5db202:
    int32_t esi_6
    
    if (*(result_3 + 0x2c) == 8)
        char* esi_4 = *(arg1 + 4)
        sub_63d720(&result_1, "btn_icon")
        char* result_5 = result_1
        char* result_7 = &data_801800
        
        if (result_5 != 0)
            result_7 = result_5
        
        while (true)
            char edx_4 = *result_7
            char temp0_1 = *esi_4
            bool c_2 = edx_4 u< temp0_1
            
            if (edx_4 == temp0_1)
                if (edx_4 == 0)
                    esi_6 = 0
                    break
                
                edx_4 = result_7[1]
                char temp2_1 = esi_4[1]
                c_2 = edx_4 u< temp2_1
                
                if (edx_4 == temp2_1)
                    result_7 = &result_7[2]
                    esi_4 = &esi_4[2]
                    
                    if (edx_4 != 0)
                        continue
                    
                    esi_6 = 0
                    break
            
            esi_6 = sbb.d(esi_4, esi_4, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
            char* eax_4 = sub_63d4e0(&result_1)
            int32_t temp5_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_8_4 = 0xffffffff
    
    if (*(result_3 + 0x2c) == 8 && esi_6 == 0)
        int32_t ecx_10 = *(result_3 + 0x240)
        uint32_t eax_5 = sub_5cba00(ecx_10)
        int32_t var_d4c_2 = 1
        sub_617bb0(eax_5, &data_7ffb14, eax_5, 1, ecx_10)
        result.b = 1
        goto label_5db3df
    
    result = *(arg1 + 0x18)
    
    if (result != 1 && result != 0)
        goto label_5db3da
    
    char* esi_7 = *(arg1 + 4)
    sub_63d720(&result_1, "btn_taptip")
    result = result_1
    uint32_t result_2 = &data_801800
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_9
    
    while (true)
        char edx_7 = *result_2
        char temp1_1 = *esi_7
        bool c_3 = edx_7 u< temp1_1
        
        if (edx_7 == temp1_1)
            if (edx_7 == 0)
                esi_9 = 0
                break
            
            edx_7 = *(result_2 + 1)
            char temp3_1 = esi_7[1]
            c_3 = edx_7 u< temp3_1
            
            if (edx_7 == temp3_1)
                result_2 += 2
                esi_7 = &esi_7[2]
                
                if (edx_7 != 0)
                    continue
                
                esi_9 = 0
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp7_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_9 != 0)
        goto label_5db3da
    
    result = sub_5dafe0()
    
    if (result.b == 0)
        goto label_5db3da
    
    void* ecx_15 = data_cc8d5c
    
    if (ecx_15 != 0)
        if (*(ecx_15 + 0xc) != *(ecx_15 + 0x10))
            sub_63b7f0("failed to submit coffers click, waiting")
        label_5db3da:
            result.b = 0
        label_5db3df:
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        void var_d30
        result = sub_5939a0(&var_d30, &data_b80af8)
        void* ecx_17 = data_cc8d5c
        int32_t var_d2c_1 = 9
        int32_t var_cc4_1 = 1
        
        if (ecx_17 != 0)
            sub_5ee590(*(ecx_17 + 0x7590), &var_d30)
            goto label_5db3da
    
    var_d4c_1 = "GetClient"
    var_d50_1 = 0x7b
    ecx_2 = "gClient"
    var_d54 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
else if (ecx_1 == 7)
    char* esi_1 = *(arg1 + 4)
    sub_63d720(&result_1, "btn_icon")
    char* result_4 = result_1
    char* const result_6 = &data_801800
    
    if (result_4 != 0)
        result_6 = result_4
    
    int32_t esi_3
    
    while (true)
        char edx_1 = *result_6
        char temp4_1 = *esi_1
        bool c_1 = edx_1 u< temp4_1
        
        if (edx_1 == temp4_1)
            if (edx_1 == 0)
                esi_3 = 0
                break
            
            edx_1 = result_6[1]
            char temp6_1 = esi_1[1]
            c_1 = edx_1 u< temp6_1
            
            if (edx_1 == temp6_1)
                result_6 = &result_6[2]
                esi_1 = &esi_1[2]
                
                if (edx_1 != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_3 = sub_63d4e0(&result_1)
        int32_t temp8_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi_3 != 0)
        goto label_5db202
    
    result = *(result_3 + 0x220)
    
    if (result == 0)
        result.b = 1
        goto label_5db3df
    
    if (result == 3)
        if (*(result_3 + 0x224) == 0)
            sub_5e9a30(*(result_3 + 0x228))
            result = data_b604cc
            
            if (result == 1)
                data_b604cc = 2
                result.b = result.b
                goto label_5db3df
            
            if (result == 3)
                data_b604cc = 0
            
            result.b = 1
            goto label_5db3df
        
        var_d4c_1 = "TokenClick"
        var_d50_1 = 0x35c8
        var_d54 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "gfx.arrow.source.type == DOMARROWSOURCE_PLAYER"
    else
        var_d4c_1 = "TokenClick"
        var_d50_1 = 0x35d2
        var_d54 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "Halt"
else
    var_d4c_1 = "TokenClick"
    var_d50_1 = 0x35b7
    var_d54 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "gfx.type == DOMGFX_TOKEN || gfx.type == DOMGFX_TOKEN_ICON || gfx.type == "
    "DOMGFX_ICON_PLACEHOLDER || gfx.type == DOMGFX_HINT || gfx.type == DOMGF"
sub_63b870(result, &data_801800, ecx_2, var_d54, var_d50_1, var_d4c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
