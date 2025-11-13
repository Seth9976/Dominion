// 函数: sub_69eb30
// 地址: 0x69eb30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_147ac2c != 0)
    return 

int32_t* eax_1 = sub_64bfd0(0x28)
eax_1[3] += 1

if (*eax_1 == 0)
    sub_64be70(eax_1)

int32_t* esi_1 = *eax_1
*eax_1 = *esi_1
esi_1[4] = 0
__builtin_memset(esi_1, 0, 0x28)
data_147ac2c = esi_1
esi_1[5] = 0x400
esi_1[6] = 0
int32_t* eax_3 = sub_687730(0x9004)
*eax_3 = esi_1[4]
int32_t i = 0
int32_t* edx_1 = esi_1[3]
esi_1[4] = eax_3

if (esi_1[5] s> 0)
    eax_3 = &eax_3[1]
    
    do
        *eax_3 = edx_1
        i += 1
        edx_1 = eax_3
        eax_3 = &eax_3[9]
    while (i s< esi_1[5])

esi_1[3] = edx_1
int32_t* esi_2 = data_147ac2c

if (*esi_2 != 0)
    sub_63b870(eax_3, &data_801800, "mNodeBuckets == NULL", "C:\x\ax2017\Engine\xMap.h", 0x74, 
        "XMap<class XString,struct XAsset *>::SetNumBuckets")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*esi_2 = sub_64c020(0x1000)
void* eax = data_147ac2c
esi_2[1] = 0x3ff
*(eax + 0x1c) = 1
*(eax + 0x20) = 0
*(eax + 0x24) = 0
