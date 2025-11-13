// 函数: sub_5ca740
// 地址: 0x5ca740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[1] == arg3 && *arg1 == arg2 && arg1[2] == arg4 && arg1[3] == arg5 && arg1[4] == arg6
        && arg1[5] == 0)
    return arg1[8]

int32_t eax_2 = sub_67be20(arg4)
int32_t eax_3

if (arg6 != 0xffffffff)
    if (eax_2 == 0)
        arg1[8] = eax_2
        return eax_2
    
    eax_3 = sub_67be20(arg6)
    arg1[8] = eax_3
    
    if (eax_3 != 0)
        goto label_5ca7ab
else
    arg1[8] = eax_2
    
    if (eax_2 != 0)
        eax_3 = sub_67bd70(eax_2, arg5)
        arg1[8] = eax_3
    label_5ca7ab:
        *arg1 = arg2
        arg1[1] = arg3
        arg1[2] = arg4
        arg1[3] = arg5
        arg1[4] = arg6
        arg1[5] = 0
        return eax_3
return 0
