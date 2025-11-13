// 函数: sub_68af60
// 地址: 0x68af60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* var_8 = arg1

if (*(arg1 + 0x58) == 0)
    return 

while (true)
    int32_t* edi_1 = arg1[5].d
    char const* const var_20_2
    int32_t var_1c_2
    char const* const var_18_3
    void* const eax
    char* ecx_5
    
    if (edi_1 == 0)
        var_18_3 = "XList<struct NetBuffer *>::GetHead"
        var_1c_2 = 0x53
        var_20_2 = "C:\x\ax2017\Engine\xList.h"
        ecx_5 = "mpHead != NULL"
    else
        void* edi_2 = *edi_1
        int32_t ebx_1 = *(edi_2 + 0xfdec)
        
        if (ebx_1 s<= 0)
            var_18_3 = "NetLocTCPSend"
            var_1c_2 = 0x559
            var_20_2 = "C:\x\ax2017\Engine\Network.cpp"
            ecx_5 = "netBuffer->mDataSize > 0"
        else
            int32_t eax_1 = *(arg1 + 0x24)
            
            if (eax_1 == 3 || eax_1 == 4)
                eax = nullptr
            else
                eax = (*(*data_147abf8 + 0x2c))(arg1[2].d, *(edi_2 + 0xfde8) + edi_2, ebx_1)
                
                if (eax == 0xffffffff)
                    sub_689230(arg1)
                    return 
            
            if (*(arg1 + 0x58) s> 0x1388)
                sub_63b7f0("Client stopped receiving data. closing.")
                (*(*data_147abf8 + 0x34))(arg1[2].d)
                sub_689230(arg1)
                return 
            
            int32_t ecx_1 = *(edi_2 + 0xfdec)
            
            if (eax s< ecx_1)
                if (eax s>= 0)
                    *(edi_2 + 0xfde8) += eax
                    *(edi_2 + 0xfdec) = ecx_1 - eax
                    return 
                
                var_18_3 = "NetLocTCPSend"
                var_1c_2 = 0x581
                var_20_2 = "C:\x\ax2017\Engine\Network.cpp"
                ecx_5 = "sent >= 0"
            else
                int32_t* ecx_2 = arg1[5].d
                void* eax_4 = ecx_2[1]
                arg1[5].d = eax_4
                
                if (eax_4 == 0)
                    *(arg1 + 0x54) = 0
                else
                    *(eax_4 + 8) = 0
                
                int128_t* edi_3 = *ecx_2
                *(arg1 + 0x58) -= 1
                sub_64c080(ecx_2, 0xc)
                void* ecx_3 = data_147abf4
                var_8 = edi_3
                eax = sub_68b830(ecx_3 + 0x44, &var_8)
                
                if (*(arg1 + 0x58) == 0)
                    break
                
                continue
    
    sub_63b870(eax, &data_801800, ecx_5, var_20_2, var_1c_2, var_18_3)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
