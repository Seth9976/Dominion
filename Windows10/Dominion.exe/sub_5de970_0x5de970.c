// 函数: sub_5de970
// 地址: 0x5de970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = data_b809e0
int32_t eax

for (void* edx_1 = data_b809e4 * 0x1c30 + i; i u< edx_1; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            eax = arg1
            
            do
                if (*(i + 0x2c) == 5 && *(i + 0x1f4) == eax)
                    return i
                
                i += 0x1c30
                
                if (i u>= edx_1)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= edx_1)
                        goto label_5dea0d
            while (i != 0xffffffff)
        
        break

label_5dea0d:
sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3da3, 
    "LookupAbility")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
