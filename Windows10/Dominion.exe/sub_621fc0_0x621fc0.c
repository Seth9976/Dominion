// 函数: sub_621fc0
// 地址: 0x621fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b7cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_80 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = nullptr
int32_t var_18 = 0
uint32_t eax_3 = sub_64e7a0(arg1)
int32_t esi = data_cd3190
*(eax_3 + 0x18bc) = sub_61cff0
int32_t ecx_1 = 0x1c - esi * 6

if (ecx_1 s> 6)
    ecx_1 = 6

void* eax_7

if (esi != 0)
    uint32_t eax_6 = sub_64e7a0(arg1)
    eax_7 = sub_665db0(eax_6, &data_bf01b8, eax_6, 0x3f800000, 0xffffffff, 0)

if (esi == 0 || esi != 4)
    uint32_t eax_8 = sub_64e7a0(arg1)
    eax_7 = sub_665db0(eax_8, &data_bf01c4, eax_8, 0x3f800000, 0xffffffff, 0)

int32_t var_84 = 0xffffffff
sub_666120(eax_7, &data_bf0008, arg1, ecx_1)
uint32_t edi_1 = sub_4c89a0()
int32_t result = 0
uint32_t var_70 = edi_1
int32_t result_1 = 0

if (ecx_1 s> 0)
    int32_t ecx_8 = esi * 6
    int32_t var_6c_1 = ecx_8
    
    do
        int32_t eax_10 = result + ecx_8
        void* eax_11 = eax_10 * 0xec
        char* edx_1 = *(eax_11 + &data_7e7db4)
        char* var_64_1
        char var_48_1
        char* var_44
        char* var_34
        char* var_28
        void* var_1c
        char* eax_12
        char* ecx_10
        char* edx_2
        char* ebx_2
        char* esi_1
        char* edi_2
        
        if (edx_1 == 0)
            char* eax_13
            int32_t ecx_12
            eax_13, ecx_12 = sub_571b30(*(eax_11 + 0x7e7d34), 0x18)
            int32_t var_84_1 = 0
            sub_4e3fa0(eax_13, eax_13, &var_28, edi_1, ecx_12)
            ebx_2 = ebx | 0x800 | 2
            int32_t var_8_2 = 1
            eax_12 = var_28
            esi_1 = ebx_2
            edx_2 = esi_1
            var_64_1 = eax_12
            ecx_10 = eax_12
            var_48_1 = esi_1.b
            edi_2 = esi_1
            var_1c = esi_1
            var_44 = edx_2
        else
            sub_4d47c0(&var_34, edx_1)
            ebx_2 = ebx | 0x400 | 1
            int32_t var_8_1 = 0
            ecx_10 = var_34
            esi_1 = ebx_2
            eax_12 = var_28
            edx_2 = ebx_2
            var_64_1 = ecx_10
            edi_2 = ebx_2
            var_48_1 = ebx_2.b
            var_1c = ebx_2
            var_44 = ebx_2
        
        char* var_18_1 = ebx_2
        char* var_54 = ecx_10
        char ecx_15
        
        if (ecx_10 == 0 || *ecx_10 == 0)
            edi_2 = edx_2
            ecx_15 = esi_1.b
            var_44 = var_1c
        else
            char* eax_14 = sub_63d4e0(&var_54)
            ecx_15 = var_48_1
            *(eax_14 + 4) += 1
            eax_12 = var_28
        
        int32_t var_8_3 = 2
        char ecx_16
        
        if ((ecx_15 & 2) == 0)
            ecx_16 = var_44.b
        else
            ebx_2 = edi_2 & 0xfffffffd
            char* var_18_2 = ebx_2
            var_8_3.b = 4
            ecx_16 = ebx_2.b
            
            if (data_cf65bc != 0)
                if (eax_12 == 0 || *eax_12 == 0)
                    ecx_16 = ebx_2.b
                else
                    char* eax_15 = sub_63d4e0(&var_28)
                    ecx_16 = ebx_2.b
                    int32_t temp0_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_28 = &data_801800
                        ecx_16 = ebx_2.b
        
        var_8_3.b = 5
        
        if ((ecx_16 & 1) != 0)
            ebx_2 &= 0xfffffffe
            char* var_18_3 = ebx_2
            var_8_3.b = 6
            
            if (data_cf65bc != 0)
                char* eax_16 = var_34
                
                if (eax_16 != 0 && *eax_16 != 0)
                    char* eax_17 = sub_63d4e0(&var_34)
                    int32_t temp1_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                        var_34 = &data_801800
            
            var_8_3.b = 5
        
        char* edx_9 = *(eax_11 + &data_7e7db8)
        char* var_60_1
        char var_5c_1
        char* const var_4c
        char var_48_2
        char* const var_40
        char* const var_3c
        char* const var_38
        char* const var_2c
        char* eax_18
        void* ecx_22
        void* edx_10
        void* esi_3
        char* edi_3
        
        if (edx_9 == 0)
            sub_63d720(&var_3c, "dom_smartplay_")
            int32_t var_8_4 = 8
            int32_t ebx_6 = ebx_2 | 8
            int32_t var_18_4 = ebx_6
            void* eax_19 = sub_571b30(*(eax_11 + 0x7e7d34), 0x17)
            char* edx_11 = *(eax_19 + 0x58)
            
            if (edx_11 == 0)
                sub_63b870(eax_19, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&var_38, edx_11)
            int32_t var_8_5 = 9
            int32_t ebx_7 = ebx_6 | 0x10
            int32_t var_18_5 = ebx_7
            int32_t var_8_6 = 0xa
            char* eax_21 = *sub_63dde0(&var_3c, &var_4c, &var_38)
            int32_t ebx_8 = ebx_7 | 0x20
            int32_t var_18_6 = ebx_8
            char* edx_12 = &data_801800
            
            if (eax_21 != 0)
                edx_12 = eax_21
            
            sub_4d47c0(&var_2c, edx_12)
            ebx = ebx_8 | 0x240
            int32_t var_8_7 = 0xb
            eax_18 = var_2c
            edx_10 = ebx
            ecx_22 = edx_10
            var_60_1 = eax_18
            edi_3 = eax_18
            var_1c = edx_10
            esi_3 = edx_10
            var_5c_1 = edx_10.b
            var_48_2 = ecx_22.b
        else
            sub_4d47c0(&var_40, edx_9)
            ebx = ebx_2 | 0x1000 | 4
            var_8_3.b = 7
            edi_3 = var_40
            edx_10 = ebx
            eax_18 = var_2c
            ecx_22 = ebx
            var_60_1 = edi_3
            esi_3 = ebx
            var_1c = ebx
            var_5c_1 = ebx.b
            var_48_2 = ebx.b
        
        void* var_18_7 = ebx
        var_44 = edi_3
        
        if (edi_3 == 0 || *edi_3 == 0)
            esi_3 = ecx_22
            var_1c = edx_10
            var_48_2 = var_5c_1
        else
            char* eax_22 = sub_63d4e0(&var_44)
            *(eax_22 + 4) += 1
            eax_18 = var_2c
        
        int32_t var_8_8 = 0xc
        char ecx_30
        
        if ((var_1c.b & 0x40) == 0)
            ecx_30 = var_48_2
        else
            ebx = esi_3 & 0xffffffbf
            void* var_18_8 = ebx
            var_8_8.b = 0xe
            ecx_30 = ebx.b
            
            if (data_cf65bc != 0)
                if (eax_18 == 0 || *eax_18 == 0)
                    ecx_30 = ebx.b
                else
                    char* eax_23 = sub_63d4e0(&var_2c)
                    ecx_30 = ebx.b
                    int32_t temp2_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_2c = &data_801800
                        ecx_30 = ebx.b
        
        if ((ecx_30 & 0x20) != 0)
            ebx &= 0xffffffdf
            void* var_18_9 = ebx
            var_8_8.b = 0x10
            
            if (data_cf65bc != 0)
                char* eax_24 = var_4c
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_63d4e0(&var_4c)
                    int32_t temp3_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_4c = &data_801800
        
        if ((ebx.b & 0x10) != 0)
            ebx &= 0xffffffef
            void* var_18_10 = ebx
            var_8_8.b = 0x12
            
            if (data_cf65bc != 0)
                char* eax_26 = var_38
                
                if (eax_26 != 0 && *eax_26 != 0)
                    char* eax_27 = sub_63d4e0(&var_38)
                    int32_t temp4_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                        var_38 = &data_801800
        
        if ((ebx.b & 8) != 0)
            ebx &= 0xfffffff7
            void* var_18_11 = ebx
            var_8_8.b = 0x14
            
            if (data_cf65bc != 0)
                char* eax_28 = var_3c
                
                if (eax_28 != 0 && *eax_28 != 0)
                    char* eax_29 = sub_63d4e0(&var_3c)
                    int32_t temp5_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        var_3c = &data_801800
        
        var_8_8.b = 0x15
        
        if ((ebx.b & 4) != 0)
            ebx &= 0xfffffffb
            void* var_18_12 = ebx
            var_8_8.b = 0x16
            
            if (data_cf65bc != 0)
                char* eax_30 = var_40
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&var_40)
                    int32_t temp6_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        var_40 = &data_801800
            
            var_8_8.b = 0x15
        
        int32_t result_3 = result_1
        sub_666380(&var_54, &data_be4110, arg1, &var_54)
        int32_t result_2 = result_1
        sub_666380(&var_44, &data_be411c, arg1, &var_44)
        int32_t i = *(eax_11 + &data_7e7d30)
        void* eax_35 = sub_5e3c60(data_cd318c)
        void* eax_36 = sub_61cee0()
        int32_t edx_23 = *(eax_35 + 0x200)
        int32_t ecx_45 = 0
        void* var_5c_2
        
        if (edx_23 s<= 0)
        label_6224ee:
            var_5c_2 = eax_36
            eax_36:1.b = 1
        else
            while (*(eax_35 + (ecx_45 << 3)) != i)
                ecx_45 += 1
                
                if (ecx_45 s>= edx_23)
                    goto label_6224ee
            
            void* ecx_72 = *(eax_35 + (ecx_45 << 3) + 4)
            var_5c_2 = ecx_72
            eax_36:1.b = eax_36 == ecx_72
        
        void* esi_6 = &data_801800
        char var_12_1 = eax_36:1.b
        var_1c = &data_801800
        eax_36.b = 0
        int32_t ecx_46 = 0
        var_8_8.b = 0x17
        char var_11_1 = 0
        int32_t var_48_3 = 0
        int32_t* edi_4 = eax_11 + 0x7e7dbc
        
        while (*edi_4 != 0)
            if (eax_36:1.b == 0)
                uint32_t eax_37 = sub_64e7a0(arg1)
                sub_665db0(eax_37, &data_be4140, eax_37, 0x3f800000, result_1, 0)
                eax_36.b = var_11_1
                ecx_46 = var_48_3
            
            if (*edi_4 == var_5c_2)
                void* var_20
                sub_4d47c0(&var_20, edi_4[1])
                ebx |= 0x100
                void* var_18_13 = ebx
                var_8_8.b = 0x18
                eax_36 = var_20
                char* const edx_27 = &data_801800
                
                if (esi_6 != 0)
                    edx_27 = esi_6
                
                char* const ecx_50 = &data_801800
                
                if (eax_36 != 0)
                    ecx_50 = eax_36
                
                if (edx_27 != ecx_50)
                    if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                        char* eax_38 = sub_63d4e0(&var_1c)
                        int32_t temp13_1 = *(eax_38 + 4)
                        *(eax_38 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                        
                        eax_36 = var_20
                    
                    esi_6 = eax_36
                    var_1c = esi_6
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_39 = sub_63d4e0(&var_1c)
                        *(eax_39 + 4) += 1
                        eax_36 = var_20
                
                var_8_8.b = 0x19
                
                if (data_cf65bc != 0 && eax_36 != 0 && *eax_36 != 0)
                    eax_36 = sub_63d4e0(&var_20)
                    int32_t temp12_1 = *(eax_36 + 4)
                    *(eax_36 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                        var_20 = &data_801800
                
                ecx_46 = var_48_3
                eax_36.b = 1
                var_8_8.b = 0x17
                var_11_1 = 1
            
            eax_36:1.b = var_12_1
            ecx_46 += 1
            edi_4 = &edi_4[3]
            var_48_3 = ecx_46
            
            if (ecx_46 s>= 8)
                break
        
        if (eax_36.b == 0)
            char* var_24
            sub_4d47c0(&var_24, (&data_7e7dc0)[eax_10 * 0x3b])
            ebx |= 0x80
            void* var_18_14 = ebx
            var_8_8.b = 0x1a
            char* eax_41 = var_24
            char* const edx_33 = &data_801800
            
            if (esi_6 != 0)
                edx_33 = esi_6
            
            char* const ecx_57 = &data_801800
            
            if (eax_41 != 0)
                ecx_57 = eax_41
            
            if (edx_33 != ecx_57)
                if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                    char* eax_42 = sub_63d4e0(&var_1c)
                    int32_t temp11_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                    
                    eax_41 = var_24
                
                esi_6 = eax_41
                var_1c = esi_6
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_43 = sub_63d4e0(&var_1c)
                    *(eax_43 + 4) += 1
                    eax_41 = var_24
            
            var_8_8.b = 0x1b
            
            if (data_cf65bc != 0 && eax_41 != 0 && *eax_41 != 0)
                char* eax_44 = sub_63d4e0(&var_24)
                int32_t temp10_1 = *(eax_44 + 4)
                *(eax_44 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                    var_24 = &data_801800
            
            var_8_8.b = 0x17
        
        int32_t result_4 = result_1
        sub_666380(&var_1c, &data_be4128, arg1, &var_1c)
        var_8_8.b = 0x1c
        
        if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
            char* eax_46 = sub_63d4e0(&var_1c)
            int32_t temp7_1 = *(eax_46 + 4)
            *(eax_46 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                var_1c = &data_801800
        
        var_8_8.b = 0x1d
        
        if (data_cf65bc != 0 && var_60_1 != 0 && *var_60_1 != 0)
            char* eax_47 = sub_63d4e0(&var_44)
            int32_t temp8_1 = *(eax_47 + 4)
            *(eax_47 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                var_44 = &data_801800
        
        int32_t var_8_9 = 0x1e
        
        if (data_cf65bc != 0 && var_64_1 != 0 && *var_64_1 != 0)
            char* eax_49 = sub_63d4e0(&var_54)
            int32_t temp9_1 = *(eax_49 + 4)
            *(eax_49 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
        
        ecx_8 = var_6c_1
        result = result_1 + 1
        edi_1 = var_70
        int32_t var_8_10 = 0xffffffff
        result_1 = result
    while (result s< ecx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
