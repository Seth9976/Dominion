// 函数: sub_67d670
// 地址: 0x67d670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *arg2
void* i

if (eax != 0)
    i = eax + 0x18d0
else
    i = *arg1

for (; i u< arg1[1] * 0x18d0 + *arg1; i += 0x18d0)
    if ((*(i + 0x18c8) & 0xffff0000) != 0)
        *arg2 = i
        i.b = 1
        return i

*arg2 = 0xffffffff
i.b = 0
return i
