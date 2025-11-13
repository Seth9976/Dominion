// 函数: sub_67ad40
// 地址: 0x67ad40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76da6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t var_38 = 0

if (arg3[0x568] != 0 && arg3[0x56d] != 2)
    arg2.b = arg4
    
    if (sub_67ad00(*edi, arg2.b) == 0)
        if (edi[6] == 1)
        label_67ae74:
            sub_67aca0(arg3)
            int32_t eax_9
            eax_9.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        
        int32_t eax_4 = edi[3]
        
        if (eax_4 != 0)
            if (eax_4 == 2)
                int32_t eax_8 = arg3[0x56d]
                
                if (eax_8 == 0 || eax_8 == 1)
                    goto label_67ae74
        else if (arg3[0x56d] == 1)
            goto label_67ae74

int32_t eax_6
uint32_t eax_30

if (arg5 != 0)
label_67b294:
    eax_6 = arg3[0x62f]
    
    if (eax_6 != 0)
        if (arg5 == 0)
            eax_30 = eax_6(edi, eax_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_30
    else if (arg3[0x5c6] != 0)
        int32_t eax_31 = sub_67ad40(eax_6, arg5.d, eax_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_31
else
    if (arg4 == 0)
    label_67adfa:
        
        if (arg3[0x53c] == 0)
            goto label_67b294
        
        char* var_30
        sub_63d720(&var_30, "btn_scroll_up")
        char* edx = edi[1]
        char* const edi_1 = &data_801800
        char* eax_7 = var_30
        char* const ecx_3 = &data_801800
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        int32_t esi_1
        
        while (true)
            eax_7.b = *edx
            char temp0_1 = *ecx_3
            bool c_1 = eax_7.b u< temp0_1
            bool z_1 = eax_7.b == temp0_1
            char var_21_1 = eax_7.b
            eax_7 = var_30
            
            if (z_1)
                if (var_21_1 == 0)
                    esi_1 = 0
                    break
                
                eax_7.b = edx[1]
                char temp1_1 = ecx_3[1]
                c_1 = eax_7.b u< temp1_1
                bool z_2 = eax_7.b == temp1_1
                char var_21_2 = eax_7.b
                eax_7 = var_30
                
                if (z_2)
                    edx = &edx[2]
                    ecx_3 = &ecx_3[2]
                    
                    if (var_21_2 != 0)
                        continue
                    
                    esi_1 = 0
                    break
            
            esi_1 = sbb.d(arg3, arg3, c_1) | 1
            break
        
        int32_t var_14_1 = 0
        
        if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
            char* eax_10 = sub_63d4e0(&var_30)
            int32_t temp2_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        
        int32_t var_14_2 = 0xffffffff
        float var_40
        char* var_3c
        int32_t* ecx_10
        char* xmm0_2
        
        if (esi_1 == 0)
            xmm0_2 = sub_67a950(arg3) ^ (data_8937c0.o).d
        label_67aee2:
            ecx_10 = arg3
            var_40 = 0f
            var_3c = xmm0_2
        label_67aef5:
            sub_67a8a0(ecx_10, &var_40)
            int32_t eax_11
            eax_11.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        sub_63d720(&var_30, "btn_scroll_down")
        char* const ecx_14 = &data_801800
        void* edx_4 = edi[1]
        char* eax_13 = var_30
        
        if (eax_13 != 0)
            ecx_14 = eax_13
        
        int32_t esi_3
        
        while (true)
            eax_13.b = *edx_4
            char temp3_1 = *ecx_14
            bool c_2 = eax_13.b u< temp3_1
            bool z_3 = eax_13.b == temp3_1
            char var_21_3 = eax_13.b
            eax_13 = var_30
            
            if (z_3)
                if (var_21_3 == 0)
                    esi_3 = 0
                    break
                
                eax_13.b = *(edx_4 + 1)
                char temp4_1 = ecx_14[1]
                c_2 = eax_13.b u< temp4_1
                bool z_4 = eax_13.b == temp4_1
                char var_21_4 = eax_13.b
                eax_13 = var_30
                
                if (z_4)
                    edx_4 += 2
                    ecx_14 = &ecx_14[2]
                    
                    if (var_21_4 != 0)
                        continue
                    
                    esi_3 = 0
                    break
            
            esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
            break
        
        int32_t var_14_3 = 1
        
        if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_30)
            int32_t temp5_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        
        int32_t var_14_4 = 0xffffffff
        
        if (esi_3 == 0)
            xmm0_2 = sub_67a950(arg3)
            goto label_67aee2
        
        sub_63d720(&var_30, "btn_scroll_channel_top")
        char* const ecx_19 = &data_801800
        void* edx_7 = edi[1]
        char* eax_16 = var_30
        
        if (eax_16 != 0)
            ecx_19 = eax_16
        
        int32_t esi_5
        
        while (true)
            eax_16.b = *edx_7
            char temp6_1 = *ecx_19
            bool c_3 = eax_16.b u< temp6_1
            bool z_5 = eax_16.b == temp6_1
            char var_21_5 = eax_16.b
            eax_16 = var_30
            
            if (z_5)
                if (var_21_5 == 0)
                    esi_5 = 0
                    break
                
                eax_16.b = *(edx_7 + 1)
                char temp7_1 = ecx_19[1]
                c_3 = eax_16.b u< temp7_1
                bool z_6 = eax_16.b == temp7_1
                char var_21_6 = eax_16.b
                eax_16 = var_30
                
                if (z_6)
                    edx_7 += 2
                    ecx_19 = &ecx_19[2]
                    
                    if (var_21_6 != 0)
                        continue
                    
                    esi_5 = 0
                    break
            
            esi_5 = sbb.d(esi_3, esi_3, c_3) | 1
            break
        
        int32_t var_14_5 = 2
        
        if (data_cf65bc != 0 && eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_63d4e0(&var_30)
            int32_t temp8_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
        
        int32_t var_14_6 = 0xffffffff
        
        if (esi_5 == 0)
            var_40 = 0f
            ecx_10 = arg3
            var_3c = arg3[0x5b4] ^ (data_8937c0.o).d
            goto label_67aef5
        
        sub_63d720(&var_30, "btn_scroll_channel_bottom")
        char* const ecx_23 = &data_801800
        void* edx_10 = edi[1]
        char* eax_19 = var_30
        
        if (eax_19 != 0)
            ecx_23 = eax_19
        
        int32_t esi_8
        
        while (true)
            eax_19.b = *edx_10
            char temp9_1 = *ecx_23
            bool c_4 = eax_19.b u< temp9_1
            bool z_7 = eax_19.b == temp9_1
            char var_21_7 = eax_19.b
            eax_19 = var_30
            
            if (z_7)
                if (var_21_7 == 0)
                    esi_8 = 0
                    break
                
                eax_19.b = *(edx_10 + 1)
                char temp10_1 = ecx_23[1]
                c_4 = eax_19.b u< temp10_1
                bool z_8 = eax_19.b == temp10_1
                char var_21_8 = eax_19.b
                eax_19 = var_30
                
                if (z_8)
                    edx_10 += 2
                    ecx_23 = &ecx_23[2]
                    
                    if (var_21_8 != 0)
                        continue
                    
                    esi_8 = 0
                    break
            
            esi_8 = sbb.d(esi_5, esi_5, c_4) | 1
            break
        
        int32_t var_14_7 = 3
        
        if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_63d4e0(&var_30)
            int32_t temp11_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp11_1 == 1)
                sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
        
        int32_t var_14_8 = 0xffffffff
        
        if (esi_8 == 0)
            var_40 = 0f
            ecx_10 = arg3
            var_3c = arg3[0x5b4]
            goto label_67aef5
        
        sub_63d720(&var_3c, "btn_scroll_nub")
        int32_t var_14_9 = 4
        char* esi_11 = var_3c
        var_30 = 1
        int32_t var_38_1 = 1
        char* ecx_27 = edi[1]
        char* const eax_22 = &data_801800
        
        if (esi_11 != 0)
            eax_22 = esi_11
        
        int32_t eax_24
        
        while (true)
            char edx_13 = *ecx_27
            char temp12_1 = *eax_22
            bool c_5 = edx_13 u< temp12_1
            
            if (edx_13 == temp12_1)
                if (edx_13 == 0)
                    eax_24 = 0
                    break
                
                edx_13 = ecx_27[1]
                char temp13_1 = eax_22[1]
                c_5 = edx_13 u< temp13_1
                
                if (edx_13 == temp13_1)
                    ecx_27 = &ecx_27[2]
                    eax_22 = &eax_22[2]
                    
                    if (edx_13 != 0)
                        continue
                    
                    eax_24 = 0
                    break
            
            eax_24 = sbb.d(eax_22, eax_22, c_5) | 1
            break
        
        char ecx_32 = 1
        int32_t edx_14 = 1
        char var_21_9
        char* ecx_34
        char* var_34
        char* eax_26
        
        if (eax_24 == 0)
            eax_26 = var_34
        label_67b1dd:
            var_21_9 = 1
            
            if ((ecx_32 & 2) != 0)
                goto label_67b1e8
            
            ecx_34 = var_30
        else
            sub_63d720(&var_34, "btn_scroll")
            var_30 = 3
            char* ecx_29 = edi[1]
            eax_26 = var_34
            
            if (eax_26 != 0)
                edi_1 = eax_26
            
            int32_t ecx_31
            
            while (true)
                char edx_15 = *ecx_29
                char temp14_1 = *edi_1
                bool c_6 = edx_15 u< temp14_1
                
                if (edx_15 == temp14_1)
                    if (edx_15 == 0)
                        ecx_31 = 0
                        break
                    
                    edx_15 = ecx_29[1]
                    char temp15_1 = edi_1[1]
                    c_6 = edx_15 u< temp15_1
                    
                    if (edx_15 == temp15_1)
                        ecx_29 = &ecx_29[2]
                        edi_1 = &edi_1[2]
                        
                        if (edx_15 != 0)
                            continue
                        
                        ecx_31 = 0
                        break
                
                ecx_31 = sbb.d(ecx_29, ecx_29, c_6) | 1
                break
            
            edx_14 = 3
            
            if (ecx_31 == 0)
                ecx_32 = 3
                goto label_67b1dd
            
            var_21_9 = 0
        label_67b1e8:
            ecx_34 = edx_14 & 0xfffffffd
            var_30 = ecx_34
            char* var_38_2 = ecx_34
            int32_t var_14_10 = 5
            
            if (data_cf65bc != 0 && eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_63d4e0(&var_34)
                int32_t temp16_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp16_1 == 1)
                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                
                ecx_34 = var_30
        int32_t var_14_11 = 0xffffffff
        
        if ((ecx_34.b & 1) != 0)
            int32_t var_14_12 = 6
            
            if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
                char* eax_28 = sub_63d4e0(&var_3c)
                int32_t temp17_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp17_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
            
            int32_t var_14_13 = 0xffffffff
        
        if (var_21_9 == 0)
            goto label_67b294
        
        uint32_t eax_29 = sub_64e7a0(*edi)
        sub_67aa30(eax_29, eax_29, arg3, edi)
        eax_30.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_30
    
    if (sub_655340(arg3) != 0)
        goto label_67adfa
    
    eax_6 = edi[6]
    
    if (eax_6 == 9 || eax_6 == 2)
        goto label_67adfa
eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
