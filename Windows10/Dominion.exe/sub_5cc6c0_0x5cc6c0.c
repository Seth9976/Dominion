// 函数: sub_5cc6c0
// 地址: 0x5cc6c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14
void* i_1
char* ecx_5
int32_t ebx_1

if (arg1 s<= 0xd4a)
    if (arg1 != 0xd4a)
        if (arg1 == 0x603)
            ebx_1 = 0x603
            goto label_5cc734
        
        if (arg1 != 0xd00)
            goto label_5cc8e6
        
        ebx_1 = arg1
        goto label_5cc734
    
    ebx_1 = 0xd07
label_5cc734:
    
    for (void* i = &data_b8199c; i s< 0xb81a8c; i += 4)
        int32_t ecx_1 = *i
        
        if (ecx_1 == 0)
            break
        
        if (ecx_1 == ebx_1)
            ebx_1 = 0x1300
            break
    
    uint32_t eax = sub_5cc650()
    int32_t esi_1 = 7
    void* edi_1 = &data_b8206c
    
    if (ebx_1 != eax)
        while (true)
            if (esi_1 s>= 0x48)
                eax = sub_591930()
            
            if (*edi_1 == ebx_1)
                break
            
            if (*(edi_1 + 4) == ebx_1)
                break
            
            edi_1 += 0x10
            esi_1 += 1
            
            if (edi_1 s>= 0xb8247c)
                goto label_5cc7bf
    else
        while (true)
            if (esi_1 s>= 0x48)
                eax = sub_591930()
            
            if (*edi_1 == 0xf3a)
                break
            
            if (*(edi_1 + 4) == 0xf3a)
                break
            
            edi_1 += 0x10
            esi_1 += 1
            
            if (edi_1 s>= 0xb8247c)
            label_5cc7bf:
                esi_1 = 0
                break
    
    if (esi_1 == 0)
        esi_1 = 7
        void* edi_2 = &data_b8206c
        
        while (true)
            if (esi_1 s>= 0x48)
                eax = sub_591930()
            
            if (*edi_2 != 0x121c && *(edi_2 + 4) != 0x121c)
                edi_2 += 0x10
                esi_1 += 1
                
                if (edi_2 s< 0xb8247c)
                    continue
            else if (esi_1 != 0)
                break
            
            esi_1 = 7
            void* edi_3 = &data_b8206c
            
            while (true)
                if (esi_1 s>= 0x48)
                    eax = sub_591930()
                
                if (*edi_3 == 0x1517)
                    break
                
                if (*(edi_3 + 4) == 0x1517)
                    break
                
                edi_3 += 0x10
                esi_1 += 1
                
                if (edi_3 s>= 0xb8247c)
                    esi_1 = 0
                    break
            
            break
    
    i_1 = sub_5cc410(eax, 0xffffffff, esi_1, 0, 0)
    
    if (i_1 != 0)
        return i_1
    
    i_1 = data_b809e0
    void* ecx_4 = data_b809e4 * 0x1c30 + i_1
    
    if (i_1 u< ecx_4)
        while (true)
            if ((*(i_1 + 0x1c28) & 0xffff0000) != 0)
                while (i_1 != 0xffffffff)
                    if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x30) == ebx_1)
                        return i_1
                    
                    i_1 += 0x1c30
                    
                    if (i_1 u>= ecx_4)
                        break
                    
                    while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                        i_1 += 0x1c30
                        
                        if (i_1 u>= ecx_4)
                            char const* const var_10_1 = "BoardAreaPile"
                            var_14 = 0xb7e
                            ecx_5 = "retval"
                            goto label_5cc8ff
                
                break
            
            i_1 += 0x1c30
            
            if (i_1 u>= ecx_4)
                char const* const var_10 = "BoardAreaPile"
                var_14 = 0xb7e
                ecx_5 = "retval"
                goto label_5cc8ff
    
    char const* const var_10_2 = "BoardAreaPile"
    var_14 = 0xb7e
    ecx_5 = "retval"
else if (arg1 - 0xd4b u> 0xd2)
label_5cc8e6:
    char const* const var_10_3 = "BoardAreaPile"
    var_14 = 0xb51
    ecx_5 = "Halt"
else
    i_1 = zx.d(*(arg1 + sub_5cbb20+0xc5))
    
    switch (i_1)
        case nullptr
            ebx_1 = 0xd3d
            goto label_5cc734
        case 1
            ebx_1 = 0xe07
            goto label_5cc734
        case 2
            ebx_1 = 0xe00
            goto label_5cc734
        case 3
            ebx_1 = 0xe17
            goto label_5cc734
        case 4
            ebx_1 = 0xe16
            goto label_5cc734
        case 5
            goto label_5cc8e6
label_5cc8ff:
sub_63b870(i_1, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_14, 
    "BoardAreaPile")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
