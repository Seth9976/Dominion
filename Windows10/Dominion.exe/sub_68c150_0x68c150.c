// 函数: sub_68c150
// 地址: 0x68c150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$?Add@?$ListArray@VExternalStatistics@details@Concurrency@@@details@Concurrency@@QAEHPAVExternalStatistics@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[1] != 0x1f)
    sub_63b870(&ExceptionList, &data_801800, "ptr->assetType == ASSET_TYPE_TRANSLATION", 
        "C:\x\ax2017\Engine\Localization.cpp", 0x78, "TranslationGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* edi = sub_5af880(arg1)
int32_t i = 0
int32_t* var_40 = edi
int32_t i_1 = 0

if (edi[4] s> 0)
    int32_t ecx = 0
    int32_t var_44_1 = 0
    
    do
        int32_t* edx_1 = edi[2]
        int32_t esi_2 = i * 0x28
        char* const var_24
        sub_68bd30(i, edx_1[i * 0xa], &var_24, *(edx_1 + ecx + 8))
        int32_t var_14_1 = 0
        char* const var_60 = &data_801800
        char* var_5c = &data_801800
        char* const var_58 = &data_801800
        var_14_1.b = 1
        int104_t var_54_1 = (zx.o(0)).13
        var_54_1:4.d = 1
        int32_t ecx_2 = *(data_147abfc + 0x200)
        int32_t* eax_7 = edi[2] + esi_2
        char* var_70_2 = eax_7[4]
        
        if (ecx_2 == 0)
            sub_63d8d0(&var_60, var_70_2)
        else
            var_14_1.b = 2
            char* const var_30
            sub_63d850(&var_60, ecx_2(&var_30, *edi, *eax_7, eax_7[2], eax_7[6], var_70_2, eax_2))
            var_14_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_9 = var_30
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_63d4e0(&var_30)
                    int32_t temp0_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_30 = &data_801800
            
            var_14_1.b = 1
        
        sub_63d8d0(&var_58, *(esi_2 + edi[2] + 0x18))
        int32_t eax_12 = edi[2]
        var_54_1:0xc.b = 0
        var_54_1:8.d = 0
        char* const _Str1_2 = &data_801800
        eax_12.b = *(esi_2 + eax_12 + 0x20)
        var_54_1:0xd.b = eax_12.b
        var_14_1.b = 4
        char eax_14 = sub_68bfa0(&_Str1_2, "article", &var_58, &_Str1_2)
        char* const _Str1_1 = _Str1_2
        
        if (eax_14 != 0)
            char* const _Str1 = &data_801800
            
            if (_Str1_1 != 0)
                _Str1 = _Str1_1
            
            int32_t ecx_9 = var_54_1:8.d
            
            if (_stricmp(_Str1, "none") == 0)
                ecx_9 = 1
            
            var_54_1:8.d = ecx_9
        
        char* eax_17 = sub_68bfa0(&var_5c, "plural", &var_58, &var_5c)
        char* eax_18
        
        if (eax_17.b == 0)
            char ecx_12 = var_54_1:0xc.b
            eax_18 = 1
            
            if (sub_68bfa0(eax_17, &(*U"{[p\rnm")[2], &var_58, nullptr) != 0)
                ecx_12 = 1
            
            var_54_1:0xc.b = ecx_12
        else
            eax_18 = var_5c
            
            if (eax_18 == 0 || *eax_18 == 0)
                var_54_1:0xc.b = 1
        
        char* eax_20 = sub_68bfa0(eax_18, &(*U"{[p\rnm")[2], &var_58, nullptr)
        char** var_2c
        
        if (eax_20.b == 0)
            char* eax_21 = sub_68bfa0(eax_20, &(*U"{[p\rnm")[5], &var_58, nullptr)
            
            if (eax_21.b == 0)
                char* eax_22 = sub_68bfa0(eax_21, U"f", &var_58, nullptr)
                
                if (eax_22.b == 0)
                    if (sub_68bfa0(eax_22, &(*U"{[p\rnm")[4], &var_58, nullptr) != 0)
                        var_54_1.d = 4
                    else if (*edi == 8)
                        char** edi_1 = var_60
                        var_2c = edi_1
                        
                        if (edi_1 != 0 && *edi_1 != 0)
                            char* eax_24 = sub_63d4e0(&var_2c)
                            *(eax_24 + 4) += 1
                        
                        char* const var_28 = &data_801800
                        var_14_1.b = 6
                        
                        if (sub_68cbb0(&var_28, U"o", &var_2c, &var_28) != 0)
                            var_14_1.b = 7
                            
                            if (data_cf65bc != 0)
                                char* const eax_27 = var_28
                                
                                if (eax_27 != 0 && *eax_27 != 0)
                                    char* eax_28 = sub_63d4e0(&var_28)
                                    int32_t temp4_1 = *(eax_28 + 4)
                                    *(eax_28 + 4) -= 1
                                    
                                    if (temp4_1 == 1)
                                        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                            
                            var_14_1.b = 8
                            goto label_68c51a
                        
                        int32_t eax_37
                        
                        if (sub_68cbb0(&var_28, U"a", &var_2c, &var_28) == 0)
                            var_14_1.b = 0xb
                            
                            if (data_cf65bc != 0)
                                char* const eax_34 = var_28
                                
                                if (eax_34 != 0 && *eax_34 != 0)
                                    char* eax_35 = sub_63d4e0(&var_28)
                                    int32_t temp6_1 = *(eax_35 + 4)
                                    *(eax_35 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                            
                            var_14_1.b = 0xc
                        label_68c51a:
                            
                            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                char* eax_36 = sub_63d4e0(&var_2c)
                                int32_t temp9_1 = *(eax_36 + 4)
                                *(eax_36 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                            
                            eax_37 = 2
                        else
                            var_14_1.b = 9
                            
                            if (data_cf65bc != 0)
                                char* const eax_31 = var_28
                                
                                if (eax_31 != 0 && *eax_31 != 0)
                                    char* eax_32 = sub_63d4e0(&var_28)
                                    int32_t temp7_1 = *(eax_32 + 4)
                                    *(eax_32 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                            
                            var_14_1.b = 0xa
                            
                            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                char* eax_33 = sub_63d4e0(&var_2c)
                                int32_t temp8_1 = *(eax_33 + 4)
                                *(eax_33 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                            
                            eax_37 = 3
                        
                        edi = var_40
                        var_14_1.b = 4
                        var_54_1.d = eax_37
                    else
                        var_54_1.d = 1
                else
                    var_54_1.d = 3
            else
                var_54_1.d = 2
        else
            var_54_1.d = 5
        
        var_54_1:0xe.b = 0
        sub_693230(data_147abfc + *edi * 0xc, &var_24, &var_60)
        int32_t eax_41 = i_1 * 5
        char* const var_34
        char** eax_42 = sub_68bd30(eax_41, *(edi[2] + (eax_41 << 3)), &var_34, nullptr)
        var_2c = eax_42
        var_14_1.b = 0xd
        char* const eax_43 = &data_801800
        char* ecx_33 = var_24
        char* edi_2 = &data_801800
        char* edx_18 = *eax_42
        
        if (ecx_33 != 0)
            eax_43 = ecx_33
        
        if (edx_18 != 0)
            edi_2 = edx_18
        
        if (eax_43 != edi_2)
            if (data_cf65bc != 0 && ecx_33 != 0 && *ecx_33 != 0)
                char* eax_44 = sub_63d4e0(&var_24)
                int32_t temp2_1 = *(eax_44 + 4)
                *(eax_44 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                    var_24 = &data_801800
            
            char* eax_46 = *var_2c
            var_24 = eax_46
            
            if (eax_46 != 0 && *eax_46 != 0)
                char* eax_47 = sub_63d4e0(&var_24)
                *(eax_47 + 4) += 1
        
        var_14_1.b = 0xe
        
        if (data_cf65bc != 0)
            char* eax_48 = var_34
            
            if (eax_48 != 0 && *eax_48 != 0)
                char* eax_49 = sub_63d4e0(&var_34)
                int32_t temp1_1 = *(eax_49 + 4)
                *(eax_49 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                    var_34 = &data_801800
        
        edi = var_40
        var_14_1.b = 4
        sub_693230(data_147abfc + *edi * 0xc, &var_24, &var_60)
        var_14_1.b = 0xf
        
        if (data_cf65bc != 0 && _Str1_1 != 0 && *_Str1_1 != 0)
            char* eax_52 = sub_63d4e0(&_Str1_2)
            int32_t temp3_1 = *(eax_52 + 4)
            *(eax_52 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
        
        sub_4e3ea0(&var_60)
        int32_t var_14_2 = 0x10
        
        if (data_cf65bc != 0)
            char* const eax_53 = var_24
            
            if (eax_53 != 0 && *eax_53 != 0)
                char* eax_54 = sub_63d4e0(&var_24)
                int32_t temp5_1 = *(eax_54 + 4)
                *(eax_54 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                    var_24 = &data_801800
        
        i = i_1 + 1
        ecx = var_44_1 + 0x28
        int32_t var_14_3 = 0xffffffff
        i_1 = i
        var_44_1 = ecx
    while (i s< edi[4])

fsbase->NtTib.ExceptionList = ExceptionList
return i
