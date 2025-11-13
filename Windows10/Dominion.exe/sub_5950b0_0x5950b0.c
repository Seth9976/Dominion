// 函数: sub_5950b0
// 地址: 0x5950b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
uint32_t result_1 = *(arg1 + 4)
uint32_t esi_1 = zx.d((*arg2).w)

if (esi_1 u>= 0x320)
    sub_591930()

uint32_t result = result_1
int32_t ebx = esi_1 * 0x64

if ((*(ebx + result + 0x1a6c) & 1) == 0)
    void* edi_1 = *(arg1 + 4)
    
    if (esi_1 u>= 0x320)
        result = sub_591930()
    
    if (sub_5754f0(result, *(ebx + edi_1 + 0x1a4c), edi_1, 0x40000000, 0).b == 0)
        result.b = 1
        return result

result.b = 0
return result
