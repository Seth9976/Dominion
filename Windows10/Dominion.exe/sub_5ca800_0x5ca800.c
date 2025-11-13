// 函数: sub_5ca800
// 地址: 0x5ca800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[1] == "tbl_opponents" && *arg1 == arg2 && arg1[2] == arg3 && arg1[3] == "tbl_opponent_pods"
        && arg1[4] == arg4 && arg1[5] == arg5 && arg1[6] == 0)
    return arg1[8]

sub_67be20(arg3)
int32_t eax_3 = sub_67be20(arg4)

if (eax_3 == 0)
    arg1[8] = eax_3
    return eax_3

int32_t eax_4 = sub_67be20(nullptr)
arg1[8] = eax_4

if (eax_4 == 0)
    return eax_4

*arg1 = arg2
arg1[5] = arg5
arg1[4] = arg4
arg1[1] = "tbl_opponents"
arg1[2] = arg3
arg1[3] = "tbl_opponent_pods"
arg1[6] = 0
return eax_4
