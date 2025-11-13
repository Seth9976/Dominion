// 函数: sub_6f2e50
// 地址: 0x6f2e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771f5d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_147ded0

if (ecx != 0 && ecx[1] == 0x19)
    result = sub_5af880(ecx)
    
    if (result != 0)
        LRESULT eax_4
        int32_t ecx_1
        eax_4, ecx_1 = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
        int32_t esi_2
        LRESULT edi_1
        
        if (eax_4 != 0xffffffff)
            int32_t eax_5
            eax_5, ecx_1 = sub_6eef80(eax_4)
            
            if (arg1 == 0)
                int32_t eax_7
                eax_7, ecx_1 = sub_6ef080(eax_4)
                esi_2 = eax_5
                edi_1 = eax_4 + 1 + eax_7
            else
                edi_1 = eax_4 + 1
                esi_2 = eax_5 + 1
        else
            edi_1 = result[2]
            esi_2 = 0
        
        int32_t var_34_2 = ecx_1
        int32_t* eax_8 = sub_69dd00(data_177750c, 0)
        sub_6fb630(eax_8, eax_8, result, edi_1)
        sub_6f2600(edi_1)
        int32_t eax_9 = sub_6ef000(edi_1, esi_2)
        
        if (edi_1 s< 0 || edi_1 s>= result[2])
            sub_63b870(eax_9, &data_801800, 
                "insertIndex >= 0 && insertIndex < pParticleDef->mEmitterCount", 
                "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0xb2f, "EmitterAdd")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        sub_6f2c70(&result_1)
        int32_t var_8_1 = 0
        char* const result_3 = &data_801800
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_3 = result_2
        
        char* const result_4 = result_3
        char* ecx_9 = sub_6dce10(result_2, &(*result)[edi_1 * 0x2d], &data_8cc5f8, 1)
        void* eax_10 = data_147ded0
        
        if (eax_10 != 0)
            int32_t eax_11 = *(eax_10 + 4)
            
            if (eax_11 == 0x19)
                ecx_9 = sub_6f0170(edi_1, 0xffffffff)
            else if (eax_11 == 0x1b)
                ecx_9 = sub_6f0970(edi_1)
        
        sub_6ee530(ecx_9)
        sub_73d740()
        result = sub_73d5c0()
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
