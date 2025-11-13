// 函数: sub_4bb9f0
// 地址: 0x4bb9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != 0xffffffff)
label_4bba37:
    result = sub_67bd70(arg2, arg3)
    arg1[8] = result
    
    if (result == 0)
        return result
    
    arg1[1] = arg3
    *arg1 = arg2
    arg1[2] = 0xffffffff
else
    result = arg1[8]
    
    if (result == 0)
        goto label_4bba37
    
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u>= data_c23bac || *(ecx * 0x18d0 + data_c23ba8 + 0x18c8) != result)
        goto label_4bba37

return result
