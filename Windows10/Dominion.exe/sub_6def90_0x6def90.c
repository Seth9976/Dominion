// 函数: sub_6def90
// 地址: 0x6def90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = *(arg3 + 0x2c)
int32_t var_8 = arg2
arg2.b = 0
int32_t eax = sub_6dd740(edi, arg2.b)
void* ebx = data_147abe8

if (ebx == 0)
    sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ebx_1 = *(ebx + 4)
ebx_1[3] += 1

if (*ebx_1 == 0)
    sub_6e09e0(ebx_1)

int32_t* result = *ebx_1
*ebx_1 = *result
result[3] = var_8
result[4] = arg4
result[5] = 0x3f800000
result[6] = 0x3f800000
result[7] = 0
result[8] = 0
result[9] = 0x3f800000
result[0x2b] = 0
result[0x2c] = 0
void* eax_4 = sub_6dda80(edi, result)
bool cond:0 = result[7] != 2
*result = 1f / (_mm_cvtepi32_ps(zx.o(**(eax_4 + 0x10))) f/ *eax_4)

if (not(cond:0))
    *result = 0

result[1] = 0
result[2] = 0
int32_t** eax_6 = sub_64bfd0(0xc)
eax_6[3] += 1

if (*eax_6 == 0)
    sub_64be70(eax_6)

int32_t** ecx_5 = *eax_6
*eax_6 = *ecx_5
ecx_5[2] = 0
*ecx_5 = result
ecx_5[1] = 0
ecx_5[2] = edi[2]
void* eax_9 = edi[2]

if (eax_9 == 0)
    edi[3] += 1
    edi[1] = ecx_5
    edi[2] = ecx_5
    return result

*(eax_9 + 4) = ecx_5
edi[3] += 1
edi[2] = ecx_5
return result
