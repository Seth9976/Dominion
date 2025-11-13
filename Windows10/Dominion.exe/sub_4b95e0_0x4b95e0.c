// 函数: sub_4b95e0
// 地址: 0x4b95e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result_1 = data_cc8d5c
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx

if (result_1 != 0)
    if (*(result_1 + 0x5068) == 0)
        return 0
    
    result_1 = sub_4b93f0()
    void* result = nullptr
    int32_t i_2 = *(result_1 + 0x11a8)
    
    if (i_2 s> 0)
        void* edx_1 = result_1 + 0x5c
        int32_t i_1 = i_2
        int32_t i
        
        do
            bool cond:0_1 = *edx_1 == 0
            result_1 = result + 1
            edx_1 += 0x22c
            
            if (cond:0_1)
                result_1 = result
            
            result = result_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (result == i_2)
        return result
    
    var_10 = "ActiveNumPlayers"
    var_14 = 0x12d9
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "total == gameSafeNumPlayers"
else
    var_10 = "GetClient"
    var_14 = 0x7b
    var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(result_1, &data_801800, ecx, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
