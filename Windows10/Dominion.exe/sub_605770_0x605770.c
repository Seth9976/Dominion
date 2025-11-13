// 函数: sub_605770
// 地址: 0x605770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?free_dbg_nolock@@YAXQAXH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
char* const var_20 = nullptr
int32_t* result = data_cc8d5c
void* var_18 = nullptr

if (result != 0)
    if (result[0x141a] != 2)
    label_60615d:
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    result = sub_4b9480()
    int32_t* result_1 = result
    
    if (result[0xb] != 1)
        goto label_60615d
    
    int32_t ebx_1 = 0
    int32_t var_50_1 = 0
    
    if (result[0x46a] s<= 0)
        goto label_60615d
    
    while (true)
        int32_t var_54
        
        if (sub_4b96e0(result, ebx_1, result, &var_54) != 0)
            int32_t edi_1 = var_54
            
            if (edi_1 s<= 0)
                edi_1 = 0
            
            result = data_cc8d5c
            var_54 = edi_1
            
            if (result == 0)
                break
            
            int32_t ecx_1 = data_b604e0
            int32_t eax_4
            
            if (ebx_1 == result[0x1d64])
                eax_4 = ecx_1
                
                if (ecx_1 == 0xffffffff)
                    eax_4 = 0
            
            char* const var_14
            
            if (ebx_1 != result[0x1d64] || ebx_1 != eax_4)
                if (ecx_1 == 0xffffffff)
                    ecx_1 = 0
                
                void* esi_7 = ebx_1 - ecx_1
                void* ebx_2 = esi_7 + sub_4b95e0()
                
                if (esi_7 s>= 0)
                    ebx_2 = esi_7
                
                uint32_t eax_39 = sub_64e7a0(arg1)
                sub_665db0(eax_39, &data_be5134, eax_39, 0x3f800000, ebx_2 - 1, 0)
                
                if (result_1[0xa] == 5)
                    uint32_t eax_41 = sub_64e7a0(arg1)
                    sub_665db0(eax_41, &data_be5140, eax_41, 0x3f800000, ebx_2 - 1, 0)
                
                int32_t var_8_3 = 0xe
                char* esi_10 = var_18 | 1
                var_14 = &data_801800
                var_20 = esi_10
                
                if (edi_1 s<= 0x15180)
                    if (edi_1 s<= 0xe10)
                        int32_t var_6c_21 = edi_1 s% 0x3c
                        int32_t var_70_5 = edi_1 s/ 0x3c
                        var_8_3.b = 0x19
                        char* var_4c
                        sub_63d850(&var_14, sub_63df30(&var_4c, "%02d:%02d"))
                        var_8_3.b = 0x1a
                        
                        if (data_cf65bc != 0)
                            char* eax_67 = var_4c
                            
                            if (eax_67 != 0 && *eax_67 != 0)
                                char* eax_68 = sub_63d4e0(&var_4c)
                                int32_t temp0_1 = *(eax_68 + 4)
                                *(eax_68 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                                    var_4c = &data_801800
                        
                        var_8_3.b = 0xe
                    else
                        int32_t eax_56 = edi_1 s/ 0xe10
                        
                        if (eax_56 != 1)
                            int32_t var_6c_19 = eax_56
                            var_8_3.b = 0x17
                            char* var_48
                            sub_63d850(&var_14, sub_63df30(&var_48, "%d hours"))
                            var_8_3.b = 0x18
                            
                            if (data_cf65bc != 0)
                                char* eax_61 = var_48
                                
                                if (eax_61 != 0 && *eax_61 != 0)
                                    char* eax_62 = sub_63d4e0(&var_48)
                                    int32_t temp6_1 = *(eax_62 + 4)
                                    *(eax_62 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_64c080(eax_62, *(eax_62 + 0xc) + 0x10)
                                        var_48 = &data_801800
                            
                            var_8_3.b = 0xe
                        else
                            int32_t var_6c_17 = eax_56
                            var_8_3.b = 0x15
                            char* var_44
                            sub_63d850(&var_14, sub_63df30(&var_44, "%d hour"))
                            var_8_3.b = 0x16
                            
                            if (data_cf65bc != 0)
                                char* eax_58 = var_44
                                
                                if (eax_58 != 0 && *eax_58 != 0)
                                    char* eax_59 = sub_63d4e0(&var_44)
                                    int32_t temp7_1 = *(eax_59 + 4)
                                    *(eax_59 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                                        var_44 = &data_801800
                            
                            var_8_3.b = 0xe
                else if (edi_1 - 0xa8c0 u>= 0x15180)
                    int32_t var_6c_15 = (edi_1 + 0xa8c0) s/ 0x15180
                    var_8_3.b = 0x13
                    char* var_40
                    sub_63d850(&var_14, sub_63df30(&var_40, "%d days"))
                    var_8_3.b = 0x14
                    
                    if (data_cf65bc != 0)
                        char* eax_51 = var_40
                        
                        if (eax_51 != 0 && *eax_51 != 0)
                            char* eax_52 = sub_63d4e0(&var_40)
                            int32_t temp1_1 = *(eax_52 + 4)
                            *(eax_52 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                                var_40 = &data_801800
                    
                    var_8_3.b = 0xe
                else
                    int32_t var_6c_13 = 1
                    var_8_3.b = 0x11
                    char* var_3c
                    sub_63d850(&var_14, sub_63df30(&var_3c, "%d day"))
                    var_8_3.b = 0x12
                    
                    if (data_cf65bc != 0)
                        char* eax_44 = var_3c
                        
                        if (eax_44 != 0 && *eax_44 != 0)
                            char* eax_45 = sub_63d4e0(&var_3c)
                            int32_t temp2_1 = *(eax_45 + 4)
                            *(eax_45 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                                var_3c = &data_801800
                    
                    var_8_3.b = 0xe
                
                void* var_6c_23 = ebx_2 - 1
                sub_666380(&var_14, &data_be514c, arg1, &var_14)
                var_18 = esi_10 & 0xfffffffe
                int32_t var_8_4 = 0x1b
                
                if (data_cf65bc != 0)
                    char* const eax_70 = var_14
                    
                    if (eax_70 != 0 && *eax_70 != 0)
                        char* eax_71 = sub_63d4e0(&var_14)
                        int32_t temp10_1 = *(eax_71 + 4)
                        *(eax_71 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                ebx_1 = var_50_1
            else
                uint32_t eax_5 = sub_64e7a0(arg1)
                sub_665db0(eax_5, &data_be5158, eax_5, 0x3f800000, 0xffffffff, 0)
                
                if (result_1[0xa] == 5)
                    uint32_t eax_7 = sub_64e7a0(arg1)
                    sub_665db0(eax_7, &data_be5164, eax_7, 0x3f800000, 0xffffffff, 0)
                
                char* esi_1 = esi | 2
                int32_t var_8_1 = 0
                var_14 = &data_801800
                var_20 = esi_1
                
                if (edi_1 s<= 0x15180)
                    if (edi_1 s<= 0xe10)
                        int32_t var_6c_10 = edi_1 s% 0x3c
                        int32_t var_70_1 = edi_1 s/ 0x3c
                        var_8_1.b = 0xb
                        char* var_38
                        sub_63d850(&var_14, sub_63df30(&var_38, "%02d:%02d"))
                        var_8_1.b = 0xc
                        
                        if (data_cf65bc != 0)
                            char* eax_33 = var_38
                            
                            if (eax_33 != 0 && *eax_33 != 0)
                                char* eax_34 = sub_63d4e0(&var_38)
                                int32_t temp3_1 = *(eax_34 + 4)
                                *(eax_34 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                                    var_38 = &data_801800
                        
                        var_8_1.b = 0
                    else
                        int32_t eax_22 = edi_1 s/ 0xe10
                        
                        if (eax_22 != 1)
                            int32_t var_6c_8 = eax_22
                            var_8_1.b = 9
                            char* var_34
                            sub_63d850(&var_14, sub_63df30(&var_34, "%d hours"))
                            var_8_1.b = 0xa
                            
                            if (data_cf65bc != 0)
                                char* eax_27 = var_34
                                
                                if (eax_27 != 0 && *eax_27 != 0)
                                    char* eax_28 = sub_63d4e0(&var_34)
                                    int32_t temp8_1 = *(eax_28 + 4)
                                    *(eax_28 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                                        var_34 = &data_801800
                            
                            var_8_1.b = 0
                        else
                            int32_t var_6c_6 = eax_22
                            var_8_1.b = 7
                            char* var_30
                            sub_63d850(&var_14, sub_63df30(&var_30, "%d hour"))
                            var_8_1.b = 8
                            
                            if (data_cf65bc != 0)
                                char* eax_24 = var_30
                                
                                if (eax_24 != 0 && *eax_24 != 0)
                                    char* eax_25 = sub_63d4e0(&var_30)
                                    int32_t temp9_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                        var_30 = &data_801800
                            
                            var_8_1.b = 0
                else if (edi_1 - 0xa8c0 u>= 0x15180)
                    int32_t var_6c_4 = (edi_1 + 0xa8c0) s/ 0x15180
                    var_8_1.b = 5
                    char* const var_2c
                    sub_63d850(&var_14, sub_63df30(&var_2c, "%d days"))
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_17 = var_2c
                        
                        if (eax_17 != 0 && *eax_17 != 0)
                            char* eax_18 = sub_63d4e0(&var_2c)
                            int32_t temp4_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                                var_2c = &data_801800
                    
                    var_8_1.b = 0
                else
                    int32_t var_6c_2 = 1
                    var_8_1.b = 3
                    char* const var_28
                    sub_63d850(&var_14, sub_63df30(&var_28, "%d day"))
                    var_8_1.b = 4
                    
                    if (data_cf65bc != 0)
                        char* eax_10 = var_28
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_63d4e0(&var_28)
                            int32_t temp5_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                                var_28 = &data_801800
                    
                    var_8_1.b = 0
                
                int32_t var_6c_12 = 0xffffffff
                sub_666380(&var_14, &data_be5170, arg1, &var_14)
                var_18 = esi_1 & 0xfffffffd
                int32_t var_8_2 = 0xd
                
                if (data_cf65bc != 0)
                    char* const eax_36 = var_14
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_63d4e0(&var_14)
                        int32_t temp11_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                            var_14 = &data_801800
            
            int32_t var_8_5 = 0xffffffff
            
            if (edi_1 == 0 && sub_4b9480()[0xb] != 0x3e8)
                sub_4b9480()[0xb] = 0x3e8
                void* eax_74 = sub_4b9680(&result_1[2], ebx_1)
                var_20 = &data_801800
                int32_t var_8_6 = 0x1c
                var_14 = &data_801800
                var_8_6.b = 0x1d
                int32_t ecx_58 = data_cc8d5c
                
                if (ecx_58 != 0)
                    sub_4b5b20(eax_74, ebx_1 == *(ecx_58 + 0x7590), edi_1 + 1, eax_74, &var_20, 
                        &var_14)
                    eax_74 = data_cc8d5c
                
                if (ecx_58 == 0 || eax_74 == 0)
                    sub_63b870(eax_74, &data_801800, "gClient", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                bool cond:2_1 = ebx_1 != *(eax_74 + 0x7590)
                char* ebx_4 = &data_801800
                char* const esi_15 = var_14
                char* edi_2 = var_20
                data_8db6b0 = 0x20
                
                if (cond:2_1)
                    if (esi_15 != 0)
                        ebx_4 = esi_15
                    
                    char* const ecx_64
                    char* const var_58_2
                    char* const ecx_63
                    
                    if (edi_2 != 0)
                        ecx_63 = edi_2
                        var_58_2 = edi_2
                        
                        if (ecx_63 != 0)
                            goto label_606031
                        
                        ecx_64 = &data_801800
                    else
                        ecx_63 = &data_801800
                        var_58_2 = &data_801800
                    label_606031:
                        void* eax_80 = sub_68caf0(eax_74, nullptr, ecx_63, 0)
                        
                        if (eax_80 != 0)
                            char* eax_81 = *eax_80
                            ecx_64 = &data_801800
                            
                            if (eax_81 != 0)
                                ecx_64 = eax_81
                        else
                            ecx_64 = var_58_2
                    char** eax_82 = sub_63d8d0(&data_8db750, ecx_64)
                    
                    if (ebx_4 == 0)
                        ebx_4 = &data_801800
                    else
                        void* eax_83 = sub_68caf0(eax_82, nullptr, ebx_4, 0)
                        
                        if (eax_83 != 0)
                            char* eax_84 = *eax_83
                            ebx_4 = &data_801800
                            
                            if (eax_84 != 0)
                                ebx_4 = eax_84
                    
                    sub_63d8d0(&data_8db754, ebx_4)
                    sub_63d8d0(&data_8db758, &data_801800)
                    sub_63d8d0(&data_8db75c, &data_801800)
                    data_8db760 = sub_606250
                else
                    if (esi_15 != 0)
                        ebx_4 = esi_15
                    
                    char* ecx_61
                    char* var_58_1
                    char* ecx_60
                    
                    if (edi_2 != 0)
                        ecx_60 = edi_2
                        var_58_1 = edi_2
                        
                        if (ecx_60 != 0)
                            goto label_605f81
                        
                        ecx_61 = &data_801800
                    else
                        ecx_60 = &data_801800
                        var_58_1 = &data_801800
                    label_605f81:
                        void* eax_75 = sub_68caf0(eax_74, nullptr, ecx_60, 0)
                        
                        if (eax_75 != 0)
                            char* eax_76 = *eax_75
                            ecx_61 = &data_801800
                            
                            if (eax_76 != 0)
                                ecx_61 = eax_76
                        else
                            ecx_61 = var_58_1
                    char** eax_77 = sub_63d8d0(&data_8db750, ecx_61)
                    
                    if (ebx_4 == 0)
                        ebx_4 = &data_801800
                    else
                        void* eax_78 = sub_68caf0(eax_77, nullptr, ebx_4, 0)
                        
                        if (eax_78 != 0)
                            char* eax_79 = *eax_78
                            ebx_4 = &data_801800
                            
                            if (eax_79 != 0)
                                ebx_4 = eax_79
                    
                    sub_63d8d0(&data_8db754, ebx_4)
                    sub_63d8d0(&data_8db758, &data_801800)
                    sub_63d8d0(&data_8db75c, &data_801800)
                    data_8db760 = sub_6061d0
                
                data_8db764 = 0
                var_8_6.b = 0x1e
                
                if (data_cf65bc != 0 && esi_15 != 0 && *esi_15 != 0)
                    char* eax_85 = sub_63d4e0(&var_14)
                    int32_t temp12_1 = *(eax_85 + 4)
                    *(eax_85 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_85, *(eax_85 + 0xc) + 0x10)
                        var_14 = &data_801800
                
                int32_t var_8_7 = 0x1f
                
                if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                    char* eax_86 = sub_63d4e0(&var_20)
                    int32_t temp13_1 = *(eax_86 + 4)
                    *(eax_86 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_64c080(eax_86, *(eax_86 + 0xc) + 0x10)
                        var_20 = &data_801800
                
                ebx_1 = var_50_1
                int32_t var_8_8 = 0xffffffff
        
        result = result_1
        ebx_1 += 1
        var_50_1 = ebx_1
        
        if (ebx_1 s>= result[0x46a])
            goto label_60615d
        
        esi = var_18

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
