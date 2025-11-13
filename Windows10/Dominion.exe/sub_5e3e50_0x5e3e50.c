// 函数: sub_5e3e50
// 地址: 0x5e3e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg3
void* eax = sub_5e3c60(0)
int32_t edx = 0
int32_t esi = *(eax + 0x200)

if (esi s> 0)
    do
        if (*(eax + (edx << 3)) == arg3)
            *(eax + (edx << 3) + 4) = arg4
            return sub_5e3da0(0)
        
        edx += 1
    while (edx s< esi)

*(eax + 0x200) = esi + 1
*(eax + (esi << 3)) = arg3
*(eax + (esi << 3) + 4) = arg4
return sub_5e3da0(0)
