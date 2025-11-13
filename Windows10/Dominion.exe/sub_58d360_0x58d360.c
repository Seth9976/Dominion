// 函数: sub_58d360
// 地址: 0x58d360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
uint32_t edi = zx.d(arg2.w)
int32_t eax = *arg1

if (edi u>= 0x320)
    sub_591930()

int32_t edi_2 = *(edi * 0x64 + eax + 0x1a4c)
int32_t eax_2 = *arg1
uint32_t eax_3 = zx.d(arg3.w)

if (eax_3 u>= 0x320)
    sub_591930()

int32_t result = *(eax_3 * 0x64 + eax_2 + 0x1a4c)

if (edi_2 s< result)
    result.b = 0
    return result

if (edi_2 s<= result)
    result.b = arg2 s< arg3
    return result

result.b = 1
return result
