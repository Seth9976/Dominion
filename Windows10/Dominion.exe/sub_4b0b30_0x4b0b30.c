// 函数: sub_4b0b30
// 地址: 0x4b0b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t* result = data_cc8d5c

if (result == 0)
    sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (result[0x1d64] != arg1)
    result[0x1d64] = arg1

if (result[0x1d65] != arg1)
    result[0x1d65] = arg1
    result = sub_4b9510()
    
    if (result.b != 0)
        int32_t ecx = data_b824bc
        int32_t eax_1
        
        if (data_b80b44 != data_b824a4)
            data_b604dc = ecx
            eax_1 = 2
        else if (data_b604dc == ecx)
            eax_1 = 1
        else
            data_b604dc = ecx
            eax_1 = 0
        
        data_cc8d70 = eax_1
        data_8db688 = 0x1a
        data_8db6b0 = 0x1b
        return sub_4d40e0((zx.o(0)).d)

return result
