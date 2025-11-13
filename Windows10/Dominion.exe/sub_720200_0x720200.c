// 函数: sub_720200
// 地址: 0x720200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0x10) != 0)
    int32_t ecx = *(arg3 + 0xa8)
    uint32_t count = *(arg3 + 0xac) - ecx
    
    if (count s< arg4)
        memcpy(arg2, ecx, count)
        uint32_t edi_1 = arg4 - count
        int32_t eax_6 = (*(arg3 + 0x10))(*(arg3 + 0x1c), count + arg2, edi_1)
        *(arg3 + 0xa8) = *(arg3 + 0xac)
        int32_t result
        result.b = eax_6 == edi_1
        return result

int32_t ecx_2 = *(arg3 + 0xa8)

if (ecx_2 + arg4 u> *(arg3 + 0xac))
    return 0

memcpy(arg2, ecx_2, arg4)
*(arg3 + 0xa8) += arg4
return 1
