// 函数: sub_571c40
// 地址: 0x571c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result_1
int32_t* result = sub_571bc0(*arg1, &result_1)
int32_t* result_2 = result
int32_t edx_1 = 0

if (result_2 s> 0)
    result = result_1
    
    do
        if (*result == arg1[1])
            if (result != 0)
                return result
            
            break
        
        edx_1 += 1
        result = &result[0x11]
    while (edx_1 s< result_2)

sub_63b870(result, &data_801800, "pDef", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1ee, 
    "GameSepcific_GetDlcDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
