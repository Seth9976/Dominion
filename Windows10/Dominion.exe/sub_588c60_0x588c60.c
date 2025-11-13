// 函数: sub_588c60
// 地址: 0x588c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t var_8 = ebx
int32_t result_1 = *sub_5722c0(arg1, 0x3eb, arg3, ebx)
int32_t result

if (result_1 != 0)
    while (true)
        uint32_t ebx_1 = zx.d(result_1.w)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        int32_t result_2 = arg3[ebx_1 * 0x19 + 0x6a9]
        
        if (result_2 == 0)
            break
        
        result_1 = result_2
    
    result = result_1
    
    if (result_1 == 0)
        ebx = var_8
        goto label_588cd5
else
    result = result_1
label_588cd5:
    result_1 = *sub_5722c0(sub_588490(arg3, ebx), 0x3eb, arg3, ebx)
    
    if (result_1 == 0)
        return 0
    
    while (true)
        uint32_t ebx_2 = zx.d(result_1.w)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        int32_t result_3 = arg3[ebx_2 * 0x19 + 0x6a9]
        
        if (result_3 == 0)
            break
        
        result_1 = result_3
    
    result = result_1
    
    if (result_1 == 0)
        return 0

int32_t eax_7 = arg3[0x541]

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6 && arg3[0x540].b == 0)
    int32_t eax_6 = var_8
    
    if (var_8 == arg3[0x673])
        eax_6 = arg3[0x674]
    
    eax_7 = sub_59f9b0(eax_6, var_8, arg3, eax_6, 0x2c, 0, &result, 1, 0, 0, 0, 0)
    result_1 = result

sub_5822e0(eax_7, var_8, arg3, result_1, nullptr, 0x3ee, 5, arg4, arg5, arg6, 0, 0, nullptr, 0, 
    0xffffffff, nullptr)
return result
