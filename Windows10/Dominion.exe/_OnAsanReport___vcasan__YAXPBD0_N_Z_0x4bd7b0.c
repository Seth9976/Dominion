// 函数: ?OnAsanReport@__vcasan@@YAXPBD0_N@Z
// 地址: 0x4bd7b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?OnAsanReport@__vcasan@@YAXPBD0_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_3c = esi
int32_t* edi = arg3
int32_t* var_28 = edi
uint32_t ebx = zx.d(arg4)
uint32_t var_38 = ebx
int32_t ecx_1 = *(data_cc8dc8 + 0x1e1a4)
char* result_17
uint32_t var_40
void* var_30
char* result_11
char var_21_1

if (arg5 == 0)
    var_40 = ebx
    var_30 = sub_4d8f30(ecx_1)
    uint32_t eax_7 = sub_4daf40(&result_11, &result_17)
    int32_t esi_1 = 0
    
    if (eax_7 s> 0)
        var_38 = ebx
        char* result_15 = result_11
        
        while (sub_4db700(*(result_15 + (esi_1 << 2)), 3) == 0)
            esi_1 += 1
            
            if (esi_1 s>= eax_7)
                goto label_4bd8b5
        
        uint32_t ecx_6 = var_38
        var_21_1 = 1
        var_38 = ecx_6
        var_40 = ecx_6
    
    if (eax_7 s<= 0 || *(result_17 + (esi_1 << 2)) == 0x63)
    label_4bd8b5:
        var_21_1 = 0
    
    esi = var_3c
    edi = var_28
