// 函数: sub_629920
// 地址: 0x629920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_6291a0
int32_t var_28 = data_b80988
char* const var_14
sub_63df30(&var_14, "%d")
int32_t var_8_1 = 0
int32_t var_34 = 0xffffffff
sub_666380(&var_14, &data_bf11ec, arg1, &var_14)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_5 = var_14
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_3 = 0xffffffff
void* eax_7 = sub_5cb070()

if (eax_7 != 0)
    uint32_t eax_8 = sub_64e7a0(arg1)
    sub_665db0(eax_8, eax_7, eax_8, 0x3f800000, 0xffffffff, 0)
    int32_t eax_9 = *(eax_7 + 0x10)
    
    if (eax_9 != 0x13 && eax_9 != 0x14)
        uint32_t eax_10 = sub_64e7a0(arg1)
        sub_665db0(eax_10, &data_be5068, eax_10, 0x3f800000, 0xffffffff, 0)

int32_t eax_11 = data_b80984

if (eax_11 u> 5)
    sub_63b870(eax_11, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0xfa3f, "NumberPickerUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ecx_10
void** edi_1

switch (eax_11)
    case 0
        edi_1 = &data_bf1240
        ecx_10 = arg1
    case 1
        uint32_t eax_12 = sub_64e7a0(arg1)
        sub_665db0(eax_12, &data_bf1240, eax_12, 0x3f800000, 0xffffffff, 0)
        ecx_10 = arg1
        
        if (data_b80994 == 0)
            edi_1 = &data_bf1258
        else
            edi_1 = &data_bf124c
    case 2
        edi_1 = &data_bf1210
        ecx_10 = arg1
    case 3
        edi_1 = &data_bf1234
        ecx_10 = arg1
    case 4
        edi_1 = &data_bf121c
        ecx_10 = arg1
    case 5
        edi_1 = &data_bf1228
        ecx_10 = arg1

uint32_t eax_13 = sub_64e7a0(ecx_10)
sub_665db0(eax_13, edi_1, eax_13, 0x3f800000, 0xffffffff, 0)
void* result = data_b80988

if (result == data_b8098c)
    uint32_t eax_14 = sub_64e7a0(arg1)
    sub_665db0(eax_14, &data_bf11f8, eax_14, 0x3f800000, 0xffffffff, 0)
    result = data_b80988

if (result == data_b80990)
    uint32_t eax_15 = sub_64e7a0(arg1)
    result = sub_665db0(eax_15, &data_bf1204, eax_15, 0x3f800000, 0xffffffff, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
