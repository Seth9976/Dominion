// 函数: sub_4bad70
// 地址: 0x4bad70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg2 = arg1
arg2[1] = 0
void* i = *arg1

for (void* ecx_1 = arg1[1] * 0x1330 + i; i u< ecx_1; i += 0x1330)
    if ((*(i + 0x1328) & 0xffff0000) != 0)
        arg2[1] = i
        return arg2

arg2[1] = 0xffffffff
return arg2
