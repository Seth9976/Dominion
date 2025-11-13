// 函数: sub_5e17a0
// 地址: 0x5e17a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769f60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ca8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_5cba00(*(arg1 + 0x1c))
void* result = sub_5cb070()

if (result != 0 && *(result + 0x10) != 0x17)
    goto label_5e1bfe

char const* const var_cb4
int32_t var_cb0_1
char const* const var_cac_1
char* ecx_1

if (*(eax_3 + 0x2c) == 5)
    char* esi_1 = *(arg1 + 4)
    void* result_1
    sub_63d720(&result_1, "btn_item")
    result = result_1
    char* const result_2 = &data_801800
    
    if (result != 0)
        result_2 = result
    
    int32_t edx_1
    int32_t esi_3
    
    while (true)
        edx_1.b = *result_2
        char temp0_1 = *esi_1
        bool c_1 = edx_1.b u< temp0_1
        
        if (edx_1.b == temp0_1)
            if (edx_1.b == 0)
                esi_3 = 0
                break
            
            edx_1.b = result_2[1]
            char temp1_1 = esi_1[1]
            c_1 = edx_1.b u< temp1_1
            
            if (edx_1.b == temp1_1)
                result_2 = &result_2[2]
                esi_1 = &esi_1[2]
                
                if (edx_1.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result, edx_1 = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi_3 != 0)
        goto label_5e196f
    
    if (*(arg1 + 0x18) != 1)
        void* ecx_7 = data_cc8d5c
        
        if (ecx_7 == 0)
        label_5e1c1c:
            var_cac_1 = "GetClient"
            var_cb0_1 = 0x7b
            var_cb4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx_1 = "gClient"
        else
            if (*(ecx_7 + 0xc) != *(ecx_7 + 0x10))
                sub_63b7f0("failed to submit ability click, waiting")
            label_5e1bfe:
                result.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            data_b80b68 = *(eax_3 + 0x1f4)
            data_b80b64 = 1
            sub_5ee590(*(ecx_7 + 0x7590), &data_b80af8)
        label_5e196f:
            char* esi_4 = *(arg1 + 4)
            sub_63d720(&result_1, "btn_card")
            result = result_1
            char* const result_3 = &data_801800
            
            if (result != 0)
                result_3 = result
            
            int32_t esi_6
            
            while (true)
                char edx_5 = *result_3
                char temp3_1 = *esi_4
                bool c_2 = edx_5 u< temp3_1
                
                if (edx_5 == temp3_1)
                    if (edx_5 == 0)
                        esi_6 = 0
                        break
                    
                    edx_5 = result_3[1]
                    char temp4_1 = esi_4[1]
                    c_2 = edx_5 u< temp4_1
                    
                    if (edx_5 == temp4_1)
                        result_3 = &result_3[2]
                        esi_4 = &esi_4[2]
                        
                        if (edx_5 != 0)
                            continue
                        
                        esi_6 = 0
                        break
                
                esi_6 = sbb.d(esi_4, esi_4, c_2) | 1
                break
            
            int32_t var_8_3 = 1
            
            if (data_cf65bc != 0 && result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp5_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp5_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_1 = &data_801800
            
            int32_t var_8_4 = 0xffffffff
            
            if (esi_6 != 0)
                goto label_5e1a53
            
            if (*(eax_3 + 0x2c) == 5)
                int32_t ecx_12 = *(eax_3 + 0x218)
                
                if (ecx_12 != 0)
                    sub_5d0ab0(sub_5cba00(ecx_12), 0)
                label_5e1a53:
                    char* esi_7 = *(arg1 + 4)
                    sub_63d720(&result_1, "btn_all")
                    result = result_1
                    void* result_4 = &data_801800
                    
                    if (result != 0)
                        result_4 = result
                    
                    int32_t esi_9
                    
                    while (true)
                        char edx_9 = *result_4
                        char temp6_1 = *esi_7
                        bool c_3 = edx_9 u< temp6_1
                        
                        if (edx_9 == temp6_1)
                            if (edx_9 == 0)
                                esi_9 = 0
                                break
                            
                            edx_9 = *(result_4 + 1)
                            char temp7_1 = esi_7[1]
                            c_3 = edx_9 u< temp7_1
                            
                            if (edx_9 == temp7_1)
                                result_4 += 2
                                esi_7 = &esi_7[2]
                                
                                if (edx_9 != 0)
                                    continue
                                
                                esi_9 = 0
                                break
                        
                        esi_9 = sbb.d(esi_7, esi_7, c_3) | 1
                        break
                    
                    int32_t var_8_5 = 2
                    
                    if (data_cf65bc != 0 && result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp8_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp8_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                            result_1 = &data_801800
                    
                    int32_t var_8_6 = 0xffffffff
                    
                    if (esi_9 != 0)
                        goto label_5e1bfe
                    
                    void* edi_1 = data_cc8d5c
                    
                    if (edi_1 == 0)
                        goto label_5e1c1c
                    
                    result = *(edi_1 + 0xc)
                    
                    if (result != *(edi_1 + 0x10))
                        sub_63b7f0("failed to submit ability all click, waiting")
                        goto label_5e1bfe
                    
                    if (*(eax_3 + 0x21c) s<= 1)
                        var_cac_1 = "AbilityClick"
                        var_cb0_1 = 0x43d0
                        var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx_1 = "gfx.ability.count > 1"
                    else if (*(eax_3 + 0x214) != 0)
                        int32_t i = *(eax_3 + 0x1c28)
                        int32_t esi_10 = 0
                        int32_t var_c94[0x320]
                        
                        if (i != 0)
                            do
                                result = sub_5cba00(i)
                                
                                if (*(result + 0x2c) != 5)
                                    var_cac_1 = "AbilityClick"
                                    var_cb0_1 = 0x43da
                                    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                    ecx_1 = "gfxCur.type == DOMGFX_ABILITY"
                                    goto label_5e1c32
                                
                                i = *(result + 0x214)
                                var_c94[esi_10] = *(result + 0x1f4)
                                esi_10 += 1
                            while (i != 0)
                            
                            edi_1 = data_cc8d5c
                        
                        result = *(eax_3 + 0x21c)
                        
                        if (esi_10 == result)
                            memcpy(&data_b80b68, &var_c94, result << 2)
                            result = *(eax_3 + 0x21c)
                            data_b80b64 = result
                            
                            if (edi_1 == 0)
                                goto label_5e1c1c
                            
                            sub_5ee590(*(edi_1 + 0x7590), &data_b80af8)
                            goto label_5e1bfe
                        
                        var_cac_1 = "AbilityClick"
                        var_cb0_1 = 0x43e0
                        var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx_1 = "numIds == gfx.ability.count"
                    else
                        var_cac_1 = "AbilityClick"
                        var_cb0_1 = 0x43d1
                        var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx_1 = "gfx.ability.stackNext != DOMGFX_NULL"
                else
                    var_cac_1 = "AbilityAssociatedCard"
                    var_cb0_1 = 0x438c
                    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_1 = "gfx.ability.assocCardHead != DOMGFX_NULL"
            else
                var_cac_1 = "AbilityAssociatedCard"
                var_cb0_1 = 0x438b
                var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_1 = "gfx.type == DOMGFX_ABILITY"
    else
        result = *(eax_3 + 0x1f8)
        uint32_t ecx_5
        
        if (result != 2)
            if (result == 3)
                uint32_t eax_4 = sub_5916d0(result, edx_1, 0xb80ad8, *(eax_3 + 0x1fc))
                
                if (eax_4 == 0)
                    goto label_5e196f
                
                ecx_5 = eax_4
                goto label_5e18bc
            
            var_cac_1 = "AbilityClick"
            var_cb0_1 = 0x43ae
            var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_1 = "Halt"
        else
            ecx_5 = *(eax_3 + 0x1fc)
        label_5e18bc:
            result = sub_5de8b0(ecx_5)
            
            if (result != 0)
                sub_5d0ab0(result, 0)
                goto label_5e196f
            
            var_cac_1 = "LookupCard"
            var_cb0_1 = 0x3d96
            var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_1 = &data_871964
else
    var_cac_1 = "AbilityClick"
    var_cb0_1 = 0x4398
    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_1 = "gfx.type == DOMGFX_ABILITY"

label_5e1c32:
sub_63b870(result, &data_801800, ecx_1, var_cb4, var_cb0_1, var_cac_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
