// 函数: sub_588340
// 地址: 0x588340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t eax

if (arg2 == 0xffffffff)
    sub_63b870(eax, &data_801800, "who != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x33e, "GetPileHead")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (arg1[arg2 * 0x168c + 0x5cb5] != 0)
    eax = arg1[0x541]
    
    if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && arg1[0x540].b == 0)
        uint32_t eax_1 = arg2
        
        if (arg2 == arg1[0x673])
            eax_1 = arg1[0x674]
        
        eax = sub_59f9b0(eax_1, arg2, arg1, eax_1, 4, 0, nullptr, 0, 0, 0, 0, 0)

int32_t result = sub_572ee0(eax, 0x3eb, arg1, arg2)
uint32_t ebx_1

for (int32_t i = arg1[arg2 * 0x168c + 0x5cb5]; i != 0; i = arg1[ebx_1 * 0x19 + 0x6a9])
    ebx_1 = zx.d(i.w)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    uint32_t ecx_1 = arg2
    arg1[ebx_1 * 0x19 + 0x694] = 0x3eb
    
    if (arg1[ebx_1 * 0x19 + 0x69c] != ecx_1)
        sub_591930()
        ecx_1 = arg2
    
    result = arg1[0x541]
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        uint32_t var_40_1 = ecx_1
        ecx_1.b = result == 2
        result = sub_61b1b0(result, 9, ecx_1.b, var_40_1, i, 0x3eb, 0xffffffff, nullptr, 0xf, 0, 0, 
            0, 0, 0)

return result
