// 函数: sub_68aa70
// 地址: 0x68aa70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg1[0xe]
int32_t var_14
char const* const var_10_1
char* ecx

if (eax != 1)
    if (eax == 3 || eax != 2)
        return eax
    
    eax = (*(*data_147abf8 + 0x1c))(arg1[8])
    
    if (eax == 2)
        return eax
    
    if (eax == 4)
        int32_t eax_4 = arg1[9]
        
        if (eax_4 == 3 || eax_4 == 4)
            arg1[0x10] = 0
            
            if (arg1 == 1)
                arg1[0xe] = 3
                return eax_4
        
        arg1[0xe] = 4
        return sub_6891a0(arg1, 0x3ea)
    
    if (eax != 5)
        var_10_1 = "UpdateTCPConnectStatus_Waiting"
        var_14 = 0x4a9
    else
        arg1[0xe] = eax
        eax = arg1[0xf]
        
        if (eax == 2)
            return sub_6891a0(arg1, 0x3eb)
        
        if (eax == 3)
            return sub_6891a0(arg1, 0xfa1)
        
        var_10_1 = "UpdateTCPConnectStatus_Waiting"
        var_14 = 0x4a2
    
    ecx = "Halt"
else if (*arg1 == eax)
    if (arg1[8] == 0xffffffff)
        int32_t eax_2 = (*(*data_147abf8 + 0x18))(arg1)
        arg1[8] = eax_2
        
        if (eax_2 != 0xffffffff)
            arg1[0xe] = 2
            return eax_2
        
        arg1[0xe] = 5
        return sub_6891a0(arg1, 0x3eb)
    
    var_10_1 = "UpdateTCPConnectStatus"
    var_14 = 0x4be
    ecx = "loc.socket == TG_INVALID_SOCKET"
else
    var_10_1 = "UpdateTCPConnectStatus"
    var_14 = 0x4bb
    ecx = "loc.address.type == ADDR_IPV4"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\Network.cpp", var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
