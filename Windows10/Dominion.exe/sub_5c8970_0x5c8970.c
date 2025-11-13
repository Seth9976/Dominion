// 函数: sub_5c8970
// 地址: 0x5c8970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t esi = arg2

if (esi s>= arg4)
    return 

int32_t* eax = *arg3
void* edi_1 = arg3[1]
int32_t var_14_1 = esi << 2

do
    float xmm1_2 = *(var_14_1 + *(edi_1 + 0x10))
        - *(*(edi_1 + 0x20) + (esi << 2)) f* *(*(edi_1 + 0x1c) + (esi << 2)) f/ *(edi_1 + 0x24)
    var_14_1 += 4
    float xmm1_4 = xmm1_2 f/ *(edi_1 + 0x2c) f+ *(edi_1 + 0x34)
    *(*eax + (esi << 2)) = _mm_sqrt_ss(xmm1_4, xmm1_4)
    esi += 1
while (esi s< arg4)
