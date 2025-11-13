// 函数: sub_4dc930
// 地址: 0x4dc930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?consume_message@?$overwrite_buffer@W4agent_status@Concurrency@@@Concurrency@@MAEPAV?$message@W4agent_status@Concurrency@@@2@H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0 && *arg3 != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    do
        int32_t ecx
        
        if (i != 0x12)
            ecx = *(i * 0x1c + &data_77fca8)
        else
            ecx = 1
        
        void* var_20
        int32_t eax_6 = sub_571770(ecx, &var_20)
        int32_t esi_1 = 0
        int32_t var_14_1 = 0
        
        if (eax_6 s> 0)
            int32_t* edi_2 = var_20 + 0x98
            
            do
                if (arg4 != 0)
                    if (arg4 == 3)
                    label_4dcbf5:
                        int32_t eax_74
                        int32_t ecx_16
                        eax_74, ecx_16 = _strnicmp(arg3, edi_2[-0x10], arg2)
                        
                        if (eax_74 == 0)
                            char* eax_75 = edi_2[-0x10]
                            
                            do
                                ecx_16.b = *eax_75
                                eax_75 = &eax_75[1]
                            while (ecx_16.b != 0)
                            
                            eax_74 = eax_75 - &eax_75[1]
                            
                            if (eax_74 == arg2)
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return *(esi_1 * 0x698 + var_20 + 0x8c)
                        
                        int32_t var_40_2 = 0
                        char* _Str2_2
                        sub_4e3fa0(eax_74, &edi_2[-0x26], &_Str2_2, 1, ecx_16)
                        int32_t var_8_1 = 0
                        char* _Str2 = &data_801800
                        char* _Str2_1 = _Str2_2
                        
                        if (_Str2_1 != 0)
                            _Str2 = _Str2_1
                        
                        bool cond:0_1 = _strnicmp(arg3, _Str2, arg2) != 0
                        char* _Str2_3 = _Str2_2
                        
                        if (not(cond:0_1))
                            int32_t ecx_19
                            
                            if (_Str2_3 == 0 || *_Str2_3 == 0)
                                ecx_19 = 0
                            else
                                ecx_19 = *(sub_63d4e0(&_Str2_2) + 8)
                                _Str2_3 = _Str2_2
                            
                            if (ecx_19 == arg2)
                                int32_t result = *(esi_1 * 0x698 + var_20 + 0x8c)
                                int32_t var_8_4 = 1
                                
                                if (data_cf65bc != 0 && _Str2_3 != 0 && *_Str2_3 != 0)
                                    char* eax_82 = sub_63d4e0(&_Str2_2)
                                    int32_t temp1_1 = *(eax_82 + 4)
                                    *(eax_82 + 4) -= 1
                                    
                                    if (temp1_1 == 1)
                                        sub_64c080(eax_82, *(eax_82 + 0xc) + 0x10)
                                
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                        
                        int32_t var_8_2 = 2
                        
                        if (data_cf65bc != 0 && _Str2_3 != 0 && *_Str2_3 != 0)
                            char* eax_78 = sub_63d4e0(&_Str2_2)
                            int32_t temp0_1 = *(eax_78 + 4)
                            *(eax_78 + 4) -= 1
                            *(eax_78 + 4)
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_78, *(eax_78 + 0xc) + 0x10)
                                _Str2_2 = &data_801800
                        
                        int32_t var_8_3 = 0xffffffff
                    else
                        bool cond:1_1
                        
                        if (arg4 == 4)
                            if (edi_2[-3] == 0x106)
                                goto label_4dcbf5
                            
                            cond:1_1 = ((*edi_2 & 0x7f20cc00) | (edi_2[1] & 0x301c0)) != 0
                        label_4dcbe6:
                            
                            if (not(cond:1_1))
                                goto label_4dcbf5
                        else if (arg4 != 1)
                            if (arg4 != 2)
                                goto label_4dcbf5
                            
                            int32_t esi_4 = edi_2[1]
                            int32_t edx_4 = *edi_2
                            int32_t eax_50 = esi_4 & 0x20000
                            
                            if (eax_50 != 0 || (eax_50 | (esi_4 & 0x10000)) != 0
                                    || (edx_4 & 0x800) != 0 || (edx_4 & 0x4000) != 0
                                    || (edx_4 & 0x8000) != 0)
                                esi_1 = var_14_1
                            else
                                int32_t eax_62 = edx_4 & 0x200000
                                
                                if (eax_62 != 0 || (eax_62 | (esi_4 & 0x80)) != 0
                                        || (edx_4 & &data_1000000) != 0
                                        || (edx_4 & 0x2000000) != 0)
                                    esi_1 = var_14_1
                                else
                                    esi_1 = var_14_1
                                    
                                    if ((edx_4 & 0x40000000) == 0)
                                        cond:1_1 = (edx_4 & 0x4000000) != 0
                                        goto label_4dcbe6
                        else
                            int32_t esi_2 = edi_2[1]
                            int32_t edx_1 = *edi_2
                            int32_t eax_12 = esi_2 & 0x20000
                            
                            if (eax_12 != 0 || (eax_12 | (esi_2 & 0x10000)) != 0
                                    || (edx_1 & 0x800) != 0 || (edx_1 & 0x4000) != 0
                                    || (edx_1 & 0x8000) != 0)
                                esi_1 = var_14_1
                            else
                                int32_t eax_24 = edx_1 & 0x200000
                                
                                if (eax_24 != 0 || (eax_24 | (esi_2 & 0x80)) != 0
                                        || (edx_1 & 0x8000000) != 0 || (edx_1 & 0x400) != 0)
                                    esi_1 = var_14_1
                                else
                                    int32_t eax_34 = edx_1 & 0x20000000
                                    
                                    if (eax_34 != 0 || (eax_34 | (esi_2 & 0x40)) != 0)
                                        esi_1 = var_14_1
                                    else
                                        int32_t eax_38 = edx_1 & 0x10000000
                                        
                                        if (eax_38 != 0 || (eax_38 | (esi_2 & 0x100)) != 0
                                                || (edx_1 & &data_1000000) != 0
                                                || (edx_1 & 0x2000000) != 0)
                                            esi_1 = var_14_1
                                        else
                                            esi_1 = var_14_1
                                            
                                            if ((edx_1 & 0x40000000) == 0
                                                    && (edx_1 & 0x4000000) == 0)
                                                goto label_4dcbf5
                else if (((*edi_2 & &data_1000000) | arg4) != 0)
                    goto label_4dcbf5
                
                esi_1 += 1
                edi_2 = &edi_2[0x1a6]
                var_14_1 = esi_1
            while (esi_1 s< eax_6)
        
        i = i_1 + 1
        i_1 = i
    while (i s< 0x13)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
