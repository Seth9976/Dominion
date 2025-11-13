// 函数: sub_7622d0
// 地址: 0x7622d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (data_cc8d30 s>= 2)
    return int.d(arg3)

int32_t result = arg3:4.d
uint32_t ecx = zx.d(arg3:8.w)
int16_t ecx_1 = ecx.w & 0x7fff
int32_t edx = sbb.d(arg2, arg2, test_bit(ecx, 0xf))

if (ecx_1 u< 0x3fff)
    return 0

if (result s< 0)
    if (ecx_1 u< 0x401e)
        return (result u>> (neg.w(ecx_1) + 0x403e).b ^ edx) - edx
    
    if (ecx_1 u<= 0x401e && edx s< 0 && result == 0x80000000)
        return result

arg3 - fconvert.t(-nanf)
return 0x80000000
