// 函数: sub_5ed100
// 地址: 0x5ed100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@DV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_5eaeb0
int32_t* eax_4 = sub_4b9480()
void* eax_5 = eax_4[0x4c4]
char* result_2
char* result_3

if (eax_5 != 0 && eax_5 != 3)
    int32_t edx_1 = eax_4[0x46a]
    int32_t ecx_1 = 0
    int32_t ebx_1 = eax_4[0x4c7]
    data_cb4510 = eax_5
    
    if (edx_1 s<= 0)
    label_5ed630:
        sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x6196, "GameGetPlayerByID")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_5 = &eax_4[0x18]
    
    while (true)
        if (*(eax_5 - 4) == 1 && *eax_5 == ebx_1)
            sub_4b06c0(eax_5 - 0x18, &eax_4[2], &result_3, eax_5 - 0x18, &result_2)
            int32_t var_8_1 = 0
            char* const result_6 = &data_801800
            char* result_4 = result_3
            
            if (result_4 != 0)
                result_6 = result_4
            
            void* ebx_2 = 0x1a936d8 - result_6
            char i
            
            do
                i = *result_6
                result_6 = &result_6[1]
                *(ebx_2 + result_6 - 1) = i
            while (i != 0)
            int32_t edx_3 = data_1597e30
            int32_t ecx_3
            
            if (edx_3 != 0)
                char const* const var_30_2
                
                if (edx_3 - 1 s< 0 || edx_3 - 1 s>= edx_3)
                    var_30_2 = "XDynArray<struct DomLogEvent>::operator []"
                label_5ed660:
                    sub_63b870(result_4, &data_801800, "index >= 0 && index < mSize", 
                        "C:\x\ax2017\Engine\xDynArray.h", 0xd4, var_30_2)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t ecx_7 = *(((edx_3 - 1) << 6) + data_1597e2c + 0x30)
                
                if (ecx_7 s< 0)
                    ecx_3 = 0xffffffff
                else
                    if (ecx_7 s>= data_1597e3c)
                        var_30_2 = "XDynArray<struct DomLogDecision>::operator []"
                        goto label_5ed660
                    
                    ecx_3 = *((ecx_7 << 4) + data_1597e38 + 4)
            else
                ecx_3 = edx_3 - 1
            
            data_19e3a90 = ecx_3 - eax_4[0x4c6] + 1
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
                char* eax_7 = sub_63d4e0(&result_3)
                int32_t temp3_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                    result_3 = &data_801800
            
            int32_t var_8_3 = 0xffffffff
            break
        
        ecx_1 += 1
        eax_5 += 0x22c
        
        if (ecx_1 s>= edx_1)
            goto label_5ed630

int32_t eax_8 = data_cb4510
int32_t var_34_2
char* result
char** ecx_24

if (eax_8 u> 5)
    char const* const var_30_6 = "UndoDlgUpdate"
    var_34_2 = 0x69db
else
    switch (eax_8)
        case 0, 3
            char const* const var_30_3 = "UndoDlgUpdate"
            var_34_2 = 0x69a9
        case 1
            if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250) == eax_4[0x4c7])
                uint32_t eax_13 = sub_64e7a0(arg1)
                sub_665db0(eax_13, &data_be43c8, eax_13, 0x3f800000, 0xffffffff, 0)
                int32_t var_38_2 = data_19e3a90
                sub_63df30(&result_3, "You requested to undo %d decisions.")
                int32_t var_8_6 = 4
                int32_t var_44_1 = 0xffffffff
                sub_666380(&result_3, &data_be4404, arg1, &result_3)
                int32_t var_8_7 = 5
            else
                uint32_t eax_11 = sub_64e7a0(arg1)
                sub_665db0(eax_11, &data_be43d4, eax_11, 0x3f800000, 0xffffffff, 0)
                int32_t var_38_1 = data_19e3a90
                int32_t var_3c_1 = 0x1a936d8
                sub_63df30(&result_3, "%s has requested to undo %d decisions.")
                int32_t var_8_4 = 2
                int32_t var_48_1 = 0xffffffff
                sub_666380(&result_3, &data_be4404, arg1, &result_3)
                int32_t var_8_5 = 3
            
            if (data_cf65bc != 0)
                char* result_5 = result_3
                
                if (result_5 != 0 && *result_5 != 0)
                    char* eax_15 = sub_63d4e0(&result_3)
                    int32_t temp2_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xffffffff
            result = eax_4[0x46a]
            
            if (result s<= 2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            void* var_30_4 = result - 1
            int32_t var_34_3 = eax_4[0x4c8]
            sub_63df30(&result_3, "%d/%d")
            int32_t var_8_9 = 6
            int32_t var_40_2 = 0xffffffff
            result = sub_666380(&result_3, &data_be4410, arg1, &result_3)
            int32_t var_8_10 = 7
            
            if (data_cf65bc == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            result = result_3
            
            if (result == 0 || *result == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            ecx_24 = &result_3
            goto label_5ed3fb
        case 2
            uint32_t eax_18 = sub_64e7a0(arg1)
            sub_665db0(eax_18, &data_be43e0, eax_18, 0x3f800000, 0xffffffff, 0)
            int32_t var_38_3 = data_19e3a90
            int32_t var_3c_3 = 0x1a936d8
            sub_63df30(&result_2, "%s has requested to undo %d decisions.")
            int32_t var_8_11 = 8
            int32_t var_48_3 = 0xffffffff
            sub_666380(&result_2, &data_be4404, arg1, &result_2)
            result = eax_4[0x46a]
            
            if (result s> 2)
                void* var_30_5 = result - 1
                int32_t var_34_4 = eax_4[0x4c8]
                sub_63df30(&result_3, "%d/%d")
                var_8_11.b = 9
                int32_t var_40_3 = 0xffffffff
                result = sub_666380(&result_3, &data_be4410, arg1, &result_3)
                var_8_11.b = 0xa
                
                if (data_cf65bc != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_3)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_12 = 0xb
            goto label_5ed4ee
        case 4
            uint32_t eax_22 = sub_64e7a0(arg1)
            sub_665db0(eax_22, &data_be43ec, eax_22, 0x3f800000, 0xffffffff, 0)
            int32_t var_38_4 = 0x1a936d8
            sub_63df30(&result_2, "%s canceled their undo request.")
            int32_t var_8_13 = 0xc
            int32_t var_44_5 = 0xffffffff
            result = sub_666380(&result_2, &data_be4404, arg1, &result_2)
            int32_t var_8_14 = 0xd
        label_5ed4ee:
            
            if (data_cf65bc == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            result = result_2
            
            if (result == 0 || *result == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            ecx_24 = &result_2
            goto label_5ed3fb
        case 5
            uint32_t eax_24 = sub_64e7a0(arg1)
            sub_665db0(eax_24, &data_be43f8, eax_24, 0x3f800000, 0xffffffff, 0)
            char* result_1
            sub_63df30(&result_1, "The undo request has been declined.")
            int32_t var_8_15 = 0xe
            int32_t var_40_5 = 0xffffffff
            result = sub_666380(&result_1, &data_be4404, arg1, &result_1)
            int32_t var_8_16 = 0xf
            
            if (data_cf65bc == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            result = result_1
            
            if (result == 0 || *result == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            ecx_24 = &result_1
        label_5ed3fb:
            result = sub_63d4e0(ecx_24)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
sub_63b870(eax_8, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_34_2, 
    "UndoDlgUpdate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
