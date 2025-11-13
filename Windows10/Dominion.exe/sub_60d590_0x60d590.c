// 函数: sub_60d590
// 地址: 0x60d590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_stat@U_stat64i32@@@@YAHQBDQAU_stat64i32@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_64e7a0(arg3)
sub_665db0(eax_3, arg2 + 0x74, eax_3, 0x3f800000, 0xffffffff, 0)
char* var_1c
sub_60d3c0(&var_1c, arg2)
int32_t var_8_1 = 0
int32_t var_44 = 0xffffffff
sub_666380(&var_1c, &data_be6008, arg3, &var_1c)
int32_t var_4c = 0xffffffff
void var_18
sub_666380(&var_18, &data_be6014, arg3, &var_18)
void* eax_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t edi_1 = *(arg2 + 0x8c)
int32_t eax_8
char edx_2
edx_2:eax_8 = sx.q(edi_1)
int32_t* eax_12 = *(*(eax_6 + 0x429c) + (((
    (edi_1 - ((eax_8 + zx.d(edx_2)) s>> 8) * 0x9c + 0xf4628) s>> 4
    | (edi_1 - ((eax_8 + zx.d(edx_2)) s>> 8) * 0x9c + 0xf4628)) & *(eax_6 + 0x42a0)) << 2))
int32_t ecx_11

if (eax_12 == 0)
label_60d66e:
    int64_t var_28_1 = 0
    ecx_11 = 0
else
    while (edi_1 - ((eax_8 + zx.d(edx_2)) s>> 8) * 0x9c + 0xf4628 != *eax_12)
        eax_12 = eax_12[6]
        
        if (eax_12 == 0)
            goto label_60d66e
    
    if (eax_12 == 0xfffffff8)
        goto label_60d66e
    
    ecx_11 = eax_12[4]

void** esi_1

if (ecx_11 s> 0x19258)
    if (ecx_11 == 0x19640)
        uint32_t eax_19 = sub_64e7a0(arg3)
        sub_665db0(eax_19, &data_be5fe4, eax_19, 0x3f800000, 0xffffffff, 0)
        esi_1 = &data_be4990
    else if (ecx_11 == 0x19a28)
        uint32_t eax_18 = sub_64e7a0(arg3)
        sub_665db0(eax_18, &data_be5fe4, eax_18, 0x3f800000, 0xffffffff, 0)
        esi_1 = &data_be499c
    else if (ecx_11 == 0x1a1f8)
        uint32_t eax_17 = sub_64e7a0(arg3)
        sub_665db0(eax_17, &data_be5fe4, eax_17, 0x3f800000, 0xffffffff, 0)
        esi_1 = &data_be49b4
    else
        esi_1 = &data_be5ff0
else if (ecx_11 == 0x19258)
    uint32_t eax_16 = sub_64e7a0(arg3)
    sub_665db0(eax_16, &data_be5fe4, eax_16, 0x3f800000, 0xffffffff, 0)
    esi_1 = &data_be4984
else if (ecx_11 == 0)
    esi_1 = &data_be5ff0
else if (ecx_11 == 0x18a88)
    uint32_t eax_15 = sub_64e7a0(arg3)
    sub_665db0(eax_15, &data_be5fe4, eax_15, 0x3f800000, 0xffffffff, 0)
    esi_1 = &data_be4978
else if (ecx_11 != 0x18e70)
    esi_1 = &data_be5ff0
else
    uint32_t eax_13 = sub_64e7a0(arg3)
    sub_665db0(eax_13, &data_be5fe4, eax_13, 0x3f800000, 0xffffffff, 0)
    esi_1 = &data_be49a8

uint32_t eax_20 = sub_64e7a0(arg3)
sub_665db0(eax_20, esi_1, eax_20, 0x3f800000, 0xffffffff, 0)

if (arg4 != 0)
    uint32_t eax_21 = sub_64e7a0(arg3)
    sub_665db0(eax_21, &data_be5ffc, eax_21, 0x3f800000, 0xffffffff, 0)

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4d6960(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
