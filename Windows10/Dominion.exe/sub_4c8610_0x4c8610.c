// 函数: sub_4c8610
// 地址: 0x4c8610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?CreateVirtualProcessorRoot@UMSSchedulerProxy@details@Concurrency@@UAEPAVVirtualProcessorRoot@23@PAUSchedulerNode@23@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_4bf0f0
*(sub_64e7a0(arg1) + 0x18c0) = sub_4bfba0
void* eax_5 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* eax_6 = sub_624450(*(eax_5 + 8))
uint32_t eax_7 = sub_64e7a0(arg1)
sub_665db0(eax_7, eax_6, eax_7, 0x3f800000, 0xffffffff, 0)
char* const var_24 = &data_801800
int32_t var_8_1 = 0
char eax_8 = sub_67c0d0(arg1, &var_24)
char* const edi = var_24

if (eax_8 == 0)
    int32_t var_38_1 = 0xffffffff
    sub_666380(eax_5, &data_8db814, arg1, eax_5)
else if (edi == 0 || *edi == 0)
    uint32_t eax_9 = sub_64e7a0(arg1)
    sub_665db0(eax_9, &data_8db97c, eax_9, 0x3f800000, 0xffffffff, 0)

char* const esi_1 = &data_801800
char* const var_14 = &data_801800
var_8_1.b = 1
char* ecx_11 = *(eax_5 + 0x4258)
int32_t var_1c
void** var_18

if (ecx_11 == 0 || *ecx_11 == 0)
    char* eax_12 = *(eax_5 + 4)
    
    if (eax_12 == 0 || *eax_12 == 0)
        var_1c = 0
        var_18 = &data_8dbcd4
    else
        sub_63d850(&var_14, eax_5 + 4)
        esi_1 = var_14
        var_1c = 1
        var_18 = &data_8dbcec
else
    sub_63d850(&var_14, eax_5 + 0x4258)
    esi_1 = var_14
    var_1c = 2
    var_18 = &data_8dbd04

uint32_t eax_13 = sub_64e7a0(arg1)
sub_665db0(eax_13, var_18, eax_13, 0x3f800000, 0xffffffff, 0)
int32_t var_40 = 0xffffffff
sub_666380(&var_14, &data_8dbd10, arg1, &var_14)

if (var_1c == 2 && (*(eax_5 + 0x425c) & 1) != 0)
    uint32_t eax_16 = sub_64e7a0(arg1)
    sub_665db0(eax_16, &data_8dbd4c, eax_16, 0x3f800000, 0xffffffff, 0)

int32_t eax_17 = sub_4bfcf0()

if (eax_17 u> 3)
    sub_63b870(eax_17, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x1f61, "GameProfileUpdate")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result
uint32_t eax_22

switch (eax_17)
    case 0
        uint32_t eax_18 = sub_64e7a0(arg1)
        result = sub_665db0(eax_18, &data_8db970, eax_18, 0x3f800000, 0xffffffff, 0)
    case 1
        uint32_t eax_19 = sub_64e7a0(arg1)
        result = sub_665db0(eax_19, &data_8db964, eax_19, 0x3f800000, 0xffffffff, 0)
    case 2
        uint32_t eax_20 = sub_64e7a0(arg1)
        sub_665db0(eax_20, &data_8db964, eax_20, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_21 = sub_64e7a0(arg1)
        sub_665db0(eax_21, &data_8db940, eax_21, 0x3f800000, 0xffffffff, 0)
        eax_22 = sub_64e7a0(arg1)
        result = sub_665db0(eax_22, &data_8db94c, eax_22, 0x3f800000, 0xffffffff, 0)
    case 3
        uint32_t eax_23 = sub_64e7a0(arg1)
        sub_665db0(eax_23, &data_8db964, eax_23, 0x3f800000, 0xffffffff, 0)
        uint32_t eax_24 = sub_64e7a0(arg1)
        sub_665db0(eax_24, &data_8db940, eax_24, 0x3f800000, 0xffffffff, 0)
        eax_22 = sub_64e7a0(arg1)
        result = sub_665db0(eax_22, &data_8db958, eax_22, 0x3f800000, 0xffffffff, 0)

var_8_1.b = 2

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_2 = 3

if (data_cf65bc != 0 && edi != 0 && *edi != 0)
    result = sub_63d4e0(&var_24)
    int32_t temp1_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp1_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
