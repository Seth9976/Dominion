// 函数: sub_64eea0
// 地址: 0x64eea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76cbf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_b4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = sub_6dd1e0(arg3, arg3, &data_8cae70, data_1724a80, 0x69)
int32_t* edx_1 = eax_4
int32_t* var_90 = edx_1
int32_t var_88_1
int32_t edi_1
int32_t edi_2

if (edx_1 != 0)
    edi_1 = edx_1[2]
    edi_2 = edi_1 - 1
    var_88_1 = edi_2

int128_t xmm0_1

if (edx_1 == 0 || edi_1 - 1 s< 0)
label_64f10d:
    xmm0_1 = *sub_6dd1e0(eax_4, arg3, &data_8cae70, data_1777578, 0x76)
else
    int32_t ecx_1 = edi_2 * 0x30
    int32_t var_8c_1 = ecx_1
    
    while (true)
        int32_t* esi_2 = *edx_1 + ecx_1
        int32_t ecx_2 = 0
        int32_t edx_2 = esi_2[6]
        eax_4 = &esi_2[6]
        int32_t* var_94_1 = eax_4
        
        if (edx_2 s> 0)
            eax_4 = eax_4[2]
            
            while (*eax_4 != 0x76)
                ecx_2 += 1
                eax_4 = &eax_4[4]
                
                if (ecx_2 s>= edx_2)
                    goto label_64f095
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_b8_1)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
            int32_t var_14_1 = 0
            void var_68
            int32_t var_b8_2 = `eh vector constructor iterator'(&var_68, 4, 0x10, 0x5a0be0)
            int32_t ecx_5 = sub_64c230(*esi_2, &var_68)
            int32_t var_7c_1 = ecx_5
            char var_69_1 = 0
            int32_t* eax_6
            
            if (ecx_5 != 1)
                eax_6 = arg2
                void* edx_5 = arg5 - eax_6
                int32_t* var_70_2 = eax_6
                void* var_74_2 = edx_5
                int32_t i_2 = 2
                int32_t i
                
                do
                    int32_t esi_3 = 0
                    int32_t j = 0
                    
                    if (*(eax_6 + edx_5) s> 0)
                        int32_t* eax_10 = *eax_6
                        int32_t* var_78_1 = eax_10
                        
                        do
                            void* eax_11 = *eax_10
                            
                            if (sub_64ee20(eax_11, ecx_5, &var_68, *(eax_11 + 8)) != 0)
                                ecx_5 = var_7c_1
                                esi_3 += 1
                                
                                if (esi_3 == ecx_5)
                                    var_69_1 = 1
                                    break
                            
                            j += 1
                            eax_10 = &var_78_1[7]
                            var_78_1 = eax_10
                            ecx_5 = var_7c_1
                        while (j s< *(var_70_2 + var_74_2))
                        
                        edx_5 = var_74_2
                        eax_6 = var_70_2
                    
                    eax_6 = &eax_6[1]
                    i = i_2
                    i_2 -= 1
                    var_70_2 = eax_6
                while (i != 1)
            else
                eax_6 = arg5
                void* ecx_7 = arg2 - eax_6
                int32_t* var_70_1 = eax_6
                void* var_74_1 = ecx_7
                int32_t i_3 = 2
                int32_t i_1
                
                do
                    int32_t j_1 = 0
                    
                    if (*eax_6 s> 0)
                        void* ecx_8 = ecx_7 + eax_6
                        int32_t edi_3 = 0
                        void* var_7c_2 = ecx_8
                        
                        do
                            eax_6 = var_70_1
                            
                            if (_stricmp(*(*(*ecx_8 + edi_3) + 8), *esi_2) == 0)
                                var_69_1 = 1
                                break
                            
                            ecx_8 = var_7c_2
                            j_1 += 1
                            edi_3 += 0x1c
                        while (j_1 s< *eax_6)
                        
                        ecx_7 = var_74_1
                    
                    eax_6 = &eax_6[1]
                    i_1 = i_3
                    i_3 -= 1
                    var_70_1 = eax_6
                while (i_1 != 1)
            
            if (var_69_1 != 0)
                int128_t xmm0 = *sub_6dd1e0(eax_6, var_94_1, &data_8cae70, data_1777578, 0x76)
                int32_t var_14_3 = 0xffffffff
                `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_63d770)
                xmm0_1 = xmm0
                break
            
            int32_t var_14_2 = 0xffffffff
            eax_4 = `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_63d770)
            edi_2 = var_88_1
        
    label_64f095:
        edi_2 -= 1
        ecx_1 = var_8c_1 - 0x30
        var_88_1 = edi_2
        var_8c_1 = ecx_1
        
        if (edi_2 s< 0)
            goto label_64f10d
        
        edx_1 = var_90

*arg4 = xmm0_1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg4)
return arg4
