// 函数: sub_5749d0
// 地址: 0x5749d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
uint32_t eax = arg2 * 0x5a30

if (arg1[arg2 * 0x168c + 0x5d3f] != 0)
    return sub_590760(eax, arg2, arg1, 2, 0xffffffff, 0, 2)

uint32_t eax_2 = sub_576b30(eax, arg2, arg1, 0x31, 0, 0, 0)
uint32_t edx = arg2
int32_t* ecx_1 = arg1

if (eax_2 s<= 0)
    int32_t eax_3 = sub_576dd0(eax_2, edx, ecx_1, 0x34, 0)
    
    if (eax_3 s<= 0)
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            0xb2a, "SpendBuy")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_5911e0(eax_3, arg2, arg1, 0x34, 0xffffffff, 1, 0, 0, 0, 0xffffffff, 0, 0)
    edx = arg2
    ecx_1 = arg1

return sub_5748b0(ecx_1, edx)
