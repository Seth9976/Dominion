// 函数: __dtol3
// 地址: 0x761e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if ((data_8c4008 & 0x20) == 0)
    int64_t xmm0_1[0x2] = _mm_cvttpd_epi64(arg1.q, zx.o(arg2))
    __vpextrd_gpr32d_xmmdq_immb(xmm0_1, 1)
    return xmm0_1

int32_t eax_1 = arg2.d
int32_t edx_1 = arg2:4.d
int32_t edx_2 = edx_1 & 0x7fffffff

if (edx_2 u< 0x41e00000)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(int.d(arg2))
    return eax_3

if (edx_2 u>= 0x43e00000)
    return 0

if (sbb.d(&__return_addr, &__return_addr, test_bit(edx_1, 0x1f)) == 0)
    return _dtol3_getbits(eax_1, edx_2) __tailcall

int32_t eax_5
int32_t edx_5
eax_5, edx_5 = _dtol3_getbits(eax_1, edx_2)
return neg.d(eax_5)
