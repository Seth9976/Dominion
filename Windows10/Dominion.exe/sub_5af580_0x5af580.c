// 函数: sub_5af580
// 地址: 0x5af580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = arg5 - arg12
bool cond:0 = arg5 == arg12
int64_t* esi = arg11
arg5 = eax_1
void* edi_1

if (cond:0)
    edi_1 = arg7
else if (arg13 == 0)
    esi = arg10
    edi_1 = arg7
else if (eax_1 s<= arg13 && eax_1 s<= arg8)
    uint32_t count_2 = arg2 - arg10
    memmove(arg7, arg10, count_2)
    uint32_t count = esi - arg2
    memmove(arg10, arg2, count)
    esi = count + arg10
    edi_1 = arg7
    eax_1 = memmove(esi, edi_1, count_2)
else if (arg13 s> arg8)
    if (arg10 != arg2)
        if (arg2 != esi)
            sub_5af6b0(arg10, arg2)
            sub_5af6b0(arg2, esi)
            sub_5af6b0(arg10, esi)
            eax_1 = (esi - arg2) s/ 0xc * 3
            esi = arg10 + (eax_1 << 2)
        else
            esi = arg10
    
    edi_1 = arg7
else
    uint32_t count_1 = esi - arg2
    memmove(arg7, arg2, count_1)
    uint32_t count_3 = arg2 - arg10
    memmove(arg11 - count_3, arg10, count_3)
    edi_1 = arg7
    eax_1 = memmove(arg10, edi_1, count_1)
    esi = count_1 + arg10

sub_5adcb0(eax_1, arg10, arg3, esi, arg12, arg13, edi_1, arg8, arg9)
int32_t eax_10 = arg6 - arg13
return sub_5adcb0(eax_10, arg11, esi, arg4, arg5, eax_10, arg7, arg8, arg9)
