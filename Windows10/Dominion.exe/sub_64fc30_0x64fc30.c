// 函数: sub_64fc30
// 地址: 0x64fc30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76cd3f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_1a98fc8

if (edi == 0)
    edi = operator new(0xc)
    int32_t* var_18_1 = edi
    int32_t var_8_1 = 0
    *edi = 0
    edi[1] = 0
    edi[2] = 0
    int32_t var_8_2 = 0xffffffff
    *edi = sub_64c020(0x10000)
    edi[1] = 0x3fff
    data_1a98fc8 = edi

int32_t eax_7 = arg1 u>> 4 | arg1

for (int32_t* i = *(*edi + ((edi[1] & eax_7) << 2)); i != 0; i = i[2])
    if (arg1 == *i)
        if (i == 0xfffffffc)
            break
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return i[1]

int32_t* eax_9 = sub_64bfd0(0x14)
eax_9[3] += 1

if (*eax_9 == 0)
    sub_64be70(eax_9)

int32_t* result = *eax_9
uint8_t*** result_2 = result
*eax_9 = *result
__builtin_memset(result, 0, 0x14)
result[3] = 0
result[4] = 0
int32_t* result_1 = result
int32_t var_8_3 = 1
int32_t* eax_11 = sub_64c020(0x800)
int32_t i_1 = 0
result[2] = eax_11
result[3] = 0x1ff
int32_t var_8_4 = 0xffffffff

if (arg1[2] s> 0)
    int32_t ebx = 0
    
    do
        eax_11 = sub_64f5d0(eax_11, *arg1 + ebx, result_2, i_1)
        i_1 += 1
        ebx += 0x30
    while (i_1 s< arg1[2])
    
    result = result_2

int32_t* ecx_4 = data_1a98fc8
void*** edx_3 = (ecx_4[1] & eax_7) << 2

for (int32_t* i_2 = *(edx_3 + *ecx_4); i_2 != 0; i_2 = i_2[2])
    if (arg1 == *i_2)
        i_2[1] = result
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

void** eax_15 = sub_64bfd0(0xc)
eax_15[3] += 1

if (*eax_15 == 0)
    sub_64be70(eax_15)

void** edx_4 = *eax_15
*eax_15 = *edx_4
*edx_4 = arg1
edx_4[1] = result
edx_4[2] = *(edx_3 + *ecx_4)
*(edx_3 + *ecx_4) = edx_4
ecx_4[2] += 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
