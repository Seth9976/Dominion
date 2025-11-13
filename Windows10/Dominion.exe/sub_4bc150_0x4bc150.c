// 函数: sub_4bc150
// 地址: 0x4bc150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** performanceCount = arg2
int32_t ecx = data_8dbf38

if (ecx != 2)
    int32_t result
    result.b = ecx != 3
    return result

void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t edi = arg1[0x468]
int32_t edx = 0
void* ecx_4

if (edi s<= 0)
label_4bc1ae:
    ecx_4 = nullptr
else
    void* ecx_3 = &arg1[0x16]
    
    while (*(ecx_3 - 4) != 1 || *ecx_3 != *(eax + 0x4250))
        edx += 1
        ecx_3 += 0x22c
        
        if (edx s>= edi)
            goto label_4bc1ae
    
    ecx_4 = ecx_3 - 0x18

void** performanceCount_2 = performanceCount
int32_t eax_2 = arg1[9]
*performanceCount_2 = ecx_4
int32_t eax_5

if (eax_2 s> 0x3e8)
    if (eax_2 == 0x3e9)
        return 7
    
    eax_5 = eax_2 - 0x3ea
    
    if (eax_2 == 0x3ea)
        if (ecx_4 == 0)
            return 0x12
        
        if (*(ecx_4 + 0x20) == 0x3e9)
            return 0xb
        
        return 0xd
else
    if (eax_2 == 0x3e8)
        if (ecx_4 == 0)
            return 0x11
        
        int32_t eax_25 = *(ecx_4 + 0x20)
        
        if (eax_25 != 0x3ec && eax_25 != 0x3ed)
            return 0xe
        
        return 0xc
    
    if (eax_2 == 0)
        QueryPerformanceCounter(&performanceCount)
        void** performanceCount_1 = performanceCount
        int32_t var_c
        int32_t eax_13
        int32_t edx_1
        edx_1:eax_13 = muls.dp.d(0x10624dd3, 
            sub_63c000(performanceCount_1 - *arg1, 
                sbb.d(var_c, arg1[1], performanceCount_1 u< *arg1)))
        int32_t edx_2 = edx_1 s>> 6
        
        if (arg1[0xf] - ((edx_2 u>> 0x1f) + edx_2) s< 0)
            return 6
        
        void* eax_17 = *performanceCount_2
        
        if (eax_17 != 0)
            if (*(eax_17 + 0x20) == 1)
                return 2
            
            return 4
        
        if (arg1[9] == 0)
            int32_t i = 0
            void* eax_22 = &arg1[0x15]
            
            do
                if (*eax_22 == 2)
                    return 3
                
                i += 1
                eax_22 += 0x22c
            while (i s< 8)
        
        return 5
    
    if (eax_2 == 1)
        if (ecx_4 == 0)
            return 0xf
        
        int32_t eax_7
        eax_7.b = *(ecx_4 + 0x20) == 4
        return eax_7 + 8
    
    eax_5 = eax_2 - 2
    
    if (eax_2 == 2)
        if (ecx_4 != 0)
            return 0xa
        
        return 0x10

sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
    0x266, "GetGameStatusMenu")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
