// 函数: sub_6e2050
// 地址: 0x6e2050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg1
int32_t result

if (ebx.b s>= 0)
    result = isdigit(sx.d(ebx.b))

if ((ebx.b s>= 0 && result != 0) || (ebx - 0x61).b u<= 5)
    result.b = 1
    return result

ebx.b -= 0x41
result.b = ebx.b u<= 5
return result
