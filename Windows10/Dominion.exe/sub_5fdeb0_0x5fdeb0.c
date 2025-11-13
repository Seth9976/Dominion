// 函数: sub_5fdeb0
// 地址: 0x5fdeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_be4a3c = arg1
data_be4a40 = arg2

if (arg2 != 0xffffffff)
    int32_t* eax_1 = sub_63d850(&data_be4a38, sub_5fd600(arg2))
    data_8db6b0 = 0x7f0
    return eax_1

void* eax_2 = data_be4a38

if (eax_2 != 0 && eax_2 != &data_801800)
    if (data_cf65bc != 0 && *eax_2 != 0)
        eax_2 = sub_63d4e0(&data_be4a38)
        int32_t temp0_1 = *(eax_2 + 4)
        *(eax_2 + 4) -= 1
        
        if (temp0_1 == 1)
            eax_2 = sub_64c080(eax_2, *(eax_2 + 0xc) + 0x10)
    
    data_be4a38 = &data_801800

data_8db6b0 = 0x7f0
return eax_2
