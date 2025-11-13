// 函数: sub_61cf40
// 地址: 0x61cf40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1

for (void* const i = &data_7e7d30; i != 0x7e9700; i += 0xec)
    if (*i == arg1)
        int32_t j_3 = 0xffffffff
        int32_t j_1 = 0
        
        for (int32_t j = 0; j s< 8; )
            int32_t edx = *(i + j * 0xc + 0x8c)
            
            if (edx == 0)
                j_1 = j
                break
            
            int32_t j_2 = j
            
            if (edx != arg2)
                j_2 = j_3
            
            j += 1
            j_3 = j_2
        
        int32_t j_4 = 0
        
        if (j_3 != 0xffffffff)
            j_4 = j_3
        
        return *(i + mods.dp.d(sx.q(j_4 + 1), j_1) * 0xc + 0x8c)

int32_t eax
sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xddf7, 
    "SmartplayNextOption")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
