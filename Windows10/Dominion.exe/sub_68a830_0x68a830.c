// 函数: sub_68a830
// 地址: 0x68a830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result
int32_t var_2c_2
char const* const ecx_7

while (true)
    void** i = *(arg1 + 0x44)
    void* esi_1 = nullptr
    
    if (i != 0)
        do
            result = *i
            i = i[1]
            esi_1 += *(result + 0xfdec)
        while (i != 0)
        
        if (esi_1 u>= 0xc)
            int32_t var_14
            sub_68a300(result, &var_14, arg1, 0xc, i.b)
            void* var_10
            int32_t var_c
            
            if (var_10 u> 0xed30)
                sub_63b7f0("net error: header.messageLength >= 0 && header.messageLength <= MAX_NET_MESSAGE_SIZE")
                result = sub_6892c0(arg1)
            else if (var_c s<= 0x3e8)
                sub_63b7f0("net error: header.messageType > NETMSG_MIN_VALUE")
                result = sub_6892c0(arg1)
            else if (var_14 != 0xfeedface)
                sub_63b7f0("
                    net error: header.magicNumber == header.magicNumber == NETWORK_MAGIC_NUMBER")
                result = sub_6892c0(arg1)
            else
                result = var_10 + 0xc
                
                if (esi_1 s< result)
                    void** i_1 = *(arg1 + 0x44)
                    int32_t edx_7 = 0
                    
                    while (i_1 != 0)
                        result = *i_1
                        i_1 = i_1[1]
                        edx_7 += *(result + 0xfdec)
                    
                    if (esi_1 != edx_7)
                        char const* const var_28_6 = "EnqueueWholeReceivedNetworkMessages"
                        var_2c_2 = 0x452
                        ecx_7 = "receiveSize == NetBufferTotalReceivedSize(loc)"
                        break
                else
                    sub_68a300(result, &var_14, arg1, 0xc, 1)
                    int32_t* i_2 = *(arg1 + 0x44)
                    int32_t edx_3 = 0
                    
                    while (i_2 != 0)
                        int32_t eax_2 = *i_2
                        i_2 = i_2[1]
                        edx_3 += *(eax_2 + 0xfdec)
                    
                    result = esi_1 - 0xc
                    
                    if (result != edx_3)
                        char const* const var_28_4 = "EnqueueWholeReceivedNetworkMessages"
                        var_2c_2 = 0x458
                        ecx_7 = "receiveSize - (int)sizeof(NetPacketHeader) == 
                            NetBufferTotalReceivedSize(loc)"
                        break
                    
                    uint32_t eax_3 = sub_688ff0()
                    *eax_3 = arg1[6].d
                    *(eax_3 + 8) = var_10
                    *(eax_3 + 4) = var_c
                    *(eax_3 + 0xed44) = *arg1
                    *(eax_3 + 0xed54) = arg1[1]
                    
                    if (var_10 s> 0)
                        result = sub_68a300(eax_3, eax_3 + 0xc, arg1, var_10, 1)
                        void** i_3 = *(arg1 + 0x44)
                        int32_t edx_5 = 0
                        
                        while (i_3 != 0)
                            result = *i_3
                            i_3 = i_3[1]
                            edx_5 += *(result + 0xfdec)
                        
                        if (esi_1 - var_10 - 0xc != edx_5)
                            char const* const var_28_3 = "EnqueueWholeReceivedNetworkMessages"
                            var_2c_2 = 0x463
                            ecx_7 = "receiveSize - (int)sizeof(NetPacketHeader) - header."
                            "messageLength == NetBufferTotalReceivedSize(loc)"
                            break
                    
                    void* esi_4 = data_147abf4
                    int32_t* eax_4 = sub_64bfd0(0xc)
                    eax_4[3] += 1
                    
                    if (*eax_4 == 0)
                        sub_64be70(eax_4)
                    
                    uint32_t* ecx_6 = *eax_4
                    *eax_4 = *ecx_6
                    ecx_6[2] = 0
                    *ecx_6 = eax_3
                    ecx_6[1] = 0
                    ecx_6[2] = *(esi_4 + 0x3c)
                    result = *(esi_4 + 0x3c)
                    
                    if (result == 0)
                        *(esi_4 + 0x38) = ecx_6
                    else
                        *(result + 4) = ecx_6
                    
                    *(esi_4 + 0x40) += 1
                    *(esi_4 + 0x3c) = ecx_6
                    
                    if (*(eax_3 + 4) s> 0x3e8)
                        continue
                    
                    char const* const var_28_2 = "EnqueueWholeReceivedNetworkMessages"
                    var_2c_2 = 0x469
                    ecx_7 = "netMessage->messageType > NETMSG_MIN_VALUE"
                    break
    
    CookieCheckFunction(result)
    return result

sub_63b870(result, &data_801800, ecx_7, "C:\x\ax2017\Engine\Network.cpp", var_2c_2, 
    "EnqueueWholeReceivedNetworkMessages")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
