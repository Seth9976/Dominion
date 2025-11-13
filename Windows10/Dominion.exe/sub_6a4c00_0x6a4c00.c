// 函数: sub_6a4c00
// 地址: 0x6a4c00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0_Blocking_recipient@?1???$_Receive_impl@W4agent_status@Concurrency@@@Concurrency@@YA?AW4agent_status@1@PAV?$ISource@W4agent_status@Concurrency@@@1@IPBV?$function@$$A6A_NABW4agent_status@Concurrency@@@Z@std@@@Z@QAE@0ABV45@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = data_147ac64
esi[3] += 1

if (*esi == 0)
    sub_6a64c0(esi)

int32_t* ebx = *esi
*esi = *ebx
ebx[3] = 0
ebx[4] = 0
ebx[5] = 0
*ebx = &data_801800
ebx[1] = &data_801800
ebx[2] = &data_801800
int32_t* eax_4 = sub_64bfd0(0xc)
eax_4[3] += 1

if (*eax_4 == 0)
    sub_64be70(eax_4)

int32_t** ecx_2 = *eax_4
*eax_4 = *ecx_2
ecx_2[2] = 0
*ecx_2 = ebx
ecx_2[1] = 0
ecx_2[2] = *(arg1 + 8)
void* eax_7 = *(arg1 + 8)

if (eax_7 == 0)
    *(arg1 + 4) = ecx_2
else
    *(eax_7 + 4) = ecx_2

*(arg1 + 0xc) += 1
*(arg1 + 8) = ecx_2
char* arg_4
sub_63d850(ebx, &arg_4)
int32_t* result = sub_6a2fa0()
ebx[3] = result
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* ecx_4 = arg_4
    
    if (ecx_4 != 0 && *ecx_4 != 0)
        char* eax_8 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
