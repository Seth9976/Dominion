// 函数: sub_4b5010
// 地址: 0x4b5010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_8 = arg1
char** result = arg1
void* ecx = data_cc8d5c
char** result_1 = result

if (ecx != 0)
    int32_t i_1 = 8
    void* esi_1 = &sub_4bb050(ecx + 0x507c, result)[0x46e]
    int32_t i
    
    do
        int32_t eax_1 = *esi_1
        
        if (eax_1 != 0)
            _aligned_free(eax_1)
        
        esi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    result = data_cc8d5c
    
    if (result != 0)
        if (result[0x141a] == 2 && result[0x141b] == result_1)
            return sub_4b0e60(result_1)
        
        return result

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
