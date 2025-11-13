// 函数: sub_4bbb30
// 地址: 0x4bbb30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (arg1[1] != arg3 || *arg1 != arg2 || arg1[2] != arg4 || arg1[3] != 0)
label_4bbb7e:
    result = sub_67be20(arg4)
    arg1[8] = result
    
    if (result == 0)
        return result
    
    arg1[1] = arg3
    *arg1 = arg2
    arg1[2] = arg4
    arg1[3] = 0
else
    result = arg1[8]
    
    if (result == 0)
        goto label_4bbb7e
    
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u>= data_c23bac || *(ecx * 0x18d0 + data_c23ba8 + 0x18c8) != result)
        goto label_4bbb7e

return result
