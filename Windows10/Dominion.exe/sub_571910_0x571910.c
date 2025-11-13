// 函数: sub_571910
// 地址: 0x571910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1
char edx
edx:eax_1 = sx.q(arg1)
int32_t eax_3 = (eax_1 + zx.d(edx)) s>> 8
int32_t esi_1 = arg1 - (eax_3 << 8)

if (eax_3 - 1 u> 0x11)
    sub_63b870(eax_3 - 1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xa3, 
        "DomExpGetTokens")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax_3 + &jump_table_5719ec[8]:3)
    case &lookup_table_571a10, &lookup_table_571a10[1], &lookup_table_571a10[2], 
            &lookup_table_571a10[4], &lookup_table_571a10[6], &lookup_table_571a10[7], 
            &lookup_table_571a10[8], &lookup_table_571a10[0xc], &lookup_table_571a10[0xe], 
            &lookup_table_571a10[0x10]
        return esi_1 * 0x5bc
    case &lookup_table_571a10[3]
        return &(&data_b49a10)[esi_1 * 0x16f]
    case &lookup_table_571a10[5]
        return &(&data_b0a050)[esi_1 * 0x16f]
    case &lookup_table_571a10[9]
        return &(&data_a747a0)[esi_1 * 0x16f]
    case &lookup_table_571a10[0xa]
        return &(&data_8f95d8)[esi_1 * 0x16f]
    case &lookup_table_571a10[0xb]
        return &(&data_a6be00)[esi_1 * 0x16f]
    case &lookup_table_571a10[0xd]
        return &(&data_b202a8)[esi_1 * 0x16f]
    case &lookup_table_571a10[0xf]
        return &(&data_923a28)[esi_1 * 0x16f]
    case &lookup_table_571a10[0x11]
        return esi_1 * 0x5bc + &data_b3ad88
