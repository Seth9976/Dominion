// 函数: sub_75fa60
// 地址: 0x75fa60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2
int32_t* eax = sub_761e10(arg1, esi)

if (eax != 0)
    esi = *eax

if (esi != 0)
    void* ecx = *(arg1 + (((esi & 0xfff) - 1) << 2) + 0x50)
    
    if (ecx != 0)
        if ((*(ecx + 8) & 0xfffff) == esi u>> 0xc)
            return (esi & 0xfff) - 1

return 0xffffffff
