// 函数: sub_603430
// 地址: 0x603430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@_WV?$c_string_character_source@_W@__crt_strtox@@PB_W@__crt_strtox@@YA?AW4floating_point_parse_result@0@AA_WAAV?$c_string_character_source@_W@0@PB_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg3
char** result_1 = result
char* arg_8
char* eax_3 = arg_8

if (eax_3 != 0)
    int32_t var_30_1 = arg9
    int32_t var_34 = arg8
    sub_604210(eax_3, arg2, arg3, eax_3, arg3, arg6, arg7)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

char const* const edx

switch (arg4)
    case 1
        edx = "Choose Cards <Prompt NYI>"
    label_6034a6:
        sub_63d720(arg3, edx)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    case 2
        edx = "Choose order <Prompt NYI>."
        goto label_6034a6
    case 3
        edx = "Choose Where <Prompt NYI>"
        goto label_6034a6
    case 4
        int32_t eax_7 = data_b80b58
        char* var_14
        
        if (eax_7 == arg6)
            char** ecx_20 = &var_14
            
            if (arg6 == 1)
                sub_4d47c0(ecx_20, "dom_ui_one")
                int32_t var_8_7 = 0xc
                char* edx_14 = var_14
                
                if (edx_14 == 0)
                    edx_14 = &data_801800
                
                sub_63d720(&arg_8, edx_14)
                var_8_7.b = 0xd
                sub_4d48c0(&arg_8, "dom_prompt_choose_btn", result, 0x801c54, &arg_8)
                var_8_7.b = 0xe
                
                if (data_cf65bc != 0)
                    char* eax_25 = arg_8
                    
                    if (eax_25 != 0 && *eax_25 != 0)
                        char* eax_26 = sub_63d4e0(&arg_8)
                        int32_t temp1_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                
                int32_t var_8_8 = 0xf
            else if (arg5 != 0)
                int32_t var_8_11 = 0x14
                char* eax_34 = *sub_5ca8d0(ecx_20, arg6 - arg5)
                char* edx_21 = &data_801800
                
                if (eax_34 != 0)
                    edx_21 = eax_34
                
                sub_63d720(&arg_8, edx_21)
                var_8_11.b = 0x15
                sub_4d48c0(&arg_8, "dom_prompt_choose_more_btn", result, 0x801c54, &arg_8)
                var_8_11.b = 0x16
                
                if (data_cf65bc != 0)
                    char* eax_36 = arg_8
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_63d4e0(&arg_8)
                        int32_t temp3_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                
                int32_t var_8_12 = 0x17
            else
                int32_t var_8_9 = 0x10
                char* eax_29 = *sub_5ca8d0(ecx_20, arg6)
                char* edx_17 = &data_801800
                
                if (eax_29 != 0)
                    edx_17 = eax_29
                
                sub_63d720(&arg_8, edx_17)
                var_8_9.b = 0x11
                sub_4d48c0(&arg_8, "dom_prompt_choose_btn", result, 0x801c54, &arg_8)
                var_8_9.b = 0x12
                
                if (data_cf65bc != 0)
                    char* eax_31 = arg_8
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        char* eax_32 = sub_63d4e0(&arg_8)
                        int32_t temp4_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                
                int32_t var_8_10 = 0x13
        else if (arg5 == 0)
            int32_t var_8_1 = 0
            char* eax_9 = *sub_5ca8d0(&var_14, eax_7)
            char* edx_3 = &data_801800
            
            if (eax_9 != 0)
                edx_3 = eax_9
            
            sub_63d720(&arg_8, edx_3)
            var_8_1.b = 1
            sub_4d48c0(&arg_8, "dom_prompt_choose_at_least_btn", result, 0x801c54, &arg_8)
            var_8_1.b = 2
            
            if (data_cf65bc != 0)
                char* eax_11 = arg_8
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_63d4e0(&arg_8)
                    int32_t temp2_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            
            int32_t var_8_2 = 3
        else if (arg5 s>= eax_7)
            int32_t var_8_5 = 8
            char* eax_20 = *sub_5ca8d0(&var_14, arg6 - arg5)
            char* edx_11 = &data_801800
            
            if (eax_20 != 0)
                edx_11 = eax_20
            
            sub_63d720(&arg_8, edx_11)
            var_8_5.b = 9
            sub_4d48c0(&arg_8, "dom_prompt_choose_up_to_more_btn", result, 0x801c54, &arg_8)
            var_8_5.b = 0xa
            
            if (data_cf65bc != 0)
                char* eax_22 = arg_8
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_63d4e0(&arg_8)
                    int32_t temp5_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0xb
        else
            int32_t var_8_3 = 4
            char* eax_15 = *sub_5ca8d0(&var_14, eax_7 - arg5)
            char* edx_7 = &data_801800
            
            if (eax_15 != 0)
                edx_7 = eax_15
            
            sub_63d720(&arg_8, edx_7)
            var_8_3.b = 5
            sub_4d48c0(&arg_8, "dom_prompt_choose_at_least_more_btn", result, 0x801c54, &arg_8)
            var_8_3.b = 6
            
            if (data_cf65bc != 0)
                char* eax_17 = arg_8
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_63d4e0(&arg_8)
                    int32_t temp6_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
            
            int32_t var_8_4 = 7
        
        if (data_cf65bc != 0)
            char* eax_38 = var_14
            
            if (eax_38 != 0 && *eax_38 != 0)
                char* eax_39 = sub_63d4e0(&var_14)
                int32_t temp7_1 = *(eax_39 + 4)
                *(eax_39 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    case 5
        edx = "Choose number <Prompt NYI>."
        goto label_6034a6
    case 6
        sub_4d47c0(arg3, "dom_prompt_ability")
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    case 7
        sub_4d47c0(arg3, "dom_prompt_wishing_well_name")
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    case 8
        uint32_t eax_42 = sub_4c89a0()
        int32_t eax_43 = sub_4dad50()
        void* edi_1
        
        if (eax_43 == 1)
            char const* const var_30_8 = "dom_prompt_choose_pile"
            sub_63df30(&arg_8, "%s_drag")
            int32_t var_8_13 = 0x18
            char* ecx_39 = &data_801800
            char* eax_44 = arg_8
            
            if (eax_44 != 0)
                ecx_39 = eax_44
            
            edi_1 = sub_68c730(ecx_39, eax_42, result)
            int32_t var_8_14 = 0x19
            
            if (data_cf65bc != 0)
                char* ecx_40 = arg_8
                
                if (ecx_40 != 0 && *ecx_40 != 0)
                    char* eax_46 = sub_63d4e0(&arg_8)
                    int32_t temp0_1 = *(eax_46 + 4)
                    *(eax_46 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                        arg_8 = &data_801800
            
            int32_t var_8_15 = 0xffffffff
        
        if (eax_43 != 1 || edi_1 == 0)
            edi_1 = sub_68c730("dom_prompt_choose_pile", eax_42, result)
            
            if (edi_1 == 0)
                edx = "dom_prompt_choose_pile"
                arg3 = result
                goto label_6034a6
        
        char* eax_48 = *edi_1
        *result = eax_48
        
        if (eax_48 == 0 || *eax_48 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        char* eax_49 = sub_63d4e0(result)
        *(eax_49 + 4) += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

sub_63b870(arg4, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x9671, 
    "GetChoicePrompt")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
