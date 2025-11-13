// 函数: sub_596040
// 地址: 0x596040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* ebx = *arg1
int32_t edx = *ebx
int16_t* esi = *(edx + sx.d(*arg2) * 0x1c + 0xc)
int32_t edi = *(edx + sx.d(*arg3) * 0x1c + 0xc)
int32_t esi_1

if ((*(sub_571b30(esi, ebx[1]) + 0x9c) & 0x20000) == 0)
    esi_1 = 0
else
    esi_1 = 1

int32_t result

if ((*(sub_571b30(edi, ebx[1]) + 0x9c) & 0x20000) == 0)
    result = 0
else
    result = 1

if (esi_1 == result)
    return sub_592f50(esi, edi)

result.b = esi_1 u< result
return result
