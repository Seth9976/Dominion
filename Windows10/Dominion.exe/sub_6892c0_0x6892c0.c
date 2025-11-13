// 函数: sub_6892c0
// 地址: 0x6892c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg1[2].d

if (edx != 0xffffffff)
    int32_t eax_1 = *(arg1 + 0x24)
    
    if (eax_1 == 3 || eax_1 == 4)
        sub_6891a0(arg1, 0xfa2)
        int32_t* ecx_6 = data_147abf8
        int32_t var_18_4 = arg1[2].d
        *(arg1 + 0x38) = 5
        (*(*ecx_6 + 0x34))(var_18_4)
    else
        int32_t var_1c
        char const* const var_18_2
        char* ecx_1
        
        if (eax_1 == 1 || eax_1 == 2)
            (*(*data_147abf8 + 0x34))(edx)
            eax_1 = *(arg1 + 0x38)
            
            if (eax_1 != 5)
                if (eax_1 != 4 && eax_1 != 2 && eax_1 != 3)
                label_6894c9:
                    var_18_2 = "NetConnectionClosed"
                    var_1c = 0x15d
                    ecx_1 = "loc.connectStatus == NETWORK_CONNECT_OPEN || loc.connectStatus == "
                    "NETWORK_CONNECT_WAITING || loc.connectStatus == NETWORK_CONNECT_WAITING_SSL"
                    goto label_6894e2
                
                int32_t eax_5 = *(arg1 + 0x3c)
                *(arg1 + 0x38) = 5
                
                if (eax_5 == 2)
                    sub_6891a0(arg1, 0x3ec)
                else if (eax_5 == 1)
                    sub_6891a0(arg1, 0x5de)
                else if (eax_5 == 3)
                    sub_6891a0(arg1, 0xfa2)
        else if (eax_1 != 0)
            if (eax_1 != 5)
                var_18_2 = "NetLocFree"
                var_1c = 0x195
                ecx_1 = "Halt"
            label_6894e2:
                sub_63b870(eax_1, &data_801800, ecx_1, "C:\x\ax2017\Engine\Network.cpp", var_1c, 
                    var_18_2)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_1 = *(arg1 + 0x38)
            
            if (eax_1 != 5)
                if (eax_1 != 4 && eax_1 != 2 && eax_1 != 3)
                    goto label_6894c9
                
                int32_t eax_3 = *(arg1 + 0x3c)
                *(arg1 + 0x38) = 5
                
                if (eax_3 == 2)
                    sub_6891a0(arg1, 0x3ec)
                else if (eax_3 == 1)
                    sub_6891a0(arg1, 0x5de)
                else if (eax_3 == 3)
                    sub_6891a0(arg1, 0xfa2)
        else
            (*(*data_147abf8 + 0xc))(edx)

int32_t var_8

while (*(arg1 + 0x4c) != 0)
    int32_t* ecx_7 = *(arg1 + 0x44)
    void* eax_7 = ecx_7[1]
    *(arg1 + 0x44) = eax_7
    
    if (eax_7 == 0)
        *(arg1 + 0x48) = 0
    else
        *(eax_7 + 8) = 0
    
    int32_t edi_1 = *ecx_7
    *(arg1 + 0x4c) -= 1
    sub_64c080(ecx_7, 0xc)
    void* ecx_8 = data_147abf4
    var_8 = edi_1
    sub_68b830(ecx_8 + 0x44, &var_8)

while (*(arg1 + 0x58) != 0)
    int32_t* ecx_10 = arg1[5].d
    void* eax_8 = ecx_10[1]
    arg1[5].d = eax_8
    
    if (eax_8 == 0)
        *(arg1 + 0x54) = 0
    else
        *(eax_8 + 8) = 0
    
    int32_t edi_2 = *ecx_10
    *(arg1 + 0x58) -= 1
    sub_64c080(ecx_10, 0xc)
    void* ecx_11 = data_147abf4
    var_8 = edi_2
    sub_68b830(ecx_11 + 0x44, &var_8)

return sub_68b8a0(data_147abf4, arg1)
