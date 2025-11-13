// 函数: sub_5fcc40
// 地址: 0x5fcc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
int32_t esi = data_ccf6dc
int32_t ecx_1 = 0
*(eax + 0x18bc) = sub_5fbbd0

if (esi == 2 || esi == 1)
    eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    ecx_1 = 4
    
    if (*(eax + 0x71e0) == 0)
        ecx_1 = 1
else if (esi == 3)
    ecx_1 = esi - 2

int32_t edx = 0

if (esi == 1 || esi == 2)
    edx = 5
else if (esi == 3)
    edx = esi + 4

char result = sub_60de40(eax, edx, arg1, ecx_1)

if (result != 0)
    data_8dbf64 = 0
    return result

data_8dbf64 = 1
uint32_t eax_1 = sub_64e7a0(arg1)
return sub_665db0(eax_1, &data_be49d8, eax_1, 0x3f800000, 0xffffffff, 0)
