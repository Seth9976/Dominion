// 函数: sub_5e9900
// 地址: 0x5e9900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_cc8d5c

if (esi == 0)
    sub_63b870(arg1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = *(esi + 0x5068)

if (result != 5)
    if (result == 1)
        sub_5e94e0(sub_4d5db0(arg3, arg2), arg4)
        *(esi + 0x506c)
        TPI1::QueryTiForCVRecord(arg3)
        return sub_4b9680(&arg3[2], arg2) __tailcall
    
    if (result == 2)
        return sub_5e97a0(result, arg2, arg3, arg4, 0)

return result
