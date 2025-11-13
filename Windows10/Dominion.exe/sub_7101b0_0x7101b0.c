// 函数: sub_7101b0
// 地址: 0x7101b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
int32_t* result

if (eax == 0)
    result = malloc(0x70)
else
    result = eax(0x70, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Bone.c", 0x2c)

if (result != 0)
    memset(result, 0, 0x70)

*result = arg3
result[1] = arg2
result[2] = arg4
result[0x14] = 0x3f800000
result[0x18] = 0x3f800000
result[5] = *(arg3 + 0x10)
result[6] = *(arg3 + 0x14)
result[7] = *(arg3 + 0x18)
result[8] = *(arg3 + 0x1c)
result[9] = *(arg3 + 0x20)
result[0xa] = *(arg3 + 0x24)
result[0xb] = *(arg3 + 0x28)
return result
