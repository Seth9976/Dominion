// 函数: sub_571da0
// 地址: 0x571da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = 0x3f1

if (arg5 != 0x476)
    esi = arg5

if (sub_571f30(arg1, arg2, arg3, arg4, esi, 0) != 0xffffffff)
    sub_591930()

if (*(arg3 + 0x19a4) s>= 0x100)
    sub_591930()

int32_t result_1 = *(arg3 + 0x19a4)
int32_t result

if (esi != 0x474)
label_571e30:
    result = result_1
    *(arg3 + 0x19a4) = result_1 + 1
else
    result = 0
    
    if (result_1 s<= 0)
        goto label_571e30
    
    void* eax_1 = arg3 + 0x152d0
    
    while (*(eax_1 - 8) != arg4 || *(eax_1 - 4) != arg2 || *eax_1 != 0x474 || *(eax_1 + 0xc) != 0)
        result += 1
        eax_1 += 0x20
        
        if (result s>= result_1)
            goto label_571e30
    
    if (result == 0xffffffff)
        goto label_571e30

int32_t eax_4 = result << 5
*(eax_4 + arg3 + 0x152c8) = arg4
*(eax_4 + arg3 + 0x152d0) = esi
*(eax_4 + arg3 + 0x152dc) = arg7
*(eax_4 + arg3 + 0x152cc) = arg2
*(eax_4 + arg3 + 0x152d4) = arg6
*(eax_4 + arg3 + 0x152d8) = 0
*(eax_4 + arg3 + 0x152e0) = 0
*(eax_4 + arg3 + 0x152e4) = 0
int32_t eax_5 = *(arg3 + 0x1504)

if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6)
    int32_t* ecx_3
    ecx_3.b = eax_5 == 2
    sub_61b1b0(eax_5, 0x12, ecx_3.b, arg2, result, arg4, esi, arg6, arg7, 0, 0, 0, 0, 0)

return result
