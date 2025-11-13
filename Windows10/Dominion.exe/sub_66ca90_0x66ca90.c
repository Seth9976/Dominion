// 函数: sub_66ca90
// 地址: 0x66ca90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d48d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2

if (arg3 == 0)
    data_c23be0 = 0
else
    eax_3 = zx.d(arg3.w)
    
    if (eax_3 u>= data_c23bac)
        data_c23be0 = 0
    else
        eax_3 = eax_3 * 0x18d0 + data_c23ba8
        
        if (eax_3[0x632] != arg3)
            data_c23be0 = 0
        else
            int32_t edi_1 = data_c23be0
            
            if (edi_1 != arg3)
                sub_63b870(eax_3, &data_801800, "gUI2.focus == handle", 
                    "C:\x\ax2017\Engine\UI2.cpp", 0x4290, "UI2ClearFocus")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_3 = sub_64e7a0(edi_1)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = eax_3
            data_c23be0 = 0
            
            if (esi_1[0x57e] == 3 && esi_1[0x55a].b != 0)
                char* const var_20 = &data_801800
                int32_t var_8_1 = 0
                int32_t eax_5 = esi_1[0x563]
                int32_t var_28 = edi_1
                
                if (eax_5 == 0)
                    char* eax_6 = esi_1[0x578]
                    char* const ecx_1 = &data_801800
                    
                    if (eax_6 != 0)
                        ecx_1 = eax_6
                    
                    char* const var_24_2 = ecx_1
                else
                    int32_t var_24_1 = eax_5
                
                sub_63d850(&var_20, &esi_1[0x5c8])
                eax_3 = esi_1[0x5ac]
                struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = eax_3
                char var_18_1 = ebx.b
                *(esi_1 + 0x1789) = 0
                
                if (arg4 != 0)
                    eax_3 = esi_1[0x630]
                    
                    if (eax_3 != 0)
                        eax_3 = eax_3(&var_28, eax_2)
                    else
                        void* ecx_3 = esi_1[0x5c6]
                        
                        if (ecx_3 != 0)
                            eax_3 = sub_66ca60(ecx_3, &var_28)
                
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    eax_3 = var_20
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        eax_3 = sub_63d4e0(&var_20)
                        int32_t temp0_1 = eax_3[1]
                        eax_3[1] -= 1
                        
                        if (temp0_1 == 1)
                            int32_t* eax_8 = sub_64c080(eax_3, &eax_3[3][2])
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_8

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
