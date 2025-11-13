// 函数: sub_75f610
// 地址: 0x75f610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2->__offset(0x18).d == 0)
    return arg2

sub_75ae50(arg1)
int32_t i = 0

if (*(arg1 + 0x1c) s> 0)
    void* ebx_1 = arg1 + 0x50
    
    do
        void* eax_1 = *ebx_1
        
        if (eax_1 != 0 && *(eax_1 + 0x17c) == arg2->__offset(0x18).d)
            sub_760f30(arg1, i)
        
        i += 1
        ebx_1 += 4
    while (i s< *(arg1 + 0x1c))

return sub_75ec70(arg1)
