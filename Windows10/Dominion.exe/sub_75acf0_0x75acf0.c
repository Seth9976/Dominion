// 函数: sub_75acf0
// 地址: 0x75acf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1

if (arg3 u>= 0x11 || arg6 == 3 || arg6 == 5 || arg6 == 7 || arg6 u> 8)
    return 1

sub_75aba0(arg1)
arg1[1] = sub_761ce0()
int32_t ecx = arg4
arg1[0x417] = 0

if (arg4 == 0)
    ecx = 0xac44

arg1[0x418] = 0
int32_t edx_1 = arg5
int32_t eax_2 = edx_1

if (edx_1 == 0)
    eax_2 = 0x800

int32_t result

if (arg3 == 6 || arg3 == 0)
    int32_t var_18_1 = arg6
    
    if (edx_1 == 0)
        eax_2 = 0x1000
    
    int32_t var_1c_1 = eax_2
    
    if (arg4 == 0)
        ecx = 0xbb80
    
    result = sub_7619e0(arg1, arg2, ecx)
    
    if (result == 0)
        arg1[0x417] = 6
        return result
    
    if (arg3 == 0)
        edx_1 = arg5
        
        if (arg3 != 0)
            goto label_75ae14
        
        goto label_75add7
else
    int32_t esi_1
    
    if (arg3 == 4 || arg3 == 0)
    label_75add7:
        
        if (edx_1 == 0)
            eax_2 = 0x1000
        
        result = sub_7613a0(arg1, arg2, ecx, eax_2, arg6)
        
        if (result == 0)
            arg1[0x417] = 4
            return result
        
        if (arg3 == 0)
            esi_1 = neg.d(arg3)
            return sbb.d(esi_1, esi_1, arg3 != 0) + 7
    else
    label_75ae14:
        
        if (arg3 != 0x10)
            esi_1 = neg.d(arg3)
            return sbb.d(esi_1, esi_1, arg3 != 0) + 7
        
        if (edx_1 == 0)
            eax_2 = 0x800
        
        result = sub_761c80(arg1, arg2, ecx, eax_2, arg6)
        
        if (result == 0)
            arg1[0x417] = arg3

return result
