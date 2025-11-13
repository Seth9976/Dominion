// 函数: sub_5a1410
// 地址: 0x5a1410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *(arg1 + 0x2c)

if (esi == 0 || *esi u< arg2 + 4)
    esi = (*(arg1 + 0x60))(*(arg1 + 0x5c), 0x10000)
    *esi = 0xfff4
    esi[1] = *(arg1 + 0x2c)
    esi[2] = &esi[3]
    *(arg1 + 0x2c) = esi

int32_t edx = esi[2]
int32_t result = (edx + 3) & 0xfffffffc
int32_t ebx_1 = arg2 + result - edx
esi[2] = edx + ebx_1
int32_t* ecx_5 = *(arg1 + 0x2c)
*ecx_5 -= ebx_1
return result
