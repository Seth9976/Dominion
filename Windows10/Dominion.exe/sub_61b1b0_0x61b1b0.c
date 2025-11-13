// 函数: sub_61b1b0
// 地址: 0x61b1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 != 0)
    return sub_618ce0(arg2, arg4, arg2, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, 
        arg14, 1)

int32_t esi = data_b80a24
int32_t eax_2 = data_b80a28
int32_t* ebx

if (esi s< eax_2)
    ebx = data_b80a20
else
    int32_t edi_1 = 0x10
    
    if (eax_2 != 0)
        edi_1 = eax_2 * 2
    
    ebx = sub_64c020(edi_1 * 0x38)
    int32_t eax_4 = data_b80a20
    
    if (eax_4 != 0)
        memcpy(ebx, eax_4, esi * 0x38)
        sub_64c080(data_b80a20, data_b80a28 * 0x38)
    
    esi = data_b80a24
    data_b80a20 = ebx
    data_b80a28 = edi_1

data_b80a24 = esi + 1
void* edx_4 = &ebx[(esi + 1) * 0xe]
*(edx_4 - 0xc) = arg14
*(edx_4 - 0x38) = arg2
*(edx_4 - 0x34) = arg4
*(edx_4 - 0x30) = arg5
*(edx_4 - 0x2c) = arg6
*(edx_4 - 0x28) = arg7
*(edx_4 - 0x24) = arg8
*(edx_4 - 0x20) = arg9
*(edx_4 - 0x1c) = arg10
*(edx_4 - 0x18) = arg11
*(edx_4 - 0x14) = arg12
*(edx_4 - 0x10) = arg13
*(edx_4 - 8) = 0
return arg13
