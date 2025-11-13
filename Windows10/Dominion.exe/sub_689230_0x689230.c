// 函数: sub_689230
// 地址: 0x689230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* var_4 = arg1
void* result = *(arg1 + 0x38)

if (result != 5)
    if (result != 4 && result != 2 && result != 3)
        sub_63b870(result, &data_801800, 
            "loc.connectStatus == NETWORK_CONNECT_OPEN || loc.connectStatus == NETWORK_CONNECT_WAITING "
        "|| loc.connectStatus == NETWORK_CONNECT_WAITING_SSL", 
            "C:\x\ax2017\Engine\Network.cpp", 0x15d, "NetConnectionClosed")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = *(arg1 + 0x3c)
    *(arg1 + 0x38) = 5
    
    if (result == 2)
        return sub_6891a0(arg1, 0x3ec)
    
    if (result == 1)
        return sub_6891a0(arg1, 0x5de)
    
    if (result == 3)
        return sub_6891a0(arg1, 0xfa2)

return result
