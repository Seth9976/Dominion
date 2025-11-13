// 函数: sub_5a1360
// 地址: 0x5a1360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = arg1[1]
float xmm1 = arg2[1]
xmm0 - xmm1
int32_t eax
eax:1.b =
    (xmm0 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, xmm1) ? 1 : 0) << 2 | (xmm0 < xmm1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t eax_3
    eax_3.b = *arg2 f<= *arg1
    return (eax_3 << 1) + 0xffffffff

int32_t eax_1
eax_1.b = xmm1 <= xmm0
return (eax_1 << 1) + 0xffffffff
