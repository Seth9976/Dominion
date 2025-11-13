// 函数: sub_5d8f30
// 地址: 0x5d8f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t* eax = sub_4b9480()
void* edx_1 = sub_4b9680(&eax[2], arg1)
void* ecx_1 = edx_1
*(edx_1 + 0x18) = arg2
void* ebx_1 = ecx_1 + 1
void* eax_1

do
    eax_1.b = *ecx_1
    ecx_1 += 1
while (eax_1.b != 0)
void* eax_2 = ecx_1 - ebx_1 - 1

if (eax_2 s< 0xe)
    eax_2 = 0xe

if (*(eax_2 + edx_1) != 0x2a)
    *(eax_2 + edx_1) = 0x2a

int32_t eax_5 = (eax[8] u>> 0x1c) - 1
int32_t eax_6
int32_t ecx_3

if (arg2 != eax_5)
    if (arg2 == 0xffffffff)
        ecx_3 = 0
    else if (arg2 == 3)
        ecx_3 = 1
    else
        ecx_3 = arg2 + 2
    
    if (eax_5 == 0xffffffff)
        eax_6 = 0
    else if (eax_5 == 3)
        eax_6 = 1
    else
        eax_6 = eax_5 + 2

char eax_7

if (arg2 == eax_5 || ecx_3 s>= eax_6)
    eax_7 = sub_4d63a0(eax)

if ((arg2 != eax_5 && ecx_3 s< eax_6) || eax_7 == 0)
    eax[8] = (arg2 + 1) << 0x1c | (eax[8] & 0xfffffff)
    sub_4da3a0(eax, *eax)

int32_t ebx_2 = *eax

for (int32_t i = 0; i s< 0x78; i += 0xc)
    if (*(sub_61dad0() + i + 8) == ebx_2)
        *sub_61dad0() = arg2
        break

int32_t ecx_9 = data_be232c
int32_t result = 0

if (ecx_9 s> 0)
    while (*((result << 3) + &data_be22fc) != arg1)
        result += 1
        
        if (result s>= ecx_9)
            return result
    
    *((result << 3) + &data_be2300) = arg2

return result
