// 函数: sub_50c460
// 地址: 0x50c460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
int32_t* result = data_cca780 + 0x58c + (data_cca784 << 0xb)

do
    if (*result == 0)
        *result = 0xdb1
        int32_t j = 0
        result[1] = 0x911
        result[2] = 0xffffffff
        result[3] = 0
        result[4] = 0
        result = data_cca780 + 0x58c + (data_cca784 << 0xb)
        
        do
            if (*result == 0)
                *result = 0xdb1
                int32_t k = 0
                result[1] = 0x911
                result[2] = 0xffffffff
                result[3] = 0
                result[4] = 0
                result = data_cca780 + 0x58c + (data_cca784 << 0xb)
                
                do
                    if (*result == 0)
                        *result = 0xdb1
                        int32_t edx = 0
                        result[1] = 0x911
                        result[2] = 0xffffffff
                        result[3] = 0
                        result[4] = 0
                        result = data_cca780 + 0x58c + (data_cca784 << 0xb)
                        
                        do
                            if (*result == 0)
                                *result = 0xdb2
                                int32_t edx_1 = 0
                                result[1] = 0x911
                                result[2] = 0xffffffff
                                result[3] = 0
                                result[4] = 0
                                result = data_cca780 + 0x58c + (data_cca784 << 0xb)
                                
                                do
                                    if (*result == 0)
                                        *result = 0xdb2
                                        result[1] = 0x911
                                        result[2] = 0xffffffff
                                        result[3] = 0
                                        result[4] = 0
                                        return result
                                    
                                    edx_1 += 1
                                    result = &result[5]
                                while (edx_1 s< 0x20)
                                
                                break
                            
                            edx += 1
                            result = &result[5]
                        while (edx s< 0x20)
                        
                        break
                    
                    k += 1
                    result = &result[5]
                while (k s< 0x20)
                
                break
            
            j += 1
            result = &result[5]
        while (j s< 0x20)
        
        break
    
    i += 1
    result = &result[5]
while (i s< 0x20)

sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0x242, "CampaignAddExtra")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
