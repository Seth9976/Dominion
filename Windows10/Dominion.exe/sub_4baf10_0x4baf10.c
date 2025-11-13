// 函数: sub_4baf10
// 地址: 0x4baf10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *arg2
void* i

if (eax != 0)
    i = eax + 0x1330
else
    i = *arg1

for (; i u< arg1[1] * 0x1330 + *arg1; i += 0x1330)
    if ((*(i + 0x1328) & 0xffff0000) != 0)
        *arg2 = i
        i.b = 1
        return i

*arg2 = 0xffffffff
i.b = 0
return i
