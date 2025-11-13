// 函数: sub_6a2160
// 地址: 0x6a2160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f61d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_24 = arg2
char const* const ecx
uint32_t var_5c

if (data_8c4157 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_40
    var_5c = &var_40
    QueryPerformanceCounter(var_5c)
    eax_3 = var_40
    struct _EXCEPTION_REGISTRATION_RECORD** var_48 = eax_3
    int32_t var_3c
    int32_t var_44_1 = var_3c
    
    if (arg4 u> 0x25)
        var_5c = "AssetTypeGetInfo"
        int32_t var_60_16 = 0xc3
        char const* const var_64_7 = "C:\x\ax2017\Engine\AssetTypeRegistry.cpp"
        ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
    else
        void* eax_5 = data_147b07c + (arg4 << 5)
        char* eax_6 = *(eax_5 + 0x1c)
        int32_t eax_7 = sub_69f030(arg2, arg4)
        eax_3 = sub_69ec60(eax_7)
        var_5c = eax_7
        
        if (arg2 != 0)
            sub_63d720(&var_5c, arg2)
            uint32_t var_1c
            sub_6c5090(&var_1c, arg4)
            int32_t var_8_1 = 0
            char* const var_18 = &data_801800
            var_8_1.b = 1
            char* eax_8 = var_1c
            uint32_t eax_13
            uint32_t ecx_11
            char* const esi_1
            int32_t** edi_1
            
            if (eax_8 != 0 && *eax_8 != 0)
                var_5c = eax_8
                
                if (GetFileAttributesA(var_5c) == 0xffffffff)
                    int32_t** eax_14 = sub_6a1680(arg4)
                    var_5c = arg3
                    edi_1 = eax_14
                    ecx_11 = sub_63d8d0(&var_18, var_5c)
                    esi_1 = var_18
                    goto label_6a24d8
                
                uint32_t eax_10 = var_1c
                char* const ebx_1 = &data_801800
                var_5c = arg6
                char* const edx_3 = &data_801800
                
                if (eax_10 != 0)
                    edx_3 = eax_10
                
                edi_1 = sub_6a70c0(eax_10, edx_3, eax_6, arg5, var_5c)
                
                if (edi_1 != 0)
                    goto label_6a22ca
                
                char* eax_12 = var_1c
                
                if (eax_12 != 0)
                    ebx_1 = eax_12
                
                var_5c = ebx_1
                char* var_60_4 = arg2
                char const* const var_64_3 = "reimport %s failed to read: '%s'"
                sub_63b5f0("reimport %s failed to read: '%s'")
                int32_t var_8_2 = 3
            else if (arg4 != 0x23)
                if (arg4 == 0x18)
                    var_5c = arg3
                    sub_63d8d0(&var_18, var_5c)
                    int32_t** eax_16
                    eax_16, ecx_11 = sub_6a1680(arg4)
                    esi_1 = var_18
                    edi_1 = eax_16
                    goto label_6a24d8
                
                var_5c = arg6
                edi_1 = sub_6a70c0(eax_8, arg3, eax_6, arg5, var_5c)
                
                if (edi_1 != 0)
                    if (arg4 == 0x19 || arg4 == 5)
                    label_6a22ca:
                        var_5c = arg3
                        ecx_11 = sub_63d8d0(&var_18, var_5c)
                        esi_1 = var_18
                        goto label_6a24d8
                    
                    void* esi_2 = edi_1[1]
                    char* const ebx_2 = &data_801800
                    char* var_34
                    char* var_20
                    char* esi_4
                    
                    if (esi_2 == 0)
                    label_6a23b9:
                        sub_63d720(&var_20, &data_801800)
                        esi_4 = var_20
                    else
                        int32_t* esi_3 = *(esi_2 + 4)
                        
                        if (esi_3 == 0)
                            goto label_6a23b9
                        
                        while (true)
                            char* eax_19 = *esi_3
                            char* const _Str1 = &data_801800
                            esi_3 = esi_3[1]
                            var_34 = eax_19
                            var_5c = "importSourcePath"
                            char* _Str1_1 = *eax_19
                            
                            if (_Str1_1 != 0)
                                _Str1 = _Str1_1
                            
                            if (_stricmp(_Str1, var_5c) == 0)
                                break
                            
                            if (esi_3 == 0)
                                goto label_6a23b9
                        
                        char* esi_5 = var_34
                        
                        if (esi_5 == 0)
                            goto label_6a23b9
                        
                        esi_4 = *(esi_5 + 4)
                        var_20 = esi_4
                        
                        if (esi_4 != 0 && *esi_4 != 0)
                            char* eax_31 = sub_63d4e0(&var_20)
                            *(eax_31 + 4) += 1
                    
                    var_8_1.b = 6
                    var_5c = &var_20
                    ecx_11 = sub_63d850(&var_18, var_5c)
                    var_8_1.b = 7
                    
                    if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                        int32_t* eax_21 = sub_63d4e0(&var_20)
                        int32_t temp5_1 = eax_21[1]
                        eax_21[1] -= 1
                        ecx_11 = eax_21[1]
                        
                        if (temp5_1 == 1)
                            ecx_11 = sub_64c080(eax_21, eax_21[3] + 0x10)
                    
                    var_8_1.b = 1
                    esi_1 = var_18
                    
                    if (esi_1 != 0 && *esi_1 != 0)
                        var_5c = ecx_11
                        var_5c = esi_1
                        
                        if (*esi_1 != 0)
                            char* eax_22 = sub_63d4e0(&var_5c)
                            *(eax_22 + 4) += 1
                        
                        sub_6a17e0(&var_20)
                        var_8_1.b = 8
                        char* eax_23 = var_20
                        
                        if (eax_23 != 0)
                            ebx_2 = eax_23
                        
                        var_5c = sub_6c4050(&var_34, ebx_2)
                        var_8_1.b = 9
                        ecx_11 = sub_63d850(&var_18, var_5c)
                        var_8_1.b = 0xa
                        
                        if (data_cf65bc != 0)
                            char* eax_25 = var_34
                            
                            if (eax_25 != 0 && *eax_25 != 0)
                                int32_t* eax_26 = sub_63d4e0(&var_34)
                                int32_t temp8_1 = eax_26[1]
                                eax_26[1] -= 1
                                ecx_11 = eax_26[1]
                                
                                if (temp8_1 == 1)
                                    ecx_11 = sub_64c080(eax_26, eax_26[3] + 0x10)
                        
                        var_8_1.b = 0xb
                        
                        if (data_cf65bc != 0)
                            char* eax_27 = var_20
                            
                            if (eax_27 != 0 && *eax_27 != 0)
                                int32_t* eax_28 = sub_63d4e0(&var_20)
                                int32_t temp9_1 = eax_28[1]
                                eax_28[1] -= 1
                                ecx_11 = eax_28[1]
                                
                                if (temp9_1 == 1)
                                    ecx_11 = sub_64c080(eax_28, eax_28[3] + 0x10)
                        
                        var_8_1.b = 1
                        esi_1 = var_18
                    
                    goto label_6a24d8
                
                var_5c = "sys\failureasset"
                
                if (strstr(arg3, var_5c) == 0)
                    var_5c = arg3
                    char* var_60_7 = arg2
                    char const* const var_64_4 = "reimport %s failed to read: '%s'"
                    sub_63b5f0("reimport %s failed to read: '%s'")
                
                int32_t var_8_3 = 5
            else
                var_5c = arg3
                sub_63d8d0(&var_18, var_5c)
                int32_t** eax_15
                eax_15, ecx_11 = sub_6a1680(arg4)
                esi_1 = var_18
                edi_1 = eax_15
            label_6a24d8:
                
                if (*(eax_5 + 0xc) == 0)
                label_6a26e7:
                    var_5c = ecx_11
                    sub_63d720(&var_5c, var_24)
                    sub_69faf0(arg4, edi_1)
                    int32_t eax_37 = *(eax_5 + 4)
                    
                    if (eax_37 != 0)
                        var_5c = *edi_1
                        eax_37(var_24, var_5c, eax_2)
                    
                    eax_13 = sub_6960b0(eax_7)
                    
                    if (eax_13.b != 0)
                        var_5c = sub_64b4d0(&var_48)
                        uint8_t* var_60_15 = arg3
                        char const* const var_64_6 = "Imported source asset %s %d ms"
                        sub_63b5f0("Imported source asset %s %d ms")
                        var_8_1.b = 0x14
                        char* eax_39
                        
                        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                            eax_39 = sub_63d4e0(&var_18)
                            int32_t temp1_1 = *(eax_39 + 4)
                            *(eax_39 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                        
                        int32_t var_8_8 = 0x15
                        
                        if (data_cf65bc != 0)
                            eax_39 = var_1c
                            
                            if (eax_39 != 0 && *eax_39 != 0)
                                eax_39 = sub_63d4e0(&var_1c)
                                int32_t temp3_1 = *(eax_39 + 4)
                                *(eax_39 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                        
                        eax_39.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_39
                    
                    var_8_1.b = 0x12
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != eax_13.b)
                        eax_13 = sub_63d4e0(&var_18)
                        int32_t temp2_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    int32_t var_8_7 = 0x13
                else if (esi_1 == 0 || *esi_1 == 0)
                    if ((edi_1[2].b & 1) == 0)
                        sub_69cee0(*edi_1, edi_1[3])
                        *edi_1 = nullptr
                    
                    char** ecx_42 = edi_1[1]
                    
                    if (ecx_42 != 0)
                        sub_6a3220(ecx_42)
                        edi_1[1] = 0
                    
                    var_5c = edi_1
                    _aligned_free(var_5c)
                    var_5c = var_24
                    char const* const var_60_13 = "reimport failed because no source path: '%s'"
                    sub_63b5f0("reimport failed because no source path: '%s'")
                    var_8_1.b = 0xc
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                        eax_13 = sub_63d4e0(&var_18)
                        int32_t temp4_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    int32_t var_8_6 = 0xd
                else
                    var_5c = esi_1
                    uint32_t eax_30
                    uint32_t ecx_30
                    eax_30, ecx_30 = GetFileAttributesA(var_5c)
                    
                    if (eax_30 != 0xffffffff)
                        var_5c = ecx_30
                        var_5c = esi_1
                        
                        if (*esi_1 != 0)
                            char* eax_32 = sub_63d4e0(&var_5c)
                            *(eax_32 + 4) += 1
                        
                        char eax_35
                        eax_35, ecx_11 = (*(eax_5 + 0xc))(var_24, edi_1)
                        
                        if (eax_35 != 0)
                            goto label_6a26e7
                        
                        if ((edi_1[2].b & 1) == 0)
                            sub_69cee0(*edi_1, edi_1[3])
                            *edi_1 = nullptr
                        
                        char** ecx_38 = edi_1[1]
                        
                        if (ecx_38 != 0)
                            sub_6a3220(ecx_38)
                            edi_1[1] = 0
                        
                        var_5c = edi_1
                        _aligned_free(var_5c)
                        var_5c = var_24
                        char const* const var_60_12 = "reimport failed: '%s'"
                        sub_63b5f0("reimport failed: '%s'")
                        var_8_1.b = 0x10
                        
                        if (data_cf65bc != 0 && *esi_1 != 0)
                            eax_13 = sub_63d4e0(&var_18)
                            int32_t temp7_1 = *(eax_13 + 4)
                            *(eax_13 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        
                        int32_t var_8_5 = 0x11
                    else
                        if ((edi_1[2].b & 1) == 0)
                            sub_69cee0(*edi_1, edi_1[3])
                            *edi_1 = nullptr
                        
                        char** ecx_32 = edi_1[1]
                        
                        if (ecx_32 != 0)
                            sub_6a3220(ecx_32)
                            edi_1[1] = 0
                        
                        var_5c = edi_1
                        _aligned_free(var_5c)
                        var_5c = "sys\failureasset"
                        
                        if (strstr(arg3, var_5c) == 0)
                            var_5c = esi_1
                            char const* const var_60_10 =
                                "reimport failed because file doesn't exist: '%s'"
                            sub_63b5f0("reimport failed because file doesn't exist: '%s'")
                        
                        var_8_1.b = 0xe
                        
                        if (data_cf65bc != 0 && *esi_1 != 0)
                            eax_13 = sub_63d4e0(&var_18)
                            int32_t temp6_1 = *(eax_13 + 4)
                            *(eax_13 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        
                        int32_t var_8_4 = 0xf
            
            if (data_cf65bc != 0)
                eax_13 = var_1c
                
                if (eax_13 != 0 && *eax_13 != 0)
                    eax_13 = sub_63d4e0(&var_1c)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            eax_13.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        char const* const var_60_2 = "XString::XString"
        int32_t var_64_2 = 0x94
        char const* const var_68_1 = "C:\x\ax2017\Engine\xString.cpp"
        ecx = &data_871e0c
else
    var_5c = "AssetUtilImportSource"
    int32_t var_60_1 = 0x179
    char const* const var_64_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx = "gCompilingMode"
sub_63b870(eax_3, &data_801800, ecx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
