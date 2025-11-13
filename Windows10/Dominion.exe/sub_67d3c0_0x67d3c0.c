// 函数: sub_67d3c0
// 地址: 0x67d3c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1_1 = arg2 f- arg1[0x23]

if (not(arg1[0x1f] f+ arg1[0x1e] > xmm1_1) && arg1[0x1b] s<= 1)
    *arg3 = arg1[0xf]
    return arg3

uint32_t esi = sub_67ef30(arg1, arg2 f- arg1[0x22])
uint32_t var_10 = esi
uint32_t var_c = sub_67ef30(&arg1[0xf], xmm1_1)
int32_t eax_3
float xmm0_2
eax_3, xmm0_2 = sub_64c3c0(&arg1[0x1e], xmm1_1)
xmm0_2 - 0f
eax_3:1.b =
    (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2 | (xmm0_2 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    esi = sub_5af6f0(&var_10, &var_c, xmm0_2)

uint32_t* eax_5 = arg3
*eax_5 = esi
return eax_5
