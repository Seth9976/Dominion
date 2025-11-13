// 函数: sub_590420
// 地址: 0x590420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = *(data_cce9c8 + 0xbfc)
void* ecx

if (eax_1 != 0)
    ecx.b = eax_1 == 1
    *(data_cce9c4 + 0x31c) = ecx.b
else
    uint32_t eax_2 = sub_63ed10(data_cce9bc, data_cce9b4)
    ecx = data_cce9c4
    int32_t eax_4
    eax_4.b = *(ecx + (eax_2 << 2)) - 0x600 u< 0x100
    *(ecx + 0x31c) = eax_4.b

int32_t eax_7 = *(data_cce9c8 + 0xc00)

if (eax_7 != 0)
    void* eax_11 = data_cce9c4
    ecx.b = eax_7 == 1
    *(eax_11 + 0x31d) = ecx.b
    return eax_11

uint32_t eax_8 = sub_63ed10(data_cce9bc, data_cce9b4)
void* ecx_3 = data_cce9c4
int32_t eax_10
eax_10.b = *(ecx_3 + (eax_8 << 2)) - 0x900 u< 0x100
*(ecx_3 + 0x31d) = eax_10.b
return eax_10
