// 函数: sub_704c60
// 地址: 0x704c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1 + (arg2 << 2)
(*__glewQueryCounter)(*(esi + 0x4270), 0x8e28)
arg2 = 0
return (*__glewGetQueryObjectiv)(*(esi + 0x4270), 0x8867, &arg2)
