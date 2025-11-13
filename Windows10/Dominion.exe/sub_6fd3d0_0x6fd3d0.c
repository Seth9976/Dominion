// 函数: sub_6fd3d0
// 地址: 0x6fd3d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$collate@G@std@@QAE@ABV_Locinfo@1@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147dec8 != 0)
    void* ecx_1 = data_147ded0
    
    if (ecx_1 != 0)
        int32_t eax_3 = *(ecx_1 + 4)
        
        if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
                || eax_3 == 0x20)
            *(ecx_1 + 0x1c) -= 1
        
        data_147ded0 = 0
    
    sub_744b30()
    sub_67a000()
    sub_73e1a0()
    int32_t ecx_2 = data_1597cc0
    
    if (ecx_2 != 0)
        sub_698a30(ecx_2)
        data_1597cc0 = 0
    
    sub_4d4b30(data_147dec8 + 0x34)
    sub_4d4b30(data_147dec8 + 0xc)
    result = sub_6fdd90(data_147dec8)
    int32_t* esi_1 = data_147dec8
    
    if (esi_1 != 0)
        int32_t var_8_1 = 0
        sub_4d4b30(&esi_1[0xd])
        int32_t var_8_2 = 1
        sub_4d4b30(&esi_1[3])
        int32_t var_8_3 = 2
        sub_6fdd90(esi_1)
        int32_t var_8_4 = 0xffffffff
        result = sub_64c080(data_147dec8, 0x88)
        data_147dec8 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
