// 函数: sub_5e43d0
// 地址: 0x5e43d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_from_source@V?$c_string_character_source@_W@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$c_string_character_source@_W@0@AAUfloating_point_string@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_80 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = nullptr
int32_t var_18 = 0
uint32_t eax_3 = sub_64e7a0(arg3)
int32_t var_8c = 0xffffffff
sub_666120(sub_665db0(eax_3, &data_be40ec, eax_3, 0x3f800000, 0xffffffff, 0), &data_be40f8, arg3, 
    arg2)
uint32_t result = sub_4c89a0()
void* edi_1 = nullptr
uint32_t result_1 = result
void* var_48 = nullptr

if (arg2 s> 0)
    do
        void* esi_1 = edi_1 * 9
        
        if (*((esi_1 << 2) + &data_1a8ca14) != "tbl_options"
            || *((esi_1 << 2) + &data_1a8ca10) != arg3 || *((esi_1 << 2) + &data_1a8ca18) != edi_1
            || *((esi_1 << 2) + &data_1a8ca1c) != 0)
        label_5e44b2:
            result = sub_67be20(edi_1)
            *((esi_1 << 2) + &data_1a8ca30) = result
            
            if (result == 0)
                break
            
            *((esi_1 << 2) + &data_1a8ca14) = "tbl_options"
            *((esi_1 << 2) + &data_1a8ca10) = arg3
            *((esi_1 << 2) + &data_1a8ca18) = edi_1
            *((esi_1 << 2) + &data_1a8ca1c) = 0
        else
            int32_t ecx_2 = *((esi_1 << 2) + &data_1a8ca30)
            
            if (ecx_2 == 0)
                goto label_5e44b2
            
            uint32_t eax_5 = zx.d(ecx_2.w)
            
            if (eax_5 u>= data_c23bac || *(eax_5 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_2)
                goto label_5e44b2
        
        void* ecx_4 = *(arg4 + (edi_1 << 2))
        char* edx_2 = *(ecx_4 + 0x84)
        char* result_2
        void* var_58_1
        char var_4c_1
        char* var_44
        char* result_6
        char* result_7
        char* const var_1c
        char* result_3
        char* result_4
        void* edx_3
        void* ebx_2
        void* esi_2
        
        if (edx_2 == 0)
            char* eax_10
            int32_t ecx_7
            eax_10, ecx_7 = sub_571b30(*(ecx_4 + 4), 0x18)
            int32_t var_84_2 = 0
            sub_4e3fa0(eax_10, eax_10, &result_7, result_1, ecx_7)
            ebx_2 = ebx | 0x400 | 2
            int32_t var_8_2 = 1
            result_3 = result_7
            esi_2 = ebx_2
            edx_3 = esi_2
            result_2 = result_3
            result_4 = result_3
            var_4c_1 = esi_2.b
            var_58_1 = esi_2
            var_1c = esi_2
            var_44 = edx_3
        else
            sub_4d47c0(&result_6, edx_2)
            ebx_2 = ebx | 0x200 | 1
            int32_t var_8_1 = 0
            result_4 = result_6
            esi_2 = ebx_2
            result_3 = result_7
            edx_3 = ebx_2
            result_2 = result_4
            var_4c_1 = ebx_2.b
            var_58_1 = ebx_2
            var_1c = ebx_2
            var_44 = ebx_2
        
        void* var_18_1 = ebx_2
        char* result_5 = result_4
        char ecx_10
        char* const esi_3
        
        if (result_4 == 0 || *result_4 == 0)
            ecx_10 = esi_2.b
            var_44 = edx_3
            esi_3 = var_58_1
        else
            char* eax_11 = sub_63d4e0(&result_5)
            ecx_10 = var_4c_1
            esi_3 = var_1c
            *(eax_11 + 4) += 1
            result_3 = result_7
        
        int32_t var_8_3 = 2
        char ecx_11
        
        if ((ecx_10 & 2) == 0)
            ecx_11 = var_44.b
        else
            ebx_2 = esi_3 & 0xfffffffd
            void* var_18_2 = ebx_2
            var_8_3.b = 4
            ecx_11 = ebx_2.b
            
            if (data_cf65bc != 0)
                if (result_3 == 0 || *result_3 == 0)
                    ecx_11 = ebx_2.b
                else
                    char* eax_12 = sub_63d4e0(&result_7)
                    ecx_11 = ebx_2.b
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                        result_7 = &data_801800
                        ecx_11 = ebx_2.b
        
        var_8_3.b = 5
        
        if ((ecx_11 & 1) != 0)
            ebx_2 &= 0xfffffffe
            void* var_18_3 = ebx_2
            var_8_3.b = 6
            
            if (data_cf65bc != 0)
                char* result_8 = result_6
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_13 = sub_63d4e0(&result_6)
                    int32_t temp1_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        result_6 = &data_801800
            
            var_8_3.b = 5
        
        char* edx_9 = *(*(arg4 + (edi_1 << 2)) + 0x88)
        char* var_60_1
        char var_58_2
        char* const var_50
        char var_4c_2
        char* const var_3c
        char* const var_38
        char* const var_34
        char* const var_2c
        char* eax_15
        void* ecx_17
        char* edx_10
        char* esi_5
        char* edi_2
        
        if (edx_9 == 0)
            sub_63d720(&var_38, "dom_smartplay_")
            int32_t var_8_4 = 8
            int32_t ebx_6 = ebx_2 | 8
            int32_t var_18_4 = ebx_6
            void* eax_17 = sub_571b30(*(*(arg4 + (edi_1 << 2)) + 4), 0x17)
            char* edx_11 = *(eax_17 + 0x58)
            
            if (edx_11 == 0)
                sub_63b870(eax_17, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&var_34, edx_11)
            int32_t var_8_5 = 9
            int32_t ebx_7 = ebx_6 | 0x10
            int32_t var_18_5 = ebx_7
            int32_t var_8_6 = 0xa
            char* eax_19 = *sub_63dde0(&var_38, &var_50, &var_34)
            int32_t ebx_8 = ebx_7 | 0x20
            int32_t var_18_6 = ebx_8
            char* edx_12 = &data_801800
            
            if (eax_19 != 0)
                edx_12 = eax_19
            
            sub_4d47c0(&var_2c, edx_12)
            ebx = ebx_8 | 0x2040
            int32_t var_8_7 = 0xb
            eax_15 = var_2c
            edx_10 = ebx
            ecx_17 = edx_10
            var_60_1 = eax_15
            edi_2 = eax_15
            var_1c = edx_10
            esi_5 = edx_10
            var_58_2 = edx_10.b
            var_4c_2 = ecx_17.b
        else
            sub_4d47c0(&var_3c, edx_9)
            ebx = ebx_2 | 0x800 | 4
            var_8_3.b = 7
            edi_2 = var_3c
            edx_10 = ebx
            eax_15 = var_2c
            ecx_17 = ebx
            var_60_1 = edi_2
            esi_5 = ebx
            var_1c = ebx
            var_58_2 = ebx.b
            var_4c_2 = ebx.b
        
        void* var_18_7 = ebx
        var_44 = edi_2
        
        if (edi_2 == 0 || *edi_2 == 0)
            esi_5 = ecx_17
            var_1c = edx_10
            var_4c_2 = var_58_2
        else
            char* eax_20 = sub_63d4e0(&var_44)
            *(eax_20 + 4) += 1
            eax_15 = var_2c
        
        int32_t var_8_8 = 0xc
        char ecx_25
        
        if ((var_1c.b & 0x40) == 0)
            ecx_25 = var_4c_2
        else
            ebx = esi_5 & 0xffffffbf
            void* var_18_8 = ebx
            var_8_8.b = 0xe
            ecx_25 = ebx.b
            
            if (data_cf65bc != 0)
                if (eax_15 == 0 || *eax_15 == 0)
                    ecx_25 = ebx.b
                else
                    char* eax_21 = sub_63d4e0(&var_2c)
                    ecx_25 = ebx.b
                    int32_t temp2_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                        var_2c = &data_801800
                        ecx_25 = ebx.b
        
        if ((ecx_25 & 0x20) != 0)
            ebx &= 0xffffffdf
            void* var_18_9 = ebx
            var_8_8.b = 0x10
            
            if (data_cf65bc != 0)
                char* eax_22 = var_50
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_63d4e0(&var_50)
                    int32_t temp3_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_50 = &data_801800
        
        if ((ebx.b & 0x10) != 0)
            ebx &= 0xffffffef
            void* var_18_10 = ebx
            var_8_8.b = 0x12
            
            if (data_cf65bc != 0)
                char* eax_24 = var_34
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_63d4e0(&var_34)
                    int32_t temp4_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_34 = &data_801800
        
        if ((ebx.b & 8) != 0)
            ebx &= 0xfffffff7
            void* var_18_11 = ebx
            var_8_8.b = 0x14
            
            if (data_cf65bc != 0)
                char* eax_26 = var_38
                
                if (eax_26 != 0 && *eax_26 != 0)
                    char* eax_27 = sub_63d4e0(&var_38)
                    int32_t temp5_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                        var_38 = &data_801800
        
        var_8_8.b = 0x15
        
        if ((ebx.b & 4) != 0)
            ebx &= 0xfffffffb
            void* var_18_12 = ebx
            var_8_8.b = 0x16
            
            if (data_cf65bc != 0)
                char* eax_28 = var_3c
                
                if (eax_28 != 0 && *eax_28 != 0)
                    char* eax_29 = sub_63d4e0(&var_3c)
                    int32_t temp6_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        var_3c = &data_801800
            
            var_8_8.b = 0x15
        
        int32_t var_84_4 = 0xffffffff
        sub_666380(&result_5, &data_be4110, arg3, &result_5)
        int32_t var_8c_2 = 0xffffffff
        sub_666380(&var_44, &data_be411c, arg3, &var_44)
        int32_t eax_34 = **(arg4 + (var_48 << 2))
        void* eax_35 = sub_5e3c60(1)
        char* const eax_36 = sub_61cee0()
        int32_t edx_23 = *(eax_35 + 0x200)
        int32_t* ecx_39 = nullptr
        var_1c = eax_36
        
        if (edx_23 s> 0)
            do
                if (*(eax_35 + (ecx_39 << 3)) == eax_34)
                    eax_36 = *(eax_35 + (ecx_39 << 3) + 4)
                    edx_23.b = var_1c == eax_36
                    goto label_5e4943
                
                ecx_39 += 1
            while (ecx_39 s< edx_23)
            
            eax_36 = var_1c
        
        edx_23.b = 1
    label_5e4943:
        char var_12_1 = edx_23.b
        var_1c = &data_801800
        ecx_39.b = 0
        var_8_8.b = 0x17
        int32_t esi_7 = 0
        char var_11_1 = 0
        int32_t var_5c_1 = 0
        
        while (*(*(arg4 + (var_48 << 2)) + esi_7 + 0x8c) != 0)
            if (edx_23.b == 0)
                uint32_t eax_40 = sub_64e7a0(arg3)
                sub_665db0(eax_40, &data_be4140, eax_40, 0x3f800000, var_48, 0)
            
            int32_t eax_43 = **(arg4 + (var_48 << 2))
            void* eax_44 = sub_5e3c60(0)
            int32_t eax_45 = sub_61cee0()
            int32_t edx_24 = *(eax_44 + 0x200)
            ecx_39 = nullptr
            
            if (edx_24 s> 0)
                do
                    if (*(eax_44 + (ecx_39 << 3)) == eax_43)
                        eax_45 = *(eax_44 + (ecx_39 << 3) + 4)
                        break
                    
                    ecx_39 += 1
                while (ecx_39 s< edx_24)
            
            if (eax_36 == eax_45)
                uint32_t eax_47 = sub_64e7a0(arg3)
                sub_665db0(eax_47, &data_be414c, eax_47, 0x3f800000, var_48, 0)
            
            edx_23 = *(arg4 + (var_48 << 2))
            
            if (*(var_5c_1 + edx_23 + 0x8c) != eax_36)
                ecx_39.b = var_11_1
            else
                char* const var_40
                sub_4d47c0(&var_40, *(var_5c_1 + edx_23 + 0x90))
                ebx |= 0x100
                void* var_18_13 = ebx
                var_8_8.b = 0x18
                ecx_39, edx_23 = sub_63d850(&var_1c, &var_40)
                var_8_8.b = 0x19
                
                if (data_cf65bc != 0)
                    char* eax_50 = var_40
                    
                    if (eax_50 != 0 && *eax_50 != 0)
                        char* eax_51 = sub_63d4e0(&var_40)
                        int32_t temp12_1 = *(eax_51 + 4)
                        *(eax_51 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            ecx_39, edx_23 = sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                            var_40 = &data_801800
                
                ecx_39.b = 1
                var_8_8.b = 0x17
                var_11_1 = 1
            
            edx_23.b = var_12_1
            esi_7 = var_5c_1 + 0xc
            var_5c_1 = esi_7
            
            if (esi_7 s>= 0x60)
                break
        
        char* const esi_10
        
        if (ecx_39.b != 0)
            esi_10 = var_1c
        else
            char* var_24
            sub_4d47c0(&var_24, *(*(arg4 + (var_48 << 2)) + 0x90))
            ebx |= 0x80
            void* var_18_14 = ebx
            var_8_8.b = 0x1a
            char* const edx_29 = &data_801800
            esi_10 = var_1c
            char* ecx_50 = &data_801800
            char* eax_54 = var_24
            
            if (esi_10 != 0)
                edx_29 = esi_10
            
            if (eax_54 != 0)
                ecx_50 = eax_54
            
            if (edx_29 != ecx_50)
                if (data_cf65bc != 0 && esi_10 != 0 && *esi_10 != 0)
                    char* eax_55 = sub_63d4e0(&var_1c)
                    int32_t temp11_1 = *(eax_55 + 4)
                    *(eax_55 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                    
                    eax_54 = var_24
                
                esi_10 = eax_54
                var_1c = esi_10
                
                if (eax_54 != 0 && *eax_54 != 0)
                    char* eax_56 = sub_63d4e0(&var_1c)
                    *(eax_56 + 4) += 1
                    eax_54 = var_24
            
            var_8_8.b = 0x1b
            
            if (data_cf65bc != 0 && eax_54 != 0 && *eax_54 != 0)
                char* eax_57 = sub_63d4e0(&var_24)
                int32_t temp10_1 = *(eax_57 + 4)
                *(eax_57 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                    var_24 = &data_801800
            
            var_8_8.b = 0x17
        
        int32_t var_84_6 = 0xffffffff
        result = sub_666380(&var_1c, &data_be4128, arg3, &var_1c)
        var_8_8.b = 0x1c
        
        if (data_cf65bc != 0 && esi_10 != 0 && *esi_10 != 0)
            result = sub_63d4e0(&var_1c)
            int32_t temp7_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp7_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                var_1c = &data_801800
        
        var_8_8.b = 0x1d
        
        if (data_cf65bc != 0 && var_60_1 != 0 && *var_60_1 != 0)
            result = sub_63d4e0(&var_44)
            int32_t temp8_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp8_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                var_44 = &data_801800
        
        int32_t var_8_9 = 0x1e
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_5)
                int32_t temp9_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp9_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        edi_1 = var_48 + 1
        int32_t var_8_10 = 0xffffffff
        var_48 = edi_1
    while (edi_1 s< arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
