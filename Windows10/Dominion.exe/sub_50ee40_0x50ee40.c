// 函数: sub_50ee40
// 地址: 0x50ee40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edx_2 = (data_cca784 << 0xb) + data_cca780
int32_t edi = 0
int32_t var_30[0xa]
int32_t* i

for (i = nullptr; i s< 0xa; )
    int32_t ecx = *(edx_2 + (edi << 2) + 0xc)
    
    if (ecx == 0)
        break
    
    var_30[edi] = ecx
    i += 1
    edi += 1

int32_t esi = 0

if (edi s> 0)
    do
        int32_t ecx_1 = var_30[esi]
        
        if (ecx_1 == 0)
            sub_63b870(i, &data_801800, "cards[i] != CARD_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xc94, "HasAtLeastOne")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        for (i = *(data_1597e0c + (((ecx_1 s>> 4 | ecx_1) & data_1597e10) << 2)); i != 0; i = i[4])
            if (ecx_1 == *i)
                void* ecx_2 = &i[1]
                
                if (ecx_2 != 0)
                    i = nullptr
                    int32_t ecx_3 = *(ecx_2 + 4)
                    
                    if (ecx_3 s> 0)
                        do
                            if (*(*ecx_2 + (i << 2)) == arg1)
                                i.b = 1
                                CookieCheckFunction(i)
                                return i
                            
                            i += 1
                        while (i s< ecx_3)
                
                break
        
        esi += 1
    while (esi s< edi)

i.b = 0
CookieCheckFunction(i)
return i
