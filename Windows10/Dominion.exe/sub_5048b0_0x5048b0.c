// 函数: sub_5048b0
// 地址: 0x5048b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_3 = sub_573400()
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = sx.q(sub_583fc0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x1000))
int32_t result = (eax_1 + (edx_1 & 3)) s>> 2

if (result != 0)
    result = sub_561af0(result, 0, result, 0)

return result
