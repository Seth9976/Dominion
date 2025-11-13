// 函数: sub_4bba60
// 地址: 0x4bba60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != arg4 || arg1[3] != 0)
label_4bbab6:
    result = sub_67be20(arg4)
    arg1[8] = result
    
    if (result != 0)
        arg1[1] = arg3
        *arg1 = arg2
        arg1[2] = arg4
        arg1[3] = 0
else
    result = arg1[8]
    
    if (result == 0)
        goto label_4bbab6
    
    uint32_t edx_1 = zx.d(result.w)
    
    if (edx_1 u>= data_c23bac || *(edx_1 * 0x18d0 + data_c23ba8 + 0x18c8) != result)
        goto label_4bbab6

int32_t eax_4 = sub_67be20(arg4)

if (eax_4 == result)
    return result

sub_63b870(eax_4, &data_801800, "UI2GetHandle(arg_root, arg_name, arg_idx) == retval", 
    "C:\x\ax2017\Engine\UI2.h", 0x1c0, "UI2Selector::LookupForce")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
