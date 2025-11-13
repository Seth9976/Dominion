// 函数: sub_6e08a0
// 地址: 0x6e08a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2

if (result s< 0 || result s> *(arg1 + 8))
    sub_63b870(result, &data_801800, "size_arg >= 0 && size_arg <= mSizeReserved", 
        "C:\x\ax2017\Engine\xArray.h", 0x62, "XArray<struct Mat4>::SetSize")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

int32_t ecx = *(arg1 + 4)
int32_t edi_1 = result - ecx

if (edi_1 s> 0)
    result = memset((ecx << 6) + *arg1, 0, edi_1 << 6)
    *(arg1 + 4) += edi_1
else if (edi_1 s< 0)
    *(arg1 + 4) = result

return result
