// 函数: sub_609bd0
// 地址: 0x609bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi_1 = *sub_599650(sub_4c89a0(), sub_59de40(data_b809c0))
char* var_14 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_6 = sub_63d4e0(&var_14)
    *(eax_6 + 4) += 1

int32_t var_8_1 = 0
int32_t var_30 = 0xffffffff
sub_666380(&var_14, &data_be5a68, arg1, &var_14)
int32_t eax_8 = data_b809b4
char const* const var_38
int32_t var_34_1
char const* const var_30_1
void* result
char* ecx_4
void** edi_1

if (eax_8 == 0)
    edi_1 = &data_be5a44
label_609c86:
    uint32_t eax_11 = sub_64e7a0(arg1)
    sub_665db0(eax_11, edi_1, eax_11, 0x3f800000, 0xffffffff, 0)
    result = sub_4b9370()
    
    if (result.b == 0)
    label_609cff:
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            result = sub_63d4e0(&var_14)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    void* edi_2 = data_cc8d5c
    
    if (edi_2 != 0)
        int32_t edi_3 = *(edi_2 + 0x7590)
        int32_t* eax_12 = sub_4b9480()
        void var_1c
        void var_18
        result = sub_4c3550(eax_12, edi_3, eax_12, &var_1c, &var_18)
        
        if (result.b != 0)
            uint32_t eax_13 = sub_64e7a0(arg1)
            result = sub_665db0(eax_13, &data_be5a5c, eax_13, 0x3f800000, 0xffffffff, 0)
        
        goto label_609cff
    
    var_30_1 = "GetClient"
    var_34_1 = 0x7b
    var_38 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_4 = "gClient"
else
    if (eax_8 != 1)
        result = eax_8 - 2
    
    if (eax_8 == 1 || eax_8 == 2)
        edi_1 = &data_be5a50
        goto label_609c86
    
    var_30_1 = "GameEndUpdate"
    var_34_1 = 0xa882
    var_38 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_4 = "Halt"
sub_63b870(result, &data_801800, ecx_4, var_38, var_34_1, var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
