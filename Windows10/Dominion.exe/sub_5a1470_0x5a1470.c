// 函数: sub_5a1470
// 地址: 0x5a1470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *(arg1 + 0x2c)

if (esi == 0 || *esi u< 0x2c)
    esi = (*(arg1 + 0x60))(*(arg1 + 0x5c), 0x10000)
    *esi = 0xfff4
    esi[1] = *(arg1 + 0x2c)
    esi[2] = &esi[3]
    *(arg1 + 0x2c) = esi

int32_t ecx_2 = esi[2]
int32_t result = (ecx_2 + 3) & 0xfffffffc
esi[2] = ecx_2 + result - ecx_2 + 0x28
int32_t* ecx_4 = *(arg1 + 0x2c)
*ecx_4 -= result - ecx_2 + 0x28
return result
