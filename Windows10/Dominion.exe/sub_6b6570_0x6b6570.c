// 函数: sub_6b6570
// 地址: 0x6b6570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ff65
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg6

if (ecx != 0)
    *ecx = 0

float eax_3 = arg3[2]
char* const ebx = &data_801800
int32_t temp0 = arg3[1]

if (eax_3 s<= temp0)
    if (eax_3 == temp0)
    label_6b6c09:
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    while (true)
        float var_20 = 0f
        int32_t* eax_4 = sub_6b59e0(arg3, &var_20)
        
        if (eax_4 == 0)
            float var_14
            
            if (arg3[0x2b] == 4)
                float eax_6 = arg3[2]
                ebx.b = 0
                var_14 = 0f
                var_20 = &data_801800
                float xmm0_4
                
                while (true)
                    int32_t var_2c
                    int32_t* eax_7 = sub_6b59e0(arg3, &var_2c)
                    
                    if (eax_7 == 0)
                        void* eax_10 = sub_6b4b00(arg3)
                        char* var_1c = &data_801800
                        int32_t var_8_1 = 0
                        sub_63db30(&var_1c, *arg3 + arg3[2], eax_10 - arg3[2])
                        int32_t* ecx_14 = arg3[0xe]
                        char* edx_5 = &data_801800
                        char* esi_3 = var_1c
                        float xmm0_6
                        
                        if (ecx_14 == 0)
                            if (esi_3 != 0)
                                edx_5 = esi_3
                            
                            xmm0_6 = sub_6b43a0(arg3[0xd], edx_5, arg3[0xb], arg3[0xc]) f* arg3[0xa]
                        else
                            if (esi_3 != 0)
                                edx_5 = esi_3
                            
                            int32_t* var_44_3 = ecx_14
                            xmm0_6 = sub_6417e0(ecx_14, edx_5, arg3[0xf], arg3[0xb]) f* arg3[0xa]
                        
                        float xmm0_9 = xmm0_6 + var_14
                        arg3[2] = eax_10
                        ebx = var_20
                        var_14 = xmm0_9
                        
                        if (ebx.b != 0)
                            int32_t var_8_4 = 1
                            
                            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                                char* eax_12 = sub_63d4e0(&var_1c)
                                int32_t temp8_1 = *(eax_12 + 4)
                                *(eax_12 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                                    var_1c = &data_801800
                            
                            int32_t var_8_5 = 0xffffffff
                            xmm0_4 = var_14
                            break
                        
                        int32_t var_8_2 = 2
                        
                        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != ebx.b)
                            char* eax_11 = sub_63d4e0(&var_1c)
                            int32_t temp9_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                                var_1c = &data_801800
                        
                        int32_t var_8_3 = 0xffffffff
                    else
                        ebx = zx.d(ebx.b)
                        
                        if (eax_7[0x16] == 3)
                            ebx = 1
                        
                        var_20 = ebx
                        xmm0_4 = sub_6b4f30(arg3, eax_7) + var_14
                        char* ecx_8 = arg3[2] + var_2c
                        arg3[2] = ecx_8
                        int32_t eax_8 = eax_7[0x16]
                        var_14 = xmm0_4
                        
                        if (eax_8 != 0)
                            arg3[0x2b] = eax_8
                        
                        int32_t eax_9
                        eax_9.b = ecx_8[*arg3]
                        
                        if (eax_9.b == 0x20)
                            break
                        
                        if (eax_9.b == 0x7b)
                            if (ebx.b != 0)
                                break
                
                float xmm2_4 = arg3[3]
                
                if (arg3[6] f>= xmm2_4 + xmm0_4 || arg3[0x2b] == 2)
                    arg3[2] = eax_6
                    arg3[0x2b] = 4
                else
                    arg3[2] = eax_6
                    arg3[0x2b] = 4
                    xmm2_4 - 0f
                    eax_3:1.b = (xmm2_4 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_4, 0f) ? 1 : 0) << 2 | (xmm2_4 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        goto label_6b6c09
                
                ebx = &data_801800
            
            void* eax_14 = sub_6b4b00(arg3)
            var_14 = &data_801800
            int32_t var_8_6 = 3
            sub_63db30(&var_14, *arg3 + arg3[2], eax_14 - arg3[2])
            int32_t* ecx_24 = arg3[0xe]
            char* const edx_10 = &data_801800
            float esi_4 = var_14
            float xmm0_12
            
            if (ecx_24 == 0)
                if (esi_4 != 0)
                    edx_10 = esi_4
                
                xmm0_12 = sub_6b43a0(arg3[0xd], edx_10, arg3[0xb], arg3[0xc]) f* arg3[0xa]
            else
                if (esi_4 != 0)
                    edx_10 = esi_4
                
                int32_t* var_44_5 = ecx_24
                xmm0_12 = sub_6417e0(ecx_24, edx_10, arg3[0xf], arg3[0xb]) f* arg3[0xa]
            
            float xmm2_7 = arg3[3]
            var_20 = xmm0_12
            
            if (not(arg3[6] f>= xmm2_7 + xmm0_12))
                eax_3 = arg3[0x2b]
            
            bool cond:7_1
            
            if (not(arg3[6] f>= xmm2_7 + xmm0_12) && eax_3 != 2)
                if (eax_3 != 5)
                    xmm2_7 - 0f
                    eax_3:1.b = (xmm2_7 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_7, 0f) ? 1 : 0) << 2 | (xmm2_7 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        if (arg6 != 0)
                            *arg6 = xmm2_7
                        
                        int32_t var_8_12 = 0x13
                    else
                        float var_18
                        sub_6b4c60(&var_18, arg3)
                        var_8_6.b = 0xe
                        char* const ecx_44 = &data_801800
                        char* eax_27 = var_18
                        
                        if (eax_27 != 0)
                            ebx = eax_27
                        
                        int32_t ecx_46
                        
                        while (true)
                            char edx_19 = *ebx
                            char temp6_1 = *ecx_44
                            bool c_4 = edx_19 u< temp6_1
                            
                            if (edx_19 == temp6_1)
                                if (edx_19 == 0)
                                    ecx_46 = 0
                                    break
                                
                                edx_19 = ebx[1]
                                char temp11_1 = ecx_44[1]
                                c_4 = edx_19 u< temp11_1
                                
                                if (edx_19 == temp11_1)
                                    ebx = &ebx[2]
                                    ecx_44 = &ecx_44[2]
                                    
                                    if (edx_19 != 0)
                                        continue
                                    
                                    ecx_46 = 0
                                    break
                            
                            ecx_46 = sbb.d(ecx_44, ecx_44, c_4) | 1
                            break
                        
                        if (ecx_46 == 0)
                            var_8_6.b = 0xf
                            
                            if (data_cf65bc != ecx_46 && eax_27 != 0 && *eax_27 != ecx_46.b)
                                eax_27 = sub_63d4e0(&var_18)
                                int32_t temp12_1 = *(eax_27 + 4)
                                *(eax_27 + 4) -= 1
                                
                                if (temp12_1 == 1)
                                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                                    var_18 = &data_801800
                            
                            int32_t var_8_10 = 0x10
                            
                            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                                eax_27 = sub_63d4e0(&var_14)
                                int32_t temp13_1 = *(eax_27 + 4)
                                *(eax_27 + 4) -= 1
                                
                                if (temp13_1 == 1)
                                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                            
                            eax_27.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_27
                        
                        sub_6b5ae0(arg3, &var_18)
                        eax_3 = var_18
                        int32_t edx_25
                        
                        if (eax_3 == 0 || *eax_3 == 0)
                            edx_25 = 0
                        else
                            edx_25 = *(sub_63d4e0(&var_18) + 8)
                            eax_3 = var_18
                        
                        float xmm0_19 = var_20 f+ arg3[3]
                        arg3[2] += edx_25
                        arg3[3] = xmm0_19
                        var_8_6.b = 0x11
                        
                        if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
                            eax_3 = sub_63d4e0(&var_18)
                            int32_t temp14_1 = *(eax_3 i+ 4)
                            *(eax_3 i+ 4) -= 1
                            
                            if (temp14_1 == 1)
                                sub_64c080(eax_3, *(eax_3 i+ 0xc) + 0x10)
                                var_18 = &data_801800
                        
                        int32_t var_8_11 = 0x12
                else
                    char* const var_30_3 = &data_801800
                    char* const var_28_3 = &data_801800
                    var_8_6.b = 6
                    char* var_24
                    sub_63d720(&var_24, "...")
                    var_8_6.b = 7
                    sub_6b5ae0(arg3, &var_24)
                    var_8_6.b = 8
                    
                    if (data_cf65bc != 0)
                        char* eax_25 = var_24
                        
                        if (eax_25 != 0 && *eax_25 != 0)
                            char* eax_26 = sub_63d4e0(&var_24)
                            int32_t temp7_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                    
                    arg3[2] = arg3[1]
                    
                    if (arg6 != 0)
                        *arg6 = arg3[3]
                    
                    int32_t var_8_9 = 0xb
                
                if (data_cf65bc == 0)
                    goto label_6b6c09
                
                if (esi_4 == 0)
                    goto label_6b6c09
                
                cond:7_1 = *esi_4 == 0
                goto label_6b6bec
            
            sub_6b5ae0(arg3, &var_14)
            float xmm0_17 = var_20 f+ arg3[3]
            arg3[2] = eax_14
            arg3[3] = xmm0_17
            
            if (arg6 != 0)
                *arg6 = xmm0_17
            
            if ((*arg3)[arg3[2]] == 0xd)
                int32_t var_8_13 = 4
                
                if (data_cf65bc == 0)
                    goto label_6b6c09
                
                eax_3 = var_14
                
                if (eax_3 == 0)
                    goto label_6b6c09
                
                cond:7_1 = *eax_3 == 0
            label_6b6bec:
                
                if (cond:7_1)
                    goto label_6b6c09
                
                eax_3 = sub_63d4e0(&var_14)
                int32_t temp10_1 = *(eax_3 i+ 4)
                *(eax_3 i+ 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_3, *(eax_3 i+ 0xc) + 0x10)
                
                goto label_6b6c09
            
            int32_t var_8_7 = 0x14
            
            if (data_cf65bc != 0)
                float eax_18 = var_14
                
                if (eax_18 != 0 && *eax_18 != 0)
                    char* eax_19 = sub_63d4e0(&var_14)
                    int32_t temp5_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                        var_14 = &data_801800
            
            int32_t var_8_8 = 0xffffffff
        else
            if (eax_4[0xd].b != 0)
                arg3[2] += var_20
                *arg5 = eax_4[9]
                *arg4 = 1
                char* eax_24
                eax_24.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_24
            
            int32_t ecx_3
            float xmm0_1
            eax_3, ecx_3, xmm0_1 = sub_6b4f30(arg3, eax_4)
            float xmm3_1 = arg3[3]
            
            if (arg3[6] f< xmm3_1 + xmm0_1)
                xmm3_1 - 0f
                eax_3:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
                    | (xmm3_1 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_6b6c09
                
                int32_t var_44_6 = ecx_3
                sub_6b5090(arg3, eax_4, xmm0_1)
                arg3[2] += var_20
                float eax_20
                eax_20.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_20
            
            int32_t var_44_1 = ecx_3
            sub_6b5090(arg3, eax_4, xmm0_1)
            arg3[2] += var_20
        
        eax_3 = arg3[2]
        int32_t temp2_1 = arg3[1]
        
        if (eax_3 s> temp2_1)
            break
        
        if (eax_3 == temp2_1)
            eax_3.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3

sub_63b870(eax_3, &data_801800, "wrapperData.mCurrentTextPtr <= wrapperData.mTextLength", 
    "C:\x\ax2017\Engine\Font.cpp", 0x55e, "WrapperLine")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
