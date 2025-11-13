// 函数: sub_584790
// 地址: 0x584790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = arg2 << 5
int32_t* ebx_1 = &arg3[0x54b2] + eax_1

if (arg2 == 0xffffffff)
    eax_1 = sub_591930()

int32_t eax_2 = sub_571f30(eax_1, ebx_1[1], arg3, *ebx_1, arg4, 0)

if (arg4 == 0x476)
    sub_591930()

int32_t result

if (eax_2 == 0xffffffff && ebx_1[5] == 1)
    ebx_1[2] = arg4
    result = arg3[0x541]
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        result = sub_61b1b0(result, 0x13, result == 2, ebx_1[1], arg2, arg4, nullptr, nullptr, 
            nullptr, 0, 0, 0, 0, 0)
    
    goto label_5848fe

int32_t ecx_2 = ebx_1[1]
int32_t edx_1 = *ebx_1
void* eax_3 = ebx_1[2]
int32_t var_10_1 = edx_1
int32_t var_28_1
char const* const var_24_1
char* ecx_3

if (ecx_2 != 0xffffffff || eax_3 != 0)
    if (eax_3 == 0x476)
        if (ecx_2 == 0xffffffff)
            sub_591930()
            edx_1 = var_10_1
        
        eax_3 = 0x3f1
    
    int32_t eax_4 = sub_571f30(eax_3, ecx_2, arg3, edx_1, eax_3, 0)
    
    if (eax_4 == 0xffffffff)
        sub_591930()
    
    void* eax_5 = sub_571cb0(eax_4, eax_4, arg3, 0xffffffff, 0, 0)
    
    if (var_10_1 == 0x601)
        eax_5 = sub_583350(arg3)
    
    int32_t var_24_2 = 0
    int32_t var_28_2 = 0xffffffff
    int32_t var_2c_1 = 0
    result = sub_571fa0(eax_5, ebx_1[1], arg3, *ebx_1, 1, arg4, nullptr)
label_5848fe:
    
    if (arg4 == 0x3f1 || arg4 == 6 || arg4 == 1)
        return result
    
    int32_t ecx_8 = *ebx_1
    
    if (ecx_8 == 0xe01)
        return result
    
    eax_3 = arg4 - 7
    
    if (eax_3 u<= 0x40)
        result = arg3[0x541]
        
        if (result == 3 || result == 5 || result == 4 || result == 6 || arg3[0x540].b != 0)
            return result
        
        int32_t edx_5 = ebx_1[1]
        int32_t eax_6 = edx_5
        
        if (edx_5 == arg3[0x673])
            eax_6 = arg3[0x674]
        
        return sub_59f9b0(eax_6, edx_5, arg3, eax_6, 0xd, 0, nullptr, 0, ecx_8, 1, 
            arg3[arg4 * 4 + 0x549], 0)
    
    var_24_1 = "BoardPileWhat"
    var_28_1 = 0x1118
    ecx_3 = "where >= CW_BOARD_STANDARD_START && where < END_BOARD_PILES"
else
    var_24_1 = "AddTokens"
    var_28_1 = 0x271
    ecx_3 = "who != PLAYER_NONE || where != CW_NONE"

sub_63b870(eax_3, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28_1, 
    var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
