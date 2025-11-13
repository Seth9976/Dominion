// 函数: sub_63de90
// 地址: 0x63de90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_24 = data_19e399c
int32_t edi = __stdio_common_vsprintf(data_19e3998 | 2, nullptr, 0, arg2, nullptr, arg3)

if (edi s< 0)
    edi = 0xffffffff

if (edi s> 0)
    Mod1::CheckFCreateWriter(sub_63d5e0(0xffffffff, edi, arg1, 0), edi + 1, *arg1, arg2, arg3)
    return arg1

if (data_cf65bc != 0)
    char* eax_1 = *arg1
    
    if (eax_1 != 0 && *eax_1 != 0)
        char* eax_2 = sub_63d4e0(arg1)
        int32_t temp1_1 = *(eax_2 + 4)
        *(eax_2 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_2, *(eax_2 + 0xc) + 0x10)

*arg1 = &data_801800
return arg1
