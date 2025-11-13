// 函数: sub_649120
// 地址: 0x649120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c6fd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = data_e76b40
int32_t eax_3 = 0

if (ecx s> 0)
    do
        *((eax_3 << 2) + &data_1476b90) = eax_3
        eax_3 += 1
        ecx = data_e76b40
    while (eax_3 s< ecx)

int32_t eax_4 = ecx << 2
int32_t eax_5 = eax_4 s>> 2
sub_4d4e30(eax_5, eax_4 + &data_1476b90, &data_1476b90, eax_5, sub_649040)
char* result = data_147abb8

if (result s> 0)
    result -= 1
    int32_t i = 0
    data_147abb8 = result
    
    if (data_e76b40 s> 0)
        do
            int32_t eax_6 = *((i << 2) + &data_1476b90)
            char* const var_14 = &data_801800
            int32_t var_8_1 = 0
            int32_t eax_7 = *(eax_6 * 0x180 + 0xcf6b40)
            
            if (eax_7 == 0)
                int32_t* eax_8 = sub_64bfd0(eax_7 + 0x16)
                eax_8[3] += 1
                
                if (*eax_8 == 0)
                    sub_64be70(eax_8)
                
                int32_t* ecx_3 = *eax_8
                *eax_8 = *ecx_3
                *ecx_3 = 0xfafafafa
                ecx_3[1] = 1
                ecx_3[2] = 5
                ecx_3[3] = 6
                char const* const ecx_4 = "Mesh "
                var_14 = &ecx_3[4]
                int32_t eax_9
                
                do
                    eax_9.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                    ecx_4[ecx_3 + 0xff78d42f] = eax_9.b
                while (eax_9.b != 0)
            else if (eax_7 == 1)
                int32_t var_34_1 = *(eax_6 * 0x180 + 0xcf6c88)
                var_8_1.b = 1
                char* ecx_5 = &data_801800
                char* const var_18
                char* eax_11 = *sub_63df30(&var_18, "QuadGroup count:%d ")
                
                if (eax_11 != 0)
                    ecx_5 = eax_11
                
                sub_63d960(&var_14, ecx_5)
                var_8_1.b = 2
                
                if (data_cf65bc != 0)
                    char* eax_12 = var_18
                    
                    if (eax_12 != 0 && *eax_12 != 0)
                        char* eax_13 = sub_63d4e0(&var_18)
                        int32_t temp0_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                var_8_1.b = 0
            
            char* const ecx_9 = &data_801800
            char* eax_15 = *(*(eax_6 * 0x180 + 0xcf6b88) + 0x20)
            
            if (eax_15 != 0)
                ecx_9 = eax_15
            
            sub_63d960(&var_14, ecx_9)
            char* const eax_16 = var_14
            
            if (eax_16 == 0 || *eax_16 == 0)
                int32_t* eax_19 = sub_64bfd0(0x12)
                eax_19[3] += 1
                
                if (*eax_19 == 0)
                    sub_64be70(eax_19)
                
                int32_t* ecx_14 = *eax_19
                *eax_19 = *ecx_14
                *ecx_14 = 0xfafafafa
                ecx_14[1] = 1
                ecx_14[2] = 1
                ecx_14[3] = 2
                int16_t* const ecx_15 = &data_807454
                var_14 = &ecx_14[4]
                int32_t eax_20
                
                do
                    eax_20.b = *ecx_15
                    ecx_15 += 1
                    *(ecx_15 + ecx_14 - " 0" - 1) = eax_20.b
                while (eax_20.b != 0)
            else
                char* eax_17 = sub_63d4e0(&var_14)
                int16_t* esi_2 = *(eax_17 + 8)
                sub_63d5e0(eax_17, esi_2 + 1, &var_14, 1)
                *(esi_2 + var_14) = 0x20
            
            void* eax_21 = *(eax_6 * 0x180 + 0xcf6b8c)
            
            if (eax_21 != 0)
                char* eax_22 = *(eax_21 + 0x20)
                char* const ecx_16 = &data_801800
                
                if (eax_22 != 0)
                    ecx_16 = eax_22
                
                sub_63d960(&var_14, ecx_16)
                char* const eax_23 = var_14
                
                if (eax_23 == 0 || *eax_23 == 0)
                    int32_t* eax_26 = sub_64bfd0(0x12)
                    eax_26[3] += 1
                    
                    if (*eax_26 == 0)
                        sub_64be70(eax_26)
                    
                    int32_t* ecx_21 = *eax_26
                    *eax_26 = *ecx_21
                    *ecx_21 = 0xfafafafa
                    ecx_21[1] = 1
                    ecx_21[2] = 1
                    ecx_21[3] = 2
                    int16_t* const ecx_22 = &data_807454
                    var_14 = &ecx_21[4]
                    int32_t eax_27
                    
                    do
                        eax_27.b = *ecx_22
                        ecx_22 += 1
                        *(ecx_22 + ecx_21 - " 0" - 1) = eax_27.b
                    while (eax_27.b != 0)
                else
                    char* eax_24 = sub_63d4e0(&var_14)
                    int16_t* esi_4 = *(eax_24 + 8)
                    sub_63d5e0(eax_24, esi_4 + 1, &var_14, 1)
                    *(esi_4 + var_14) = 0x20
            
            int32_t var_34_5 = *(eax_6 * 0x180 + 0xcf6c8c)
            var_8_1.b = 3
            char* ecx_23 = &data_801800
            char* const var_1c
            char* eax_29 = *sub_63df30(&var_1c, "layer:%d ")
            
            if (eax_29 != 0)
                ecx_23 = eax_29
            
            sub_63d960(&var_14, ecx_23)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_30 = var_1c
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&var_1c)
                    int32_t temp1_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        var_1c = &data_801800
            
            char* const esi_6 = var_14
            char* const eax_32 = &data_801800
            
            if (esi_6 != 0)
                eax_32 = esi_6
            
            char* const var_34_7 = eax_32
            result = sub_63b5f0("%s")
            int32_t var_8_2 = 5
            
            if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                result = sub_63d4e0(&var_14)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            i += 1
            int32_t var_8_3 = 0xffffffff
        while (i s< data_e76b40)

fsbase->NtTib.ExceptionList = ExceptionList
return result
