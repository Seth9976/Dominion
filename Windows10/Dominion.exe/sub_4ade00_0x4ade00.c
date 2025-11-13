// 函数: sub_4ade00
// 地址: 0x4ade00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg1 = &data_8db51c
arg1[1] = 0
void* i = data_8db51c

for (void* ecx_1 = data_8db520 * 0xc04 + i; i u< ecx_1; i += 0xc04)
    if ((*(i + 0xc00) & 0xffff0000) != 0)
        arg1[1] = i
        return arg1

arg1[1] = 0xffffffff
return arg1
