// 函数: sub_4b3380
// 地址: 0x4b3380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_get_full_path_name_narrow_acp_or_utf8@U__crt_win32_buffer_no_resizing@@@@YAHQBDAAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_468 = esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_cc8d5c
char const* const var_47c_1
int32_t var_478_1
char const* const var_474
char* ecx_1

if (edi != 0)
    float xmm1_1 = data_8c4634
    float xmm0_2 = xmm1_1 * 1000f
    float xmm0_3
    
    if (0 f<= xmm0_2)
        xmm0_3 = xmm0_2 + 0.5f
    else
        xmm0_3 = xmm0_2 - 0.5f
    
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(int.d(xmm0_3))
    int32_t temp0_1 = *edi
    *edi += eax_4
    result = edi[6]
    edi[1] = adc.d(edx_1, edi[1], temp0_1 + eax_4 u< temp0_1)
    
    if (result u> 3)
        var_474 = "ClientNetworkUpdate"
        var_478_1 = 0x1da
        ecx_1 = "Halt"
        var_47c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    else
        switch (result)
            case nullptr, 3
                void* eax_5
                int32_t ecx_4
                eax_5, ecx_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                
                if (*(eax_5 + 0x42b4) != 0)
                    goto label_4b3515
                
                if (edi[6] == 3 && edi[5] == edi[0x1d66])
                    int32_t ecx_5 = *edi
                    bool c_2 = ecx_5 u< edi[0x1d68]
                    int32_t eax_6 = edi[1]
                    int32_t temp4_1 = edi[0x1d69]
                    bool s_1 = sbb.d(eax_6, temp4_1, c_2) s< 0
                    bool o_1 = unimplemented  {sbb eax, dword [edi+0x75a4]}
                    void* var_430_1 = sbb.d(eax_6, temp4_1, c_2)
                    
                    if (not(s_1) && ((sbb.d(eax_6, temp4_1, c_2) != 0 && s_1 == o_1)
                            || ecx_5 - edi[0x1d68] u> 0x3a98))
                        ecx_4.b = 1
                        eax_5, ecx_4 = sub_4aeb40(ecx_4.b)
                        xmm1_1 = data_8c4634
                        edi[7] = 0
                
                float xmm0_6 = _mm_max_ss(edi[0x1d6a] f- xmm1_1, 0)
                xmm0_6 f- 0
                edi[0x1d6a] = xmm0_6
                eax_5:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
                    | (xmm0_6 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_4b3515
                
                int32_t eax_7 = edi[6]
                
                if (eax_7 != 0)
                    if (eax_7 == 3)
                        ecx_4.b = data_8db664 == 0x13
                        sub_4af000(ecx_4)
                    
                    goto label_4b3515
                
                result = edi[7]
                
                if (result u<= 8)
                    switch (result)
                        case nullptr, 1, 2
                            sub_4aea20()
                            edi[0x1d6a] = 0x3f800000
                        case 4, 5, 6, 8
                            sub_4aea20()
                            edi[0x1d6a] = 0x41700000
                        case 7
                            sub_4aea20()
                            edi[0x1d6a] = 0x42700000
                    
                    goto label_4b3515
                
                var_474 = "ClientKeepConnected"
                var_478_1 = 0x1c3
                ecx_1 = "Halt"
                var_47c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
            case 1, 2
            label_4b3515:
                sub_4b2450(esi)
                result = data_cc8d5c
                
                if (result == 0)
                    goto label_4b33b8
                
                int32_t ecx_7
                
                if (result[0x141a] == 2)
                    ecx_7 = *sub_4b9480()
                else
                    ecx_7 = 0
                
                int32_t var_474_1 = sub_4b2bd0(ecx_7)
                sub_4bb570()
                sub_4d40e0(data_8c4634)
                result = sub_5ed960()
                edi[0x1d6b].b = 0
                char* const result_1
                
                if (edi[0x1d6c] == 1)
                    result_1 = &data_801800
                    int32_t var_8_1 = 0
                    sub_63d5e0(result, 2, &result_1, 0)
                    char* const result_2 = result_1
                    *result_2 = 0x4350
                    result_2[2] = 0
                    result = sub_4b3db0(&result_1)
                    edi[0x1d6c] = 0
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp5_1 = result[1]
                            result[1] -= 1
                            
                            if (temp5_1 == 1)
                                result = sub_64c080(result, &result[3][2])
                                result_1 = &data_801800
                    
                    int32_t var_8_3 = 0xffffffff
                
                if (data_bf23b8 != 1)
                label_4b36f8:
                    
                    if (data_bf23b8 == 0)
                        goto label_4b370c
                    
                    goto label_4b3706
                
                if (data_c21410 == 0)
                label_4b3706:
                    result = EnterCriticalSection(&data_bf23e8)
                label_4b370c:
                    int32_t var_8_4 = 2
                    int32_t ebx = 0
                    char* result_3 = data_c1c800
                    result_1 = result_3
                    
                    if (result_3 s> 0)
                        result = result_1
                        void* esi_3 = &data_bf2400
                        
                        do
                            if (*(esi_3 + 0x544) != 2)
                                void* eax_14 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                                uint32_t eax_15 = sub_4b3130(esi_3 + 4, *esi_3)
                                int32_t var_430_2
                                
                                if (eax_15 != 0)
                                    var_430_2 = sub_4db5f0(eax_15)
                                else
                                    void* var_474_5 = esi_3 + 4
                                    sub_63b7f0("Unknown DLC for sku %s")
                                    var_430_2 = 0
                                
                                if (*(esi_3 + 0x544) != 1)
                                    *(eax_14 + 0x7450) = 0
                                    *(esi_3 + 0x544) = 1
                                
                                if (edi[6] == 3 && (*(esi_3 + 0x44) != 0 || *(esi_3 + 0x144) != 0))
                                    char* var_45c = *(eax_14 + 0x424c)
                                    int32_t var_458_1 = *(eax_14 + 0x4250)
                                    char* eax_20 = *(eax_14 + 0x4248)
                                    char* const ecx_23 = &data_801800
                                    
                                    if (eax_20 != 0)
                                        ecx_23 = eax_20
                                    
                                    int32_t var_44c_1 = var_430_2
                                    int32_t eax_22 = *esi_3
                                    char* const var_454_1 = ecx_23
                                    int32_t eax_23
                                    
                                    switch (eax_22)
                                        case 1
                                            eax_23 = 5
                                        label_4b3841:
                                            int32_t var_448_1 = eax_23
                                            void* var_43c_1 = esi_3 + 0x144
                                            void* var_444_1 = esi_3 + 0x44
                                            sub_68b720(&var_45c, 0xf42b9, edi[5], data_1597cf8, 
                                                &var_45c)
                                            *(esi_3 + 0x544) = 2
                                        case 3
                                            eax_23 = 3
                                            goto label_4b3841
                                        case 4
                                            eax_23 = 4
                                            goto label_4b3841
                                        default
                                            sub_63b870(eax_22, &data_801800, "Halt", 
                                                "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 
                                                0x928, "GetEntitlementSource")
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                
                                result = result_1
                            
                            ebx += 1
                            esi_3 += 0x548
                        while (ebx s< result)
                    
                    if (data_bf23b8 != 0)
                        result = LeaveCriticalSection(&data_bf23e8)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    CookieCheckFunction(result)
                    return result
                
                data_c21410 = 0
                void var_434
                int32_t* eax_11 =
                    (*(**SteamInternal_ContextInit(&data_cb4530, eax_2) + 8))(&var_434)
                int32_t var_420_1 = eax_11[1]
                uint32_t count = data_c2140c
                uint32_t count_1 = count
                int32_t var_424 = *eax_11
                void var_41c
                memcpy(&var_41c, 0xc2100c, count)
                result = data_cc8d5c
                
                if (result != 0)
                    if (result[6] == 3)
                        result = result[5]
                        void* ecx_15 = data_147abf4
                        
                        if (result != 0)
                            uint32_t edx_5 = zx.d(result.w)
                            
                            if (edx_5 u< *(ecx_15 + 4))
                                void* esi_2 = edx_5 * 0x64 + *ecx_15
                                
                                if (*(esi_2 + 0x60) == result && esi_2 != 0)
                                    int32_t var_474_4 = 0xf42ba
                                    sub_689e00(result, 0x410, esi_2 + 0x50)
                                    result = sub_689be0(&var_424, 0x410, esi_2 + 0x50, &var_424)
                    
                    goto label_4b36f8
                
                var_474 = "GetClient"
                var_478_1 = 0x7b
                var_47c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                ecx_1 = "gClient"
else
label_4b33b8:
    var_474 = "GetClient"
    var_478_1 = 0x7b
    var_47c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(result, &data_801800, ecx_1, var_47c_1, var_478_1, var_474)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
