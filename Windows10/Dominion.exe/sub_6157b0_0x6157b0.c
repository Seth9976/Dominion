// 函数: sub_6157b0
// 地址: 0x6157b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = data_b809e0

for (void* edx = data_b809e4 * 0x1c30 + i; i u< edx; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 4 && *(i + 0x1b0) == arg1)
                return i
            
            i += 0x1c30
            
            if (i u>= edx)
                break
            
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= edx)
                    goto label_615845
        
        break

label_615845:
sub_63b870(i, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xc48e, 
    "LookupToken")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
