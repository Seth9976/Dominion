// 函数: sub_6a2fa0
// 地址: 0x6a2fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_147ac64
*(esi + 0x1c) += 1

if (*(esi + 0x10) == 0)
    sub_6a6440(esi + 0x10)

int32_t* result = *(esi + 0x10)
*(esi + 0x10) = *result
result[2] = 0
result[3] = 0
result[4] = 0
*result = &data_801800
result[1] = 0
result[2] = 0
result[3] = 0
return result