else
    var_38 = 2
    var_40 = 2
    void* eax_3 = sub_4d8f30(ecx_1)
    var_30 = eax_3
    var_21_1 = 1
    
    if (*(esi + 0x11a0) s<= 4)
        uint32_t eax_4 = sub_64e7a0(edi)
        sub_665db0(eax_4, &data_8dbba4, eax_4, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_5 = var_38
        var_30 = eax_3
        void* ebx_1
        ebx_1.b = var_21_1
        var_38 = eax_5
        var_40 = eax_5
        var_21_1 = ebx_1.b

void* result = sub_4bc100(esi)
void* result_8 = nullptr
void* result_1 = result
void* result_10 = nullptr

while (true)
    void* result_3
    
    if (result_8 s< 2)
        result_3 = result_8
    else if (result_8 s< 4)
        result_3 = result_8 + 1
    else if (result_8 != 4)
        if (result_8 != 5)
            sub_63b870(result, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x8d0, "PlayerIndexToSlot")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result_3 = result_8
    else
        result_3 = 2
    
    int32_t ecx_8 = *(esi + 0x11a0)
    
    if (ecx_8 - 1 u<= 3)
        result_3 = result_8
    
    if (var_40 != 2 || result_3 s< ecx_8)
        void* _Destination = esi + result_3 * 0x22c + 0x40
        int32_t eax_14 = *(_Destination + 0x14)
        
        if (arg4 == 0)
            if (eax_14 == 0x3e8 && *(_Destination + 0x18) == *(var_30 + 0x42b0))
            label_4bd988:
                char* _Source = &data_801800
                char* _Source_1 = *var_30
                
                if (_Source_1 != 0)
                    _Source = _Source_1
                
                strncpy(_Destination, _Source, 0x10)
                *(_Destination + 0xf) = 0
                *(_Destination + 0x10) = *(var_30 + 8)
        else if (eax_14 == 1 && *(_Destination + 0x18) == *(var_30 + 0x4250))
            goto label_4bd988
        
        result = sub_4bbb30(result_3 * 0x24 + &data_19e4cc0, edi, "tblPlayers", result_3)
        void* result_4 = result
        void* result_5 = result_4
        
        if (result_4 != 0)
            if (var_21_1 != 0 || result_10 s< 4 || arg5 != 0)
                if (result_3 == 0)
                    uint32_t eax_22 = sub_64e7a0(result_4)
                    sub_665db0(eax_22, &data_8db8bc, eax_22, 0x3f800000, 0xffffffff, result_3.b)
                    uint32_t eax_23 = sub_64e7a0(result_4)
                    sub_665db0(eax_23, &data_8db898, eax_23, 0x3f800000, 0xffffffff, result_3.b)
                
                void* _Destination_1 = _Destination
                
                if (result_1 == _Destination_1)
                    uint32_t eax_24 = sub_64e7a0(result_4)
                    sub_665db0(eax_24, &data_8db8a4, eax_24, 0x3f800000, 0xffffffff, 0)
                    _Destination_1 = _Destination
                
                char* result_9
                char* result_2
                sub_4b06c0(_Destination_1, var_3c, &result_2, _Destination_1, &result_9)
                int32_t var_8_1 = 0
                char* result_6 = result_9
                
                if (result_6 != 0xffffffff)
                    *((result_3 << 2) + &data_cb4498) = result_6
                    char* const result_12 = &data_801800
                    result_6 = result_2
                    
                    if (result_6 != 0)
                        result_12 = result_6
                    
                    void* edx_5 = (result_3 << 8) - result_12 + 0x19e4de0
                    
                    do
                        result_6.b = *result_12
                        result_12 = &result_12[1]
                        *(edx_5 + result_12 - 1) = result_6.b
                    while (result_6.b != 0)
                
                int32_t edx_7 = result_3 << 8
                char const* const var_80_6
                int32_t var_7c_9
                char const* const var_78_6
                char* ecx_121
                
                if (edx_7 == 0xfe61b220)
                    var_78_6 = "XString::XString"
                    var_7c_9 = 0x94
                    var_80_6 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_121 = &data_871e0c
                label_4be48d:
                    sub_63b870(result_6, &data_801800, ecx_121, var_80_6, var_7c_9, var_78_6)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                char* const var_4c
                sub_63d720(&var_4c, edx_7 + 0x19e4de0)
                var_8_1.b = 1
                int32_t var_78_4 = 0xffffffff
                sub_666380(&var_4c, &data_8db808, result_4, &var_4c)
                var_8_1.b = 2
                
                if (data_cf65bc != 0)
                    char* eax_26 = var_4c
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        char* eax_27 = sub_63d4e0(&var_4c)
                        int32_t temp1_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                            var_4c = &data_801800
                
                var_8_1.b = 0
                result_6 = *(_Destination + 0x14)
                
                if (result_6 s> 0x3e8)
                    if (result_6 != 0x3e9)
                    label_4be45e:
                        var_78_6 = "GameCreateUpdatePlayers"
                        var_7c_9 = 0x96f
                        var_80_6 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                        ecx_121 = "Halt"
                        goto label_4be48d
                    
                    uint32_t eax_33 = sub_64e7a0(result_4)
                    sub_665db0(eax_33, &data_8db88c, eax_33, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_34 = sub_64e7a0(result_4)
                    sub_665db0(eax_34, &data_8db85c, eax_34, 0x3f800000, 0xffffffff, 0)
                else if (result_6 == 0x3e8)
                label_4bdbb2:
                    uint32_t eax_30 = sub_64e7a0(result_4)
                    sub_665db0(eax_30, &data_8db85c, eax_30, 0x3f800000, 0xffffffff, 0)
                else
                    if (result_6 u> 3)
                        goto label_4be45e
                    
                    switch (result_6)
                        case nullptr
                            uint32_t eax_32 = sub_64e7a0(result_4)
                            sub_665db0(eax_32, &data_8db880, eax_32, 0x3f800000, 0xffffffff, 0)
                        case 1
                            if (*(_Destination + 0x20) == 1)
                                uint32_t eax_29 = sub_64e7a0(result_4)
                                sub_665db0(eax_29, &data_8db82c, eax_29, 0x3f800000, 0xffffffff, 0)
                            
                            goto label_4bdbb2
                        case 2
                            int32_t esi_2 = *(_Destination + 0x18)
                            uint32_t eax_31 = sub_64e7a0(result_5)
                            void** edx_11 = &data_8db868
                            
                            if (esi_2 == 1)
                                edx_11 = &data_8db874
                            
                            sub_665db0(eax_31, edx_11, eax_31, 0x3f800000, 0xffffffff, 0)
                            char* result_7 = result_2
                            char* result_13 = &data_801800
                            
                            if (result_7 != 0)
                                result_13 = result_7
                            
                            void* edx_15 = (result_3 << 8) - result_13 + 0x19e4de0
                            
                            do
                                result_7.b = *result_13
                                result_13 = &result_13[1]
                                *(edx_15 + result_13 - 1) = result_7.b
                            while (result_7.b != 0)
                            
                            result_4 = result_5
                        case 3
                            uint32_t eax_28 = sub_64e7a0(result_4)
                            sub_665db0(eax_28, &data_8db844, eax_28, 0x3f800000, 0xffffffff, 0)
                
                if (arg6 == 1 && arg7 == result_3)
                    uint32_t eax_35 = sub_64e7a0(result_4)
                    sub_665db0(eax_35, &data_8db8ec, eax_35, 0x3f800000, 0xffffffff, 0)
                
                int32_t ecx_44 = *((result_3 << 2) + &data_cb4498)
                
                if (ecx_44 != 0xffffffff)
                    void* eax_36 = sub_624450(ecx_44)
                    uint32_t eax_37 = sub_64e7a0(result_5)
                    sub_665db0(eax_37, eax_36, eax_37, 0x3f800000, 0xffffffff, 0)
                
                int32_t* ecx_47 = edi
                int32_t eax_41
                
                if (arg6 != 1)
                    data_19e3990 = 0
                    uint32_t eax_42 = sub_64e7a0(ecx_47)
                    sub_665db0(eax_42, &data_8dbb5c, eax_42, 0x3f800000, 0xffffffff, 0)
                    eax_41 = data_19e398c
                else
                    void** esi_4
                    
                    if (data_19e3990 != 0)
                        esi_4 = &data_8dbb50
                    else
                        uint32_t eax_38 = sub_64e7a0(ecx_47)
                        sub_665db0(eax_38, &data_8dbb68, eax_38, 0x3f800000, 0xffffffff, 0)
                        esi_4 = &data_8dbb5c
                        ecx_47 = edi
                    
                    uint32_t eax_39 = sub_64e7a0(ecx_47)
                    sub_665db0(eax_39, esi_4, eax_39, 0x3f800000, 0xffffffff, 0)
                    data_19e3990 = 1
                    
                    if (arg7 == 0 || arg7 == 3)
                        eax_41 = 2
                        data_19e398c = 2
                    else
                        eax_41 = 0
                        data_19e398c = 0
                
                void** esi_5
                
                if (eax_41 != 0)
                    esi_5 = &data_8dbb38
                    
                    if (eax_41 != 1)
                        esi_5 = &data_8dbb44
                else
                    esi_5 = &data_8dbb2c
                
                uint32_t eax_43 = sub_64e7a0(edi)
                sub_665db0(eax_43, esi_5, eax_43, 0x3f800000, 0xffffffff, 0)
                int32_t ebx_3 = 0
                int32_t edi_2 = 0
                
                for (int32_t i = 0; i s< 0x1160; )
                    result = sub_4bbdb0()
                    int32_t ecx_53 = *(i + result + 0x54)
                    
                    if (ecx_53 != 0 && (ecx_53 != 2 || *(i + result + 0x58) != 1) && arg7 != edi_2)
                        ebx_3 += 1
                    
                    i += 0x22c
                    edi_2 += 1
                
                void* eax_62
                int32_t* ecx_81
                
                if (var_38 == 1)
                    int32_t* edi_3 = var_28
                    uint32_t eax_44 = sub_64e7a0(edi_3)
                    sub_665db0(eax_44, &data_8dbb80, eax_44, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_45 = sub_64e7a0(edi_3)
                    sub_665db0(eax_45, &data_8dba90, eax_45, 0x3f800000, 0, 0)
                    uint32_t eax_46 = sub_64e7a0(edi_3)
                    sub_665db0(eax_46, &data_8dba84, eax_46, 0x3f800000, 1, 0)
                    
                    if (arg8 == 0)
                        uint32_t eax_47 = sub_64e7a0(edi_3)
                        sub_665db0(eax_47, &data_8dbab4, eax_47, 0x3f800000, 1, 0)
                        uint32_t eax_48 = sub_64e7a0(edi_3)
                        sub_665db0(eax_48, &data_8dbac0, eax_48, 0x3f800000, 0, 0)
                        uint32_t eax_49 = sub_64e7a0(edi_3)
                        void* eax_50 = sub_665db0(eax_49, &data_8dbacc, eax_49, 0x3f800000, 1, 0)
                        
                        if (ebx_3 s< 2)
                            uint32_t eax_51 = sub_64e7a0(edi_3)
                            eax_50 = sub_665db0(eax_51, &data_8dba3c, eax_51, 0x3f800000, 1, 0)
                        
                        int32_t var_78_5 = 0xffffffff
                        sub_666120(eax_50, &data_8dbb74, edi_3, 2)
                        goto label_4be356
                    
                    if (arg8 != 1)
                        goto label_4be356
                    
                    uint32_t eax_52 = sub_64e7a0(edi_3)
                    result_6 = sub_665db0(eax_52, &data_8dbab4, eax_52, 0x3f800000, 0, 0)
                    void* esi_6 = data_cc8d5c
                    
                    if (esi_6 == 0)
                        var_78_6 = "GetClient"
                        var_7c_9 = 0x7b
                        var_80_6 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                        ecx_121 = "gClient"
                        goto label_4be48d
                    
                    char* result_14 = *(esi_6 + 0x5028)
                    int32_t i_1 = 0
                    int32_t ebx_4 = 0
                    int32_t i_3 = 0
                    result_11 = result_14
                    int32_t var_20[0x3]
                    
                    if (result_14 s> 0)
                        void* esi_7 = esi_6 + 0x2c
                        
                        while (i_1 != 3)
                            int32_t eax_53 = *(esi_7 + 0xc)
                            
                            if (eax_53 == 1 || eax_53 == 2)
                                int32_t edx_19 = 0
                                int32_t edi_4 = *(var_3c + 0x11a0)
                                
                                if (edi_4 s> 0)
                                    void* ecx_72 = var_3c + 0x58
                                    
                                    do
                                        if (*(ecx_72 - 4) == 1 && *ecx_72 == *esi_7)
                                            i_1 = i_3
                                            goto label_4bdfd9
                                        
                                        edx_19 += 1
                                        ecx_72 += 0x22c
                                    while (edx_19 s< edi_4)
                                    
                                    i_1 = i_3
                                
                                var_20[i_1] = *esi_7
                                i_1 += 1
                                i_3 = i_1
                            
                        label_4bdfd9:
                            ebx_4 += 1
                            esi_7 += 0x20
                            
                            if (ebx_4 s>= result_11)
                                break
                        
                        edi_3 = var_28
                    
                    char* result_16 = nullptr
                    int32_t ebx_5 = 0
                    
                    if (i_1 s> 0)
                        do
                            result_17 = result_16
                            result_11 = &result_16[1]
                            int32_t esi_9 = var_20[ebx_5]
                            uint32_t eax_57 = sub_64e7a0(edi_3)
                            sub_665db0(eax_57, &data_8dba60, eax_57, 0x3f800000, 0xffffffff, 0)
                            void* eax_58 = sub_4b3f80()
                            char* result_18 = result_17
                            char* result_19 = result_18
                            *((result_18 << 2) + &data_8dbf54) = esi_9
                            sub_666380(result_18, &data_8db910, var_28, eax_58 + 8)
                            int32_t edx_20 = 0
                            void* ecx_78 = sub_4bbdb0() + 0x58
                            
                            while (true)
                                if (*(ecx_78 - 4) == 1 && *ecx_78 == *(eax_58 + 4))
                                    edi_3 = var_28
                                    uint32_t eax_63 = sub_64e7a0(edi_3)
                                    sub_665db0(eax_63, &data_8dba30, eax_63, 0x3f800000, result_17, 
                                        0)
                                    break
                                
                                edx_20 += 1
                                ecx_78 += 0x22c
                                
                                if (edx_20 s>= 8)
                                    edi_3 = var_28
                                    break
                            
                            result_16 = result_11
                            ebx_5 += 1
                        while (ebx_5 s< i_3)
                    
                    uint32_t eax_61 = sub_64e7a0(edi_3)
                    sub_665db0(eax_61, &data_8dbb20, eax_61, 0x3f800000, result_16, 0)
                    eax_62 = &result_16[1]
                    ecx_81 = edi_3
                    goto label_4be346
                
                if (var_40 == 0)
                    uint32_t eax_64 = sub_64e7a0(var_28)
                    sub_665db0(eax_64, &data_8dbb8c, eax_64, 0x3f800000, 0xffffffff, 0)
                    uint32_t eax_65 = sub_64e7a0(var_28)
                    sub_665db0(eax_65, &data_8dba9c, eax_65, 0x3f800000, 0, 0)
                    uint32_t eax_66 = sub_64e7a0(var_28)
                    sub_665db0(eax_66, &data_8dbaa8, eax_66, 0x3f800000, 1, 0)
                    
                    if (arg8 != 0)
                        if (arg8 != 1)
                            goto label_4be356
                        
                        uint32_t eax_73 = sub_64e7a0(var_28)
                        sub_665db0(eax_73, &data_8dbab4, eax_73, 0x3f800000, 1, 0)
                        void* ecx_105 = data_cc8dc8
                        void* ebx_6 = nullptr
                        int32_t edi_7 = 0
                        int32_t eax_74 = *(ecx_105 + 0x1e1a0)
                        
                        if (eax_74 s<= 0)
                        label_4be324:
                            uint32_t eax_82 = sub_64e7a0(var_28)
                            sub_665db0(eax_82, &data_8dbb14, eax_82, 0x3f800000, ebx_6, 0)
                            ecx_81 = var_28
                            eax_62 = ebx_6 + 1
                        label_4be346:
                            int32_t var_80_5 = 0xffffffff
                            sub_666120(eax_62, &data_8dbb74, ecx_81, eax_62)
                            goto label_4be356
                        
                        result_6 = nullptr
                        result_11 = nullptr
                        
                        while (true)
                            if (edi_7 s>= 0 && edi_7 s< *(ecx_105 + 0x1e1a0))
                                void* esi_10 = result_6 + ecx_105
                                
                                if (esi_10 != 0)
                                    int32_t edx_22 = eax_74
                                    
                                    if (*(esi_10 + 0x42b0) != *(var_30 + 0x42b0))
                                        uint32_t eax_76 = sub_64e7a0(var_28)
                                        sub_665db0(eax_76, &data_8dba54, eax_76, 0x3f800000, 
                                            0xffffffff, 0)
                                        int32_t eax_77 = *(esi_10 + 0x42b0)
                                        void* var_80_4 = ebx_6
                                        *((ebx_6 << 2) + &data_8dbf54) = eax_77
                                        sub_666380(eax_77, &data_8db910, var_28, esi_10)
                                        int32_t i_2 = 0
                                        void* ecx_109 = sub_4bbdb0() + 0x58
                                        
                                        do
                                            if (*(ecx_109 - 4) == 0x3e8
                                                    && *ecx_109 == *(esi_10 + 0x42b0))
                                                uint32_t eax_80 = sub_64e7a0(var_28)
                                                sub_665db0(eax_80, &data_8dba30, eax_80, 
                                                    0x3f800000, ebx_6, 0)
                                                break
                                            
                                            i_2 += 1
                                            ecx_109 += 0x22c
                                        while (i_2 s< 8)
                                        
                                        ecx_105 = data_cc8dc8
                                        ebx_6 += 1
                                        edx_22 = eax_74
                                    
                                    edi_7 += 1
                                    result_6 = &result_11[0x7868]
                                    result_11 = result_6
                                    
                                    if (edi_7 s>= edx_22)
                                        goto label_4be324
                                    
                                    continue
                            
                            var_78_6 = "GetProfileBySlot"
                            var_7c_9 = 0x544
                            var_80_6 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                            ecx_121 = "retval"
                            break
                        
                        goto label_4be48d
                    
                    uint32_t eax_67 = sub_64e7a0(var_28)
                    sub_665db0(eax_67, &data_8dbab4, eax_67, 0x3f800000, 0, 0)
                    uint32_t eax_68 = sub_64e7a0(var_28)
                    sub_665db0(eax_68, &data_8dbae4, eax_68, 0x3f800000, 0, 0)
                    uint32_t eax_69 = sub_64e7a0(var_28)
                    sub_665db0(eax_69, &data_8dbaf0, eax_69, 0x3f800000, 1, 0)
                    uint32_t eax_70 = sub_64e7a0(var_28)
                    sub_665db0(eax_70, &data_8dbafc, eax_70, 0x3f800000, 2, 0)
                    uint32_t eax_71 = sub_64e7a0(var_28)
                    int32_t var_a0_1 = 0xffffffff
                    sub_666120(sub_665db0(eax_71, &data_8dbb08, eax_71, 0x3f800000, 3, 0), 
                        &data_8dbb74, var_28, 4)
                label_4be356:
                    result = result_3
                    
                    if (result != 0 && result != 1)
                        result = _Destination
                        
                        if (*(result + 0x14) != 0)
                            uint32_t eax_83 = sub_64e7a0(result_5)
                            result =
                                sub_665db0(eax_83, &data_8db904, eax_83, 0x3f800000, 0xffffffff, 0)
                
                int32_t var_8_2 = 3
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp2_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp2_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                            result_2 = &data_801800
                
                edi = var_28
                int32_t var_8_3 = 0xffffffff
            else
                uint32_t eax_21 = sub_64e7a0(result_4)
                result = sub_665db0(eax_21, &data_8dbb98, eax_21, 0x3f800000, 0xffffffff, 0)
        
        esi = var_3c
    else
        *((result_3 << 2) + &data_cb4498) = 0xffffffff
        uint32_t eax_11 = sub_64e7a0(edi)
        result = sub_665db0(eax_11, &data_8db880, eax_11, 0x3f800000, result_3, 0)
    
    result_8 = result_10 + 1
    result_10 = result_8
    
    if (result_8 s>= 6)
        break

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
