// 函数: sub_64b360
// 地址: 0x64b360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result_1
int32_t result = result_1
char eax

if (not(arg1 <= 0.999000013f))
    eax = 0xff
else if (0.00100000005f <= arg1)
    eax = (int.d(arg1 * 255f + 0.5f)).b
else
    eax = 0

result.b = eax

if (not(arg2 <= 0.999000013f))
    eax = 0xff
else if (0.00100000005f <= arg2)
    eax = (int.d(arg2 * 255f + 0.5f)).b
else
    eax = 0

result:1.b = eax

if (not(arg3 <= 0.999000013f))
    eax = 0xff
else if (0.00100000005f <= arg3)
    eax = (int.d(arg3 * 255f + 0.5f)).b
else
    eax = 0

result:2.b = eax

if (not(arg4 <= 0.999000013f))
    result:3.b = 0xff
    return result

if (0.00100000005f <= arg4)
    result:3.b = (int.d(arg4 * 255f + 0.5f)).b
    return result

result:3.b = 0
return result
