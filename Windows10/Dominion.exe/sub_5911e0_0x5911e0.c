// 函数: sub_5911e0
// 地址: 0x5911e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = sub_5768a0(arg3)
uint32_t esi = arg10

if (esi == 0xffffffff)
    esi = arg2

*eax_1 = arg6
*(eax_1 + 8) = arg7
*(eax_1 + 0x14) = esi
*(eax_1 + 0x58) = arg9
*(eax_1 + 0xc) = arg8
*(eax_1 + 0x7c) = arg11
*(eax_1 + 0x18) = arg2
*(eax_1 + 0x1c) = 0
*(eax_1 + 0x20) = 0
*(eax_1 + 0x24) = 0
*(eax_1 + 0x4c) = 3
*(eax_1 + 0x50) = arg4
*(eax_1 + 0x54) = arg5
*(eax_1 + 0x44) = 0
*(eax_1 + 0x48) = 0
*(eax_1 + 0x70) = 0
*(eax_1 + 0x74) = 0
*(eax_1 + 0x80) = arg12
int32_t eax_7 = *(arg3 + 0x1504)

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    int32_t ecx_1
    ecx_1.b = eax_7 == 2
    sub_61b1b0(eax_7, 0x1b, ecx_1.b, arg2, arg4, arg5, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

int32_t* ecx_2 = *(eax_1 + 0x7c)

if (ecx_2 != 0)
    int32_t eax_8 = *(arg3 + 0x1504)
    
    if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6)
        int32_t* var_3c_2 = ecx_2
        ecx_2.b = eax_8 == 2
        sub_61b1b0(eax_8, 0x1b, ecx_2.b, arg2, 0x14, var_3c_2, *(eax_1 + 0x80), nullptr, nullptr, 
            0, 0, 0, 0, 0)

return *(eax_1 + 0x40)
