// 函数: sub_6fe900
// 地址: 0x6fe900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_147abf4
int32_t esi = *arg1
uint32_t count
int32_t ecx_3
uint32_t count_1

if (esi == 0)
label_6fe94e:
    count_1 = arg1[2]
    ecx_3 = 0xffffffff
    count = count_1
else
    uint32_t ecx = zx.d(esi.w)
    
    if (ecx u>= *(eax_2 + 4))
        goto label_6fe94e
    
    void* ecx_2 = ecx * 0x64 + *eax_2
    
    if (*(ecx_2 + 0x60) != esi || ecx_2 == 0)
        goto label_6fe94e
    
    ecx_3 = *(ecx_2 + 0x24)
    count_1 = arg1[2]
    count = count_1
    
    if (ecx_3 == 0)
        count_1 -= 4
        count = count_1

int32_t eax_3
eax_3.b = ecx_3 == 0
void* result = (eax_3 << 2) + 0xc + arg1
void* result_1 = result
char const* const var_2b0_1
int32_t var_2ac_1
char const* const var_2a8_1
char* ecx_4

if (count_1 u>= 0x10)
    void* ecx_5 = data_147abf4
    int32_t edi_1
    
    if (esi == 0)
        edi_1 = 0xffffffff
    else
        uint32_t eax_5 = zx.d(esi.w)
        
        if (eax_5 u>= *(ecx_5 + 4))
            edi_1 = 0xffffffff
        else
            void* eax_7 = eax_5 * 0x64 + *ecx_5
            
            if (*(eax_7 + 0x60) != esi || eax_7 == 0)
                edi_1 = 0xffffffff
            else
                edi_1 = *(eax_7 + 0x24)
    
    void* result_2 = nullptr
    result = data_cb3a30
    void* ecx_7 = data_cb3a34 * 0x34 + result
    
    while (true)
        if (result_2 != 0)
            result_2 += 0x34
        else
            result_2 = result
        
        if (result_2 u>= ecx_7)
        label_6fe9e5:
            
            if (data_19e3bb4 == 0)
                data_19e3bb4 = 1
                result = sub_63b5f0("Server got voip from unknown client")
        else
            while ((*(result_2 + 0x30) & 0xffff0000) == 0)
                result_2 += 0x34
                
                if (result_2 u>= ecx_7)
                    goto label_6fe9e5
            
            if (edi_1 == 0)
                if (arg1[0x3b51] != 1 || *(result_2 + 0xc) != 1)
                    var_2a8_1 = "CompareNetworkAddress"
                    var_2ac_1 = 0x8eb
                    var_2b0_1 = "C:\x\ax2017\Engine\Network.cpp"
                    ecx_4 = "a.type == ADDR_IPV4 && b.type == ADDR_IPV4"
                    break
                
                result.w = *(arg1 + 0xed4a)
                bool cond:0_1 = result.w != *(result_2 + 0x12)
                result = data_cb3a30
                
                if (cond:0_1)
                    continue
                else
                    result = arg1[0x3b53]
                    
                    if (result != *(result_2 + 0x14))
                        result = data_cb3a30
                        continue
            else if (*(result_2 + 4) != esi)
                continue
            
            if (result_2 == 0)
                goto label_6fe9e5
            
            void* result_3 = result_1
            void* esi_1 = nullptr
            *result_3 = *result_2
            
            while (true)
                if (esi_1 != 0)
                    esi_1 += 0x34
                else
                    esi_1 = data_cb3a30
                
                result = data_cb3a34 * 0x34 + data_cb3a30
                
                if (esi_1 u>= result)
                    break
                
                while ((*(esi_1 + 0x30) & 0xffff0000) == 0)
                    esi_1 += 0x34
                    
                    if (esi_1 u>= result)
                        CookieCheckFunction(result)
                        return result
                
                if (*(result_2 + 0x2c) == *(esi_1 + 0x2c))
                    if (result_2 == esi_1 && data_cb3a4c == 0)
                        continue
                    
                    int32_t edi_2 = *(esi_1 + 8)
                    
                    if (edi_2 != 0)
                        if (count + 4 s>= 0x280)
                            sub_63b870(count + 4, &data_801800, 
                                "packetLength < VOIP_BYTES_PER_FRAME", 
                                "C:\x\ax2017\Engine\Voip.cpp", 0xc8, "VoipServerGotMessage")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        int32_t var_28c = 0xbb9
                        void var_288
                        memcpy(&var_288, result_3, count)
                        sub_689d70(count + 4, esi_1 + 0xc, edi_2, count + 4, &var_28c)
                    else
                        int32_t eax_11 = *(esi_1 + 4)
                        void* ecx_12 = data_147abf4
                        
                        if (eax_11 == 0)
                            continue
                        else
                            uint32_t edx_1 = zx.d(eax_11.w)
                            
                            if (edx_1 u< *(ecx_12 + 4))
                                result_3 = result_1
                                void* edi_4 = edx_1 * 0x64 + *ecx_12
                                
                                if (*(edi_4 + 0x60) != eax_11)
                                    continue
                                else if (edi_4 == 0)
                                    continue
                                else
                                    int32_t var_2a8_2 = 0xbb9
                                    sub_689e00(eax_11, count, edi_4 + 0x50)
                                    sub_689be0(result_1, count, edi_4 + 0x50, result_1)
                    
                    result_3 = result_1
        
        CookieCheckFunction(result)
        return result
else
    var_2a8_1 = "VoipServerGotMessage"
    var_2ac_1 = 0x9f
    var_2b0_1 = "C:\x\ax2017\Engine\Voip.cpp"
    ecx_4 = "dataLen >= sizeof(VoipMsgHeader)"

sub_63b870(result, &data_801800, ecx_4, var_2b0_1, var_2ac_1, var_2a8_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
