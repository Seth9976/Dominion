// 函数: sub_5ddf70
// 地址: 0x5ddf70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?Dispatch@InternalContextBase@details@Concurrency@@UAEXPAUDispatchState@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_50 = ebx
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_cf65b8
int32_t xmm2 = data_b7fcdc
int32_t xmm1 = data_b7fce0
int32_t var_1c = xmm2
uint128_t xmm3 = zx.o(*(eax_3 + 0x18))
float xmm4_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
int32_t var_18 = xmm1
int32_t xmm3_1 = _mm_cvtepi32_ps(xmm3)
char const* const var_68
int32_t var_64
char const* const var_60
char* ecx_49

if (xmm4_1 < 0f || xmm3_1 f< 0)
    var_60 = "RectContains"
    var_64 = 0xa4
    var_68 = "C:\x\ax2017\Engine\Rect.cpp"
    ecx_49 = "RectIsNormalized(r)"
else
    if (xmm2 f< 0 || xmm1 f< 0 || xmm4_1 f< xmm2 || xmm3_1 f< xmm1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 4
    
    struct InputHitResult::HitResult::VTable* var_4c
    sub_4af0e0(&var_4c, &var_1c)
    void* var_48
    eax_3 = var_48
    
    if (eax_3 u<= 3)
        switch (eax_3)
            case 2
                char* const esi_1 = &data_801800
                char* const edi_1 = &data_801800
                int32_t var_3c
                char* eax_6 = *(sub_64e7a0(var_3c) + 0x15e0)
                
                if (eax_6 != 0)
                    edi_1 = eax_6
                
                char* var_14
                sub_63d720(&var_14, "drop_cancel")
                char* eax_7 = var_14
                char* const ecx_6 = &data_801800
                char* const edx_2 = edi_1
                
                if (eax_7 != 0)
                    ecx_6 = eax_7
                
                int32_t ebx_3
                
                while (true)
                    ebx.b = *edx_2
                    char temp0_1 = *ecx_6
                    bool c_1 = ebx.b u< temp0_1
                    
                    if (ebx.b == temp0_1)
                        if (ebx.b == 0)
                            ebx_3 = 0
                            break
                        
                        ebx.b = edx_2[1]
                        char temp1_1 = ecx_6[1]
                        c_1 = ebx.b u< temp1_1
                        
                        if (ebx.b == temp1_1)
                            edx_2 = &edx_2[2]
                            ecx_6 = &ecx_6[2]
                            
                            if (ebx.b != 0)
                                continue
                            
                            ebx_3 = 0
                            break
                    
                    ebx_3 = sbb.d(ebx, ebx, c_1) | 1
                    break
                
                int32_t var_8_1 = 0
                
                if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
                    char* eax_8 = sub_63d4e0(&var_14)
                    int32_t temp2_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                
                int32_t var_8_2 = 0xffffffff
                
                if (ebx_3 != 0)
                    sub_63d720(&var_14, "btn_drop_reveal_left")
                    char* eax_9 = var_14
                    char* const ecx_10 = &data_801800
                    char* const edx_5 = edi_1
                    
                    if (eax_9 != 0)
                        ecx_10 = eax_9
                    
                    int32_t ebx_5
                    
                    while (true)
                        ebx_3.b = *edx_5
                        char temp3_1 = *ecx_10
                        bool c_2 = ebx_3.b u< temp3_1
                        
                        if (ebx_3.b == temp3_1)
                            if (ebx_3.b == 0)
                                ebx_5 = 0
                                break
                            
                            ebx_3.b = edx_5[1]
                            char temp4_1 = ecx_10[1]
                            c_2 = ebx_3.b u< temp4_1
                            
                            if (ebx_3.b == temp4_1)
                                edx_5 = &edx_5[2]
                                ecx_10 = &ecx_10[2]
                                
                                if (ebx_3.b != 0)
                                    continue
                                
                                ebx_5 = 0
                                break
                        
                        ebx_5 = sbb.d(ebx_3, ebx_3, c_2) | 1
                        break
                    
                    int32_t var_8_3 = 1
                    
                    if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
                        char* eax_10 = sub_63d4e0(&var_14)
                        int32_t temp5_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                    
                    int32_t var_8_4 = 0xffffffff
                    
                    if (ebx_5 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return ebx_5 + 1
                    
                    sub_63d720(&var_14, "btn_drop_reveal_right")
                    char* eax_12 = var_14
                    char* const ecx_16 = &data_801800
                    char* const edx_8 = edi_1
                    
                    if (eax_12 != 0)
                        ecx_16 = eax_12
                    
                    int32_t ebx_8
                    
                    while (true)
                        ebx_5.b = *edx_8
                        char temp6_1 = *ecx_16
                        bool c_3 = ebx_5.b u< temp6_1
                        
                        if (ebx_5.b == temp6_1)
                            if (ebx_5.b == 0)
                                ebx_8 = 0
                                break
                            
                            ebx_5.b = edx_8[1]
                            char temp7_1 = ecx_16[1]
                            c_3 = ebx_5.b u< temp7_1
                            
                            if (ebx_5.b == temp7_1)
                                edx_8 = &edx_8[2]
                                ecx_16 = &ecx_16[2]
                                
                                if (ebx_5.b != 0)
                                    continue
                                
                                ebx_8 = 0
                                break
                        
                        ebx_8 = sbb.d(ebx_5, ebx_5, c_3) | 1
                        break
                    
                    int32_t var_8_5 = 2
                    
                    if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
                        char* eax_13 = sub_63d4e0(&var_14)
                        int32_t temp8_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    int32_t var_8_6 = 0xffffffff
                    
                    if (ebx_8 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return ebx_8 + 2
                    
                    sub_63d720(&var_14, "btn_drop_reveal")
                    char* eax_15 = var_14
                    char* const ecx_22 = &data_801800
                    char* const edx_11 = edi_1
                    
                    if (eax_15 != 0)
                        ecx_22 = eax_15
                    
                    int32_t ebx_11
                    
                    while (true)
                        ebx_8.b = *edx_11
                        char temp9_1 = *ecx_22
                        bool c_4 = ebx_8.b u< temp9_1
                        
                        if (ebx_8.b == temp9_1)
                            if (ebx_8.b == 0)
                                ebx_11 = 0
                                break
                            
                            ebx_8.b = edx_11[1]
                            char temp10_1 = ecx_22[1]
                            c_4 = ebx_8.b u< temp10_1
                            
                            if (ebx_8.b == temp10_1)
                                edx_11 = &edx_11[2]
                                ecx_22 = &ecx_22[2]
                                
                                if (ebx_8.b != 0)
                                    continue
                                
                                ebx_11 = 0
                                break
                        
                        ebx_11 = sbb.d(ebx_8, ebx_8, c_4) | 1
                        break
                    
                    int32_t var_8_7 = 3
                    
                    if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
                        char* eax_16 = sub_63d4e0(&var_14)
                        int32_t temp11_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_8 = 0xffffffff
                    
                    if (ebx_11 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    sub_63d720(&var_14, "btn_drop_hand")
                    char* eax_18 = var_14
                    char* const ecx_28 = &data_801800
                    char* const edx_14 = edi_1
                    
                    if (eax_18 != 0)
                        ecx_28 = eax_18
                    
                    int32_t ebx_14
                    
                    while (true)
                        ebx_11.b = *edx_14
                        char temp12_1 = *ecx_28
                        bool c_5 = ebx_11.b u< temp12_1
                        
                        if (ebx_11.b == temp12_1)
                            if (ebx_11.b == 0)
                                ebx_14 = 0
                                break
                            
                            ebx_11.b = edx_14[1]
                            char temp13_1 = ecx_28[1]
                            c_5 = ebx_11.b u< temp13_1
                            
                            if (ebx_11.b == temp13_1)
                                edx_14 = &edx_14[2]
                                ecx_28 = &ecx_28[2]
                                
                                if (ebx_11.b != 0)
                                    continue
                                
                                ebx_14 = 0
                                break
                        
                        ebx_14 = sbb.d(ebx_11, ebx_11, c_5) | 1
                        break
                    
                    int32_t var_8_9 = 4
                    
                    if (data_cf65bc != 0 && eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(&var_14)
                        int32_t temp14_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    
                    int32_t var_8_10 = 0xffffffff
                    
                    if (ebx_14 != 0)
                        sub_63d720(&var_14, "drop_hand")
                        char* eax_20 = var_14
                        char* ecx_32 = &data_801800
                        char* const edx_17 = edi_1
                        
                        if (eax_20 != 0)
                            ecx_32 = eax_20
                        
                        int32_t ebx_16
                        
                        while (true)
                            ebx_14.b = *edx_17
                            char temp15_1 = *ecx_32
                            bool c_6 = ebx_14.b u< temp15_1
                            
                            if (ebx_14.b == temp15_1)
                                if (ebx_14.b == 0)
                                    ebx_16 = 0
                                    break
                                
                                ebx_14.b = edx_17[1]
                                char temp16_1 = ecx_32[1]
                                c_6 = ebx_14.b u< temp16_1
                                
                                if (ebx_14.b == temp16_1)
                                    edx_17 = &edx_17[2]
                                    ecx_32 = &ecx_32[2]
                                    
                                    if (ebx_14.b != 0)
                                        continue
                                    
                                    ebx_16 = 0
                                    break
                            
                            ebx_16 = sbb.d(ebx_14, ebx_14, c_6) | 1
                            break
                        
                        int32_t var_8_11 = 5
                        
                        if (data_cf65bc != 0 && eax_20 != 0 && *eax_20 != 0)
                            char* eax_21 = sub_63d4e0(&var_14)
                            int32_t temp17_1 = *(eax_21 + 4)
                            *(eax_21 + 4) -= 1
                            
                            if (temp17_1 == 1)
                                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                        
                        int32_t var_8_12 = 0xffffffff
                        
                        if (ebx_16 != 0)
                            sub_63d720(&var_14, "drop_play")
                            char* eax_22 = var_14
                            char* ecx_36 = &data_801800
                            char* const edx_20 = edi_1
                            
                            if (eax_22 != 0)
                                ecx_36 = eax_22
                            
                            int32_t ebx_18
                            
                            while (true)
                                ebx_16.b = *edx_20
                                char temp18_1 = *ecx_36
                                bool c_7 = ebx_16.b u< temp18_1
                                
                                if (ebx_16.b == temp18_1)
                                    if (ebx_16.b == 0)
                                        ebx_18 = 0
                                        break
                                    
                                    ebx_16.b = edx_20[1]
                                    char temp19_1 = ecx_36[1]
                                    c_7 = ebx_16.b u< temp19_1
                                    
                                    if (ebx_16.b == temp19_1)
                                        edx_20 = &edx_20[2]
                                        ecx_36 = &ecx_36[2]
                                        
                                        if (ebx_16.b != 0)
                                            continue
                                        
                                        ebx_18 = 0
                                        break
                                
                                ebx_18 = sbb.d(ebx_16, ebx_16, c_7) | 1
                                break
                            
                            int32_t var_8_13 = 6
                            
                            if (data_cf65bc != 0 && eax_22 != 0 && *eax_22 != 0)
                                char* eax_23 = sub_63d4e0(&var_14)
                                int32_t temp20_1 = *(eax_23 + 4)
                                *(eax_23 + 4) -= 1
                                
                                if (temp20_1 == 1)
                                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                            
                            int32_t var_8_14 = 0xffffffff
                            
                            if (ebx_18 == 0)
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return ebx_18 + 5
                            
                            sub_63d720(&var_14, "drop_kingdom")
                            char* eax_25 = var_14
                            
                            if (eax_25 != 0)
                                esi_1 = eax_25
                            
                            int32_t esi_3
                            
                            while (true)
                                char ecx_42 = *edi_1
                                char temp21_1 = *esi_1
                                bool c_8 = ecx_42 u< temp21_1
                                
                                if (ecx_42 == temp21_1)
                                    if (ecx_42 == 0)
                                        esi_3 = 0
                                        break
                                    
                                    ecx_42 = edi_1[1]
                                    char temp22_1 = esi_1[1]
                                    c_8 = ecx_42 u< temp22_1
                                    
                                    if (ecx_42 == temp22_1)
                                        edi_1 = &edi_1[2]
                                        esi_1 = &esi_1[2]
                                        
                                        if (ecx_42 != 0)
                                            continue
                                        
                                        esi_3 = 0
                                        break
                                
                                esi_3 = sbb.d(esi_1, esi_1, c_8) | 1
                                break
                            
                            int32_t var_8_15 = 7
                            
                            if (data_cf65bc != 0 && eax_25 != 0 && *eax_25 != 0)
                                char* eax_26 = sub_63d4e0(&var_14)
                                int32_t temp23_1 = *(eax_26 + 4)
                                *(eax_26 + 4) -= 1
                                
                                if (temp23_1 == 1)
                                    sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                            
                            int32_t eax_27
                            eax_27.b = esi_3 == 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return (eax_27 << 1) + 4
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 3
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 4
    
    var_60 = "CalcDropTarget"
    var_64 = 0x3c91
    var_68 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_49 = "Halt"

sub_63b870(eax_3, &data_801800, ecx_49, var_68, var_64, var_60)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
