// 函数: sub_6d93f0
// 地址: 0x6d93f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?MainCppEH@@YGHPBGP6GHHQAPAG@ZH1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_147abe8

if (edi != 0)
    int32_t* edi_1 = *edi
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x6c
        else
            esi_1 = *edi_1
        
        result = edi_1[1] * 0x6c + *edi_1
        
        if (esi_1 u>= result)
            break
        
        while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
            esi_1 += 0x6c
            
            if (esi_1 u>= result)
                goto label_6d9455
        
        sub_6da670(esi_1)
    
label_6d9455:
    int32_t* esi_3 = data_147abe8
    
    if (esi_3 != 0)
        int32_t* ebx = *esi_3
        
        if (*ebx != 0)
            void* eax_4 = &ebx[4]
            char** esi_2 = nullptr
            void* ecx_2 = eax_4
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            void* edi_2
            
            while (true)
                edi_2 = &ebx[3]
                
                if (esi_2 != 0)
                    esi_2 = &esi_2[0x1b]
                    ecx_2 = eax_4
                else
                    esi_2 = *ebx
                
                result_1 = *ebx
                void* eax_6 = ebx[1] * 0x6c + result_1
                
                if (esi_2 u>= eax_6)
                    break
                
                while ((esi_2[0x1a] & 0xffff0000) == 0)
                    esi_2 = &esi_2[0x1b]
                    edi_2 = &ebx[3]
                    ecx_2 = &ebx[4]
                    
                    if (esi_2 u>= eax_6)
                        goto label_6d94b7
                
                sub_6db570(&esi_2[0xe])
                int32_t var_8_1 = 0
                
                if (data_cf65bc != 0)
                    char* eax_7 = *esi_2
                    
                    if (eax_7 != 0 && *eax_7 != 0)
                        char* eax_8 = sub_63d4e0(esi_2)
                        int32_t temp0_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                            *esi_2 = &data_801800
                
                int32_t var_8_2 = 0xffffffff
                int32_t ecx_9 = ebx[3]
                ebx[3] = zx.d(esi_2[0x1a].w)
                eax_4 = &ebx[4]
                esi_2[0x1a] = ecx_9
                ecx_2 = &ebx[4]
                *ecx_2 -= 1
            
        label_6d94b7:
            result = result_1
            ebx[1] = 0
            *edi_2 = 0
            
            if (result != 0)
                result = _aligned_free(result)
                ecx_2 = &ebx[4]
            
            *ebx = 0
            ebx[1] = 0
            ebx[2] = 0
            *edi_2 = 0
            *ecx_2 = 0
            ebx[6] = 0
        
        int32_t* ecx_3 = *esi_3
        
        if (ecx_3 != 0)
            result = sub_64c080(ecx_3, 0x1c)
            *esi_3 = 0
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

sub_63b870(result, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
