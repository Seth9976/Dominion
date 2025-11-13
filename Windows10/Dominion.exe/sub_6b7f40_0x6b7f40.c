// 函数: sub_6b7f40
// 地址: 0x6b7f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_147abe8

if (edi != 0)
    int32_t* edi_1 = *(edi + 0x10)
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x7c
        else
            esi_1 = *edi_1
        
        result = edi_1[1] * 0x7c + *edi_1
        
        if (esi_1 u>= result)
            break
        
        while ((*(esi_1 + 0x78) & 0xffff0000) == 0)
            esi_1 += 0x7c
            
            if (esi_1 u>= result)
                goto label_6b7fa5
        
        sub_6b8440(esi_1)
    
label_6b7fa5:
    void* esi_3 = data_147abe8
    
    if (esi_3 != 0)
        int32_t* ebx = *(esi_3 + 0x10)
        
        if (*ebx != 0)
            void* eax_4 = &ebx[4]
            int32_t esi_2 = 0
            void* ecx_2 = eax_4
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            void* edi_2
            
            while (true)
                edi_2 = &ebx[3]
                
                if (esi_2 != 0)
                    esi_2 += 0x7c
                    ecx_2 = eax_4
                else
                    esi_2 = *ebx
                
                result_1 = *ebx
                void* eax_6 = ebx[1] * 0x7c + result_1
                
                if (esi_2 u>= eax_6)
                    break
                
                while ((*(esi_2 + 0x78) & 0xffff0000) == 0)
                    esi_2 += 0x7c
                    edi_2 = &ebx[3]
                    ecx_2 = &ebx[4]
                    
                    if (esi_2 u>= eax_6)
                        goto label_6b800c
                
                int32_t var_8_1 = 0
                sub_6c3440(esi_2 + 8)
                int32_t var_8_2 = 0xffffffff
                int32_t ecx_7 = ebx[3]
                ebx[3] = zx.d(*(esi_2 + 0x78))
                eax_4 = &ebx[4]
                *(esi_2 + 0x78) = ecx_7
                ecx_2 = &ebx[4]
                *ecx_2 -= 1
            
        label_6b800c:
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
        
        int32_t* ecx_3 = *(esi_3 + 0x10)
        
        if (ecx_3 != 0)
            result = sub_64c080(ecx_3, 0x30)
            *(esi_3 + 0x10) = 0
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

sub_63b870(result, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
