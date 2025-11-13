// 函数: sub_60ddf0
// 地址: 0x60ddf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *arg1
int32_t temp0 = *arg2
bool cond:0 = ecx s< temp0
int32_t* result

if (ecx == temp0)
    result = arg1[1]
    int32_t temp1_1 = arg2[1]
    cond:0 = result s< temp1_1
    
    if (result == temp1_1)
        sub_63b870(result, &data_801800, "a.firstTry != b.firstTry", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xb0da, "SortCampaignResults")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

result.b = cond:0
return result
