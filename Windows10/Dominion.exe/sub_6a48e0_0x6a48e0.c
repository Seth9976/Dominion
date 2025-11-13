// 函数: sub_6a48e0
// 地址: 0x6a48e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t* edi = data_147ac64
edi[3] += 1

if (*edi == 0)
    sub_6a64c0(edi)

int32_t* result = *edi
*edi = *result
result[3] = 0
result[4] = 0
result[5] = 0
*result = &data_801800
result[1] = &data_801800
result[2] = &data_801800
sub_63d8d0(result, arg2)
int32_t* eax_1 = sub_64bfd0(0xc)
eax_1[3] += 1

if (*eax_1 == 0)
    sub_64be70(eax_1)

int32_t** ecx_3 = *eax_1
*eax_1 = *ecx_3
ecx_3[2] = 0
*ecx_3 = result
ecx_3[1] = 0
ecx_3[2] = *(arg1 + 8)
void* eax_4 = *(arg1 + 8)

if (eax_4 == 0)
    *(arg1 + 0xc) += 1
    *(arg1 + 4) = ecx_3
    *(arg1 + 8) = ecx_3
    return result

*(eax_4 + 4) = ecx_3
*(arg1 + 0xc) += 1
*(arg1 + 8) = ecx_3
return result
