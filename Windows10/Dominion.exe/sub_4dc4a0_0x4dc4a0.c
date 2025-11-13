// 函数: sub_4dc4a0
// 地址: 0x4dc4a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 - 2 u> 0x11)
    int32_t eax
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
        0x627, "DefaultEditionFlag")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

bool cond:0_1

switch (arg2 + &jump_table_4dc514[6]:2)
    case &lookup_table_4dc530, &lookup_table_4dc530[1]
        return 1
    case &lookup_table_4dc530[2]
        if (arg1 s< 0xc)
            return 3
        
        return 1
    case &lookup_table_4dc530[3], &lookup_table_4dc530[7], &lookup_table_4dc530[9], 
            &lookup_table_4dc530[0xa], &lookup_table_4dc530[0xb], &lookup_table_4dc530[0xc], 
            &lookup_table_4dc530[0xd], &lookup_table_4dc530[0xe], &lookup_table_4dc530[0xf], 
            &lookup_table_4dc530[0x10], &lookup_table_4dc530[0x11]
        return 0
    case &lookup_table_4dc530[4]
        cond:0_1 = arg1 s>= 0xe
    case &lookup_table_4dc530[5]
        cond:0_1 = arg1 s>= 0x14
    case &lookup_table_4dc530[6]
        if (arg1 s>= 0xf)
            return 1
        
        return 0
    case &lookup_table_4dc530[8]
        int32_t result
        result.b = arg1 s>= 0x15
        return result

if (cond:0_1 || arg1 s>= 0xf)
    return 1

return 0
