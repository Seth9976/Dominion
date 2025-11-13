// 函数: sub_5ac7c0
// 地址: 0x5ac7c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2

if (result s< 0 || result s> arg1[2])
    sub_63b870(result, &data_801800, "size_arg >= 0 && size_arg <= mSizeReserved", 
        "C:\x\ax2017\Engine\xArray.h", 0x62, "XArray<struct Bin2DNode *>::SetSize")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

int32_t ecx = arg1[1]
int32_t edi_1 = result - ecx

if (edi_1 s> 0)
    result = memset(*arg1 + (ecx << 2), 0, edi_1 << 2)
    arg1[1] += edi_1
else if (edi_1 s< 0)
    arg1[1] = result

return result
